#include<stdio.h>

int shortest_line(arr,N)
{
	int lowest_line;
	int index;

	for(int i=0; i<=N;i++)
	{
		if lowest_line<arr[i]
		{
			lowest_line=arr[i];
			index=i;
		}
	}
	return index;
}

int new_people(arr,N,m)
{
	for(int i=0;i<m;i++)
	{
		shortest_line(arr,N);
	}
}




int main()
{
	int N,M;

	printf("Enter N and M:");

	scanf("%d",&N);
	scanf("%d",&M);
	
	printf(" %d \n ", N);
	printf(" %d \n", M);
	
	printf("Enter number of people  in respeected N lines");
	int arr[N];
	
	for(int i=0; i<=N; i++)
	{
	scanf("%d",&arr[i]);
	
	}

	for(int j=0; j<=N; j++)
	{
		printf("%d \n",arr[j]);
	}
	



	return 0;


}
