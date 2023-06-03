#include <stdio.h>
// int main() function
int main(){
	// Input
	int a, b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	int answer = 1;
	// Process and Print Ouput
	while(b > 0){
		answer *= a;
		b--;
	}
	printf("%d", answer);	
	return 0;
}
