#include "conhelpers.h"

#include <stdio.h>
#include <ctype.h>
int test_sum(int a, int b){
    return a + b;
}

void print_string(char* str){
	printf("%s\n", str);

	int i = 0;
	char c = str[i];
	while(isalpha(c)){
		printf("%d\n", (int) c);
		c = str[i];
		i++;
	}
}
