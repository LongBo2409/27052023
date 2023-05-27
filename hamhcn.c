#include<stdio.h>
void retangle(int s);
main(){
	int size;
	printf("Draw retangle!!\n");
	scanf("%d", &size);
	retangle(size);
	return 0;
}
void retangle(int s){
		for (int i = 0; i < s; ++i){
		
		printf("\n");
		for(int j = 0; j < s; ++j){
			printf("*");
		}
	}
		
}
