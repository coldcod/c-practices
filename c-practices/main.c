//
//  main.c
//  c-practices
//


#include <stdio.h>
#include <string.h>

int main() {
	int c = 0, f;
	printf("C\tF:\n-\t-\n");
	while(c<=300){
		f = c * 9/5 + 32;
		printf("%d\t%d\n", c, f);
		c += 20;
	}
	
	getchar();
    return 0;
}
