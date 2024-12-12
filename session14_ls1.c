#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("chuoi ki tu la ");
	fgets(str,100,stdin);
	int size=strlen(str);
	printf("do dai cua chuoi la: %d",size);
	return 0;
}
