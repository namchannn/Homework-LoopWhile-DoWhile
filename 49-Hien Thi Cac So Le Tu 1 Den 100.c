#include <stdio.h>
// int main() function
int main(){
	// Input
	int i;
	// Process and Print Output	
	for(i = 1; i <= 100; i++){
		if(i % 2 == 0){
			continue;
		}
		printf("%d ", i);
	}	
	return 0;
}
