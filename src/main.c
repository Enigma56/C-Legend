#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <string.h>
//#include "conhelpers.h"
#include <readline/readline.h>

int main(void)
{
    bool gameRunning = true;
    char *line;
    do {
    line = readline(">> ");
    printf("%s\n", line);

    //TODO: Learn to parse commands
    } while(gameRunning);     
    
    free(line);
    return 0;
}
