#include <stdio.h>
// int main() function
int main(){
	// Input
	int i = 1;
	// Process and Print Output
	do{
		if(i % 10 == 0){
			printf("%d ", i);
		}
		i++;
	}while(i <= 1000);	
	return 0;
}
