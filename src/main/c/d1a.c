/**
 * Day 1: Inverse Captcha
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ISEQUAL(a, b) (a == b) 

int main(int argc, char **argv)
{
    char input[strlen(argv[1]+2)];
    strcpy(input, argv[1]);
    input[strlen(input)] = input[0];

    if (strlen(input)<1)
    {
        return 0;
    }
    
    int sum = 0;
    int curr = 0;
    
    for (int i=1;i<strlen(input);i++)
    {
        if (ISEQUAL(input[curr], input[i]))
        {
            sum += (input[curr] - '0');
        }
    
        curr = i;
    }
    
    printf("%s produces a sum of %d.\n", input, sum);
    return 0;
}
