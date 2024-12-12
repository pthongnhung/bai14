#include<stdio.h>
#include<string.h>
int main(){
	char str[]="pham thi hong nhung";
	int size=strlen(str);
	for(int i=size-1;i>=0;i--){
		printf("%c",str[i]);
	}
	return 0;
}
