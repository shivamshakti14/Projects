#include<stdio.h>

int main()
{
	int a[1000],n,i,j,temp,flag=0;

	printf("enter the value of n such that 1<=n<=1000:\n");
	scanf("%d",&n);

	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	// implementing bubble sort
	for(i=0;i<n;i++)
	{

		//for best case only while loop will be evaluated so it will take order n time
		while(a[i+1]>a[i])
		{  


			flag==1;
			break;

		}

		if(flag==0)

			for(j=0;j<n-i-1;j++)
			{
				if(a[j+1]<a[j])
				{
					temp=a[j+1];
					a[j+1]=a[j];
					a[j]=temp;

				}


			}

	}
	printf("sorted array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf(" ");
	}
	printf("\n");



	return 0;
}



