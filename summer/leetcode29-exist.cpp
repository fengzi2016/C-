class Solution {
public:
     bool DFS(vector<vector<char> > board, int i, int j ,string word ,int index ) {
        
        if(index>=word.size())return true;
		if(i>=board.size()||i<0)return false;
        if(j>=board[0].size()||j<0)return false;
        if(board[i][j]!=word[index])  return false ;
        board[i][j] ^= 255;
		bool result = DFS(board,i+1,j,word,index+1)|| DFS(board,i-1,j,word,index+1) || DFS(board,i,j+1,word,index+1)||DFS(board,i,j-1,word,index+1);
        board[i][j] ^= 255;
        return result;
          
    }
bool exist(vector<vector<char> >& board, string word) {
        if(word.size()==0) return false;
        for(int i=0;i<board.size();i++) {
        	for(int j=0;j<board[0].size();j++) {
	        	bool isExist = DFS(board,i,j,word,0);
	        	if(isExist) return true;
	        }
        }
        return false;
    }
 
};