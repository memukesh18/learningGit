#include<stdio.h>

void main(){
	char name[50];
	printf("Please Enter your name :");
	/*fgets(name, 50);*/
	scanf("%s", name);
	printf("Hello %s!!\n", name);
}


