/* PROBLEM STATEMENT:
    TASK:
    For a given five digit number calculate the sum of it's five digits:

    Sample Input:
    10564

    Sample Output: 
    16 */

//code

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, temp=0, sum=0;
    scanf("%d", &n);
    while(n>0)
    {
        temp = n%10;
        n = n/10;
        sum = sum+temp;
    }
    printf("%d\n", sum);
    return 0;
}
