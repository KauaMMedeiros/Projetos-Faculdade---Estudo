#include<stdio.h>
int main(){
	int i;
	
	for(i=10; i<20; i++){
		if(i%2 == 0){
			printf("\n%d", i);
		}
	}
	
	return 0;
}