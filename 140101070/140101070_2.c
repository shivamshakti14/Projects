#include<stdio.h>

int main()
{
	int n,i,j,temp,swap=0;
	unsigned	long int a[1000];
	printf("enter the number of elements such that 1<=n<=1000i:");
	scanf("%d",&n);


	printf("enter the array elements such that 1<=a[i]<=10^9 \n");
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}


	for(i=1;i<=n-1;i++)
	{
		// counting the number of swapping
		j=i-1;		
		while(a[j+1]<a[j] && j>=0)
		{
			temp=a[j+1];
			a[j+1]=a[j];
			a[j]=temp;

			swap++;
			j--;
		}
	}



	printf("number of swapping is %d \n",swap);

	return 0;
}

