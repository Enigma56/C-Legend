#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "conhelpers.h"
#include <readline/readline.h>

int main(void)
{
    bool gameRunning = true;
    char *line;
    do {
    	line = readline(">> ");

	//Exit Game Loop
	const char * EXIT_CODE = "e\0";
	if(!strcmp(line, EXIT_CODE)){
		printf("%s\n", "This point has been reached");
	    gameRunning = false;
	}
    } while(gameRunning);     
    
    free(line);
    return 0;
}
