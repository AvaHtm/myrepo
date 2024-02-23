#include<iostream>
using namespace std;
void getArray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"enter a["<<i<<"]=";
		cin>>a[i];
	}
}
void printArray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\n";
	}
	cout<<endl;
}
int searchArray(int a[], int n, int value)
{
	int index;
	for(int i=0;i<n;i++)
	{
		if(a[i]==value)
			index=i;
	}
	cout<<"index value=";
	return index;
}
int findMax(int a[],int n,int &indexmax , int & valuemax)
{
	int tempmax =a[0];
	for(int i=0;i<n;i++)
	{
		if(tempmax<a[i])
		{
			tempmax=a[i];
			valuemax=a[i];
			indexmax=i;
		}
	}
	cout<<"max:";
	return valuemax;
}
int main(int argc,char*argv[])
{
	int n,value,a[10],indexmax,valuemax;
	cout<<"enter number:";
	cin>>n;
	cout<<"enter value:";
        cin>>value;
	getArray(a,n);
	printArray(a,n);
	cout<<findMax(a,n,indexmax,valuemax)<<"\n";
	cout<<searchArray(a,n,value)<<"\n";
	return 0;
}
