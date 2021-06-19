/* Enter your solutions in this file */
#include <stdio.h>
int max(int array[],int n)
{
	int max=array[0];
	for(int i=0;i<n;i++)
	{	if(array[i]>max)
		max=array[i];
	}
	return max;
}
int min(int array[],int n)
{
	int min=array[0];
	for(int i=0;i<n;i++)
	{	
		if(array[i]<min)
		min=array[i];
	}
	return min;
}
float average(int array[], int n)
{
	int sum=0;		
	for(int i=0;i<n;i++)
	{	
		sum+=array[i];
	}
	sum=sum/n;		
	return sum;
}	
int mode(int array[], int n)
{
	int maxcount=0,maxvalue=0;
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(array[i]==array[j])
				++count;
		}
		if(count>maxcount)
		{
			maxcount=count;
			maxvalue=array[i];
		}
	return maxvalue;	
	}
}
int factors(int n, int array[])
{
	int j=0;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			array[j]=i;
			n=n/i;
			j++;
			i=1;
		}
	}
	return j;
}
  
