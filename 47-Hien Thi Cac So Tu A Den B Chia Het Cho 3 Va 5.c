#include <stdio.h>
// int main() function
int main(){
	// Input
	int a, b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	// Process and Print Output
	while(a <= b){
		if((a % 3 == 0) && (a % 5 == 0)){
			printf("%d ", a);
		}
		a++;
	}	
	return 0;
}
