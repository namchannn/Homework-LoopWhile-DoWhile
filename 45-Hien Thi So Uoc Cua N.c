#include <stdio.h>
// int main() function
int main(){
	// Input
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	int i = 1;
	int count = 0;
	// Process and Print Output
	while(i <= n){
		if(n % i == 0){
			count++;
		}
		i++;
	}
	printf("%d", count);	
	return 0;
}
