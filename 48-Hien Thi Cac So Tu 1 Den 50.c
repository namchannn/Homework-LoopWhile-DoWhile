#include <stdio.h>
// int main() function
int main(){
	// Input
	int i = 1;
	// Process and Print Output
	while(i <= 50){
		if(i == 51){
			break;
		}
		printf("%d ", i);
		i++;
	}	
	return 0;
}
