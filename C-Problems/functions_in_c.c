/* PROBLEM STATMENT:

    WE NEED TO FIND THE LARGEST OF 3 INTEGERS:*/

//code

#include <stdio.h>

/*function to get largest among three numbers*/

int largestNumber(int a,int b, int c)
{
	int largest=0;
	if(a>b && a>c)
		largest=a;
	else if(b>a && b>c)
		largest=b;
	else
		largest=c;
	return largest;
}

int main()
{
	int a,b,c;
	
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("Largest number is: %d\n",largestNumber(a,b,c));
	
	return 0;
}