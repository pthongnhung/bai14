#include<stdio.h> 
#include<string.h> 
int main(){
	char str[]="pham thi hong nhung";
	char character; 
	int size=strlen(str);
	int findCharacter=0;
	printf("Moi ban nhap ki tu: ");
	scanf("%c",&character); 
	for(int i=0;i<size;i++){
		if(character==str[i]){
			findCharacter+=1;
		}
	} 
	if(findCharacter>0){
		printf("so lan xuat hien cua ki tu %c la %d\n",character,findCharacter);
	}else{
			printf("khong ton tai phan tu");
	} 
	return 0; 
}
