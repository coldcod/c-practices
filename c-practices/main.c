//
//  main.c
//  c-practices
//


#include <stdio.h>
#include <string.h>

int main() {
	float c, f = 0;
	printf("F\tC:\n-\t-\n");
	while(f<=300){
		c = (5.0/9.0) * (f - 32.0);
		printf("%3.0f %6.1f\n", f, c);
		f += 20;
	}
	
	getchar();
    return 0;
}
