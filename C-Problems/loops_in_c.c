/* PROBLEM STATEMENT:
    Task:
    For each integer n in the interval [a,b] (given as input) :
    If 1<= n <= 9 , then print the English representation of it in lowercase. That is "one" for 1 , "two" for 2 , and so on.
    Else if n>9  and it is an even number, then print "even".
    Else if n>9 and it is an odd number, then print "odd".

    Input Format:
    The first line contains an integer, a .
    The seond line contains an integer, b .

    Constraints:
    1<= a <= b  <= 10^6

    Sample Input:
    8
    11

    Sample Output:
    eight
    nine
    even
    odd  */

//code

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b, i;
    char* represent[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};  
    scanf("%d\n%d", &a, &b);
  	for(i=a; i<=b; i++)
    {
        if(i>9)
        {
            if(i%2 ==0)
                printf("even\n");
            else
                printf("odd\n");
        } 
        else  
        {
            printf("%s\n", represent[i]);
        } 
    }

    return 0;
}
