#include<stdio.h>

int main()
{
	int f,mid,l,flag=0;
        unsigned long int n;

	printf("enter a number n such that 1<=n<=10^9:\n");
	scanf("%ld",&n);


	f=0;
	l=n-1;



	// as we have to do the problem in order logn time so we implement binary search
	while(f<=l)
	{
		mid=(f+l)/2;  // finding mid element

		if(mid*mid<=n && (mid+1)*(mid+1)>n)      
		{
			printf("the required answer is: \n%d \n",mid);
			flag==1;
			break;
		}
		if(mid*mid>n)     //searching for number in first half
			l=mid-1;
		else 
			f=mid+1;    //searching for num in second half
	}

	// it is confirmed that that the square root of n  exist so no other condition required


	return 0;
} 
