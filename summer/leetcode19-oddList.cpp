#include<iostream>
#include<algorithm>
#include<vector.h>
#include <string> 
#include <Math.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
int main() {
	ListNode* oddEvenList(ListNode* head) ;
	int arr[5] = {
		1,2,3,4,5
	};
	int i,j;
	ListNode *a = NULL,*tmp = NULL;
	for(i=0;i<5;i++) {
		ListNode *node = new ListNode(arr[i]);
		if(tmp==NULL) {
			tmp = node;
			a = tmp;
			
		}else{
			tmp->next = node;
			tmp = tmp->next;
		}
		
	}
	
	a = oddEvenList(a);
	while(a) {
	    cout<<a->val<<endl;
		a=a->next;
	}
		
	
	
}
	ListNode* oddEvenList(ListNode* head) {
		if(!head||!head->next)return head;
        ListNode *jiHead,*ouHead,*start,*nextStart,*tmp1=NULL,*tmp2=NULL;
        jiHead =  head;
        start = head ;
        nextStart = head -> next;
      
        while(start&&nextStart) {
            
            if(tmp1==NULL) {
                tmp1 = start;
                jiHead = tmp1;
            }else{
                tmp1 -> next = start;
                tmp1 = tmp1 -> next;  
            }
            if(tmp2==NULL) {
                tmp2 = nextStart;
                ouHead = tmp2;
            }else{
               tmp2 -> next = nextStart;
               tmp2 =  tmp2 -> next;
            }            
             if(nextStart->next==NULL)break;
             start =  start->next->next; 
             nextStart =  nextStart->next->next;
			  
			
        }
        tmp2->next = NULL;
        if(start) {
        	tmp1  -> next = start ;
        	tmp1 = tmp1 -> next;
        }
        
        tmp1->next = ouHead;
        
        return jiHead;
        
    }