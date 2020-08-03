/* PROBLEM STATEMENT:
    Task:
    Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:
    1. Declare 4 variables: two of type int and two of type float.
    2. Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your 4 variables.
    3. Use the + and - operator to perform the following operations:
        Print the sum and difference of two int variable on a new line.
        Print the sum and difference of two float variable rounded to one decimal place on a new line.
    
    Input Format:
    The first line contains two integers.
    The second line contains two floating point numbers.

    Output Format:
    Print the sum and difference of both integers separated by a space on the first line, and the sum and difference of both float separated by a space on the second line.

    Sample Input
    10 4
    4.0 2.0

    Sample Output
    14 6
    6.0 2.0 */

//code

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int input1, input2, sum1, difference1;
    float input3, input4, sum2, difference2;

    scanf("%d%d\n", &input1, &input2);
    scanf("%f%f\n", &input3, &input4);

    sum1 = input1+input2;
    difference1 = input1-input2;
    sum2 = input3+input4;
    difference2 = input3-input4;

    printf("%d %d\n", sum1, difference1);
    printf("%f %f", sum2, difference2);
    
    return 0;
}