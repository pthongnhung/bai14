#include<stdio.h> 
#include<ctype.h> 
int main(){
	char str[]="pham thi hong nhung 1234";
	int size=(int)strlen(str);
	int count=0;
    	for(int i=0;i<size;i++){
			if(isalpha(str[i])){
				count++; 
			}
    	}
	printf("so ki tu trong chuoi la %d",count);
	return 0; 
}
