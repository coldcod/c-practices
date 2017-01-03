//
//  main.c
//  c-practices
//


#include <stdio.h>
#include <string.h>

int main() {
    // insert code here...
    char * word;
    printf("Hello, World!\n");
    fgets(word, sizeof(word), stdin);
    if (strncmp(word, "john doe", 10) == 0){
    	printf("john doe");
    }else {
    	printf("not john doe");
    }
    getchar();
    return 0;
}
