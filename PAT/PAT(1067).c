# include <stdio.h>
# include <string.h>
int main(){
	char pwd[20];
	int tryNumber;
	scanf("%s",&pwd);
    scanf("%d",&tryNumber);
    int i=1;
    char temp[100];
    gets(temp);
    while(1){
    	
    	gets(temp);
    	
    	if(strcmp(temp,"#")==0) return 0;
    	if(strcmp(temp,pwd)==0){
	    	printf("Welcome in");
	    	return 0;
	    }else{
    		printf("Wrong password: %s",temp);
    		if(i==tryNumber){
		    	printf("\nAccount locked");
		    	return 0;
	        } 
    	}
    	i++;
    	
    }
}