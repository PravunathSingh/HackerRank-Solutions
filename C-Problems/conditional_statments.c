/* PROBLEM STATEMENT:
    TASK:
    For a integer n between 1 to 10^9, check if,
    1<= n <= 9, then print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
    again if, n>9, then print "greater than 9"

    Sample Input:
    5

    Sample Output:
    five

    Sample Input #01:
    8

    Sample Output #01:
    eight

    Sample Input #02:
    44

    Sample Output #02:
    Greater than 9 */

// code

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* index[10] = {" ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int i;
    
    scanf("%d", &i);
    if(1<=i && i<=9)
    {
        printf("%s", index[i]);
    }
    else if(i>9)
    {
        printf("Greater than 9");
    }

    return 0;
}
