/**
 * Day 1: Inverse Captcha
 * Part Two
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    int org_len = strlen(argv[1]);
    int STEP = strlen(argv[1]) / 2;
    char input[strlen(argv[1]) + STEP + 1];
    strncpy(input, argv[1], strlen(argv[1])+1);
    strncat(input, argv[1], STEP); 

    int sum = 0;
    int curr = 0;
    int len = strlen(input);

    for (int i=0;i<len;i++)
    {
        if (input[curr] == input[i+STEP])
        {
            sum += (input[curr] - '0');
        }
    
        curr = i+1;
        if (i+STEP > len-1)
        {
            break;
        }
    }
    
    printf("%s produces a sum of %d.\n", input, sum);
    return 0;
}
