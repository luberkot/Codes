/* Котов Матвей 202-ИС*/
#include <stdio.h>
#define MAX 10
int main(){
	int arr[MAX];
	char c;
	int count=0;
	for(int i=0; i<10; i++)
		arr[i] = 0;
	while((c = getchar()) != EOF){
		if(c == '\n' || c == '\t' || c == ' '){
			if(count < MAX && count > 0){
				arr[count]++;
			}
		count = 0;
		} else {
			count++;
		}
		}
	if(count < MAX && count > 0){
		arr[count]++;
	}
		for(int i=1; i<MAX; i++){
				printf("\n%d:", i);
			for(int j=0; j<arr[i]; j++){
				putchar('*');
			}
		}
	return 0;
	}
