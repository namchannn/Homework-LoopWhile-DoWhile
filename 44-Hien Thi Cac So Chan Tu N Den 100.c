#include <stdio.h>
// int main() function
int main(){
	// Input
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	// Process and Print Output
	while(n <= 100){
		if(n % 2 == 0){
			printf("%d ", n);
		}
		n++;
	}	
	return 0;
}
