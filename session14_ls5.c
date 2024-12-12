#include<stdio.h> 
#include<string.h> 
int main(){
	char str[]="pham thi hong nhung ";
	int word=0;
	int i=0; 
	while(str[i] !='0'){
		if(str[i]==' '){
			word++; 
			while(str[i] !='0' && str[i]==' '){
				i++;
			}
		}else{
			i++; 
		} 
	}
	printf("so tu trong chuoi la: %d",word);
	return 0; 
}
