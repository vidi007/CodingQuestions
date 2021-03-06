// C program to find all possible permutations in which n people can occupy r seats in a theater

#include<stdio.h>

// Function to find the factorial of the number
int fact(long int x)
{
	long int f=1,i;
	for(i=1;i<=x;i++)
		{
			f=f*i;
		}
	return f;
}

int main()
{
	long int n,r,p,temp;
	long int num,den;
	// Enter the number of seats
	printf(“Enter the number of seats available : “);
	scanf(“%ld”,&r);
	// Enter the number of people
	printf(“nEnter the number of persons : “);
	scanf(“%ld”,&n);
	// Base condition
	// Swap n and r
	if(n < r)
	{
		temp=n;
		n=r;
		r=temp;
	}
	num=fact(n);
	den=fact(n-r);
	p=num/den;
	printf(“nNumber of ways people can be seated : “);
	printf(“%ld”,p);
}

