#include<bits/stdc++.h>
using namespace std;
void Exch(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}
void QuickSort(int a[], int low, int high)
{
	int i, j, key, k;
	if(low>=high)
		return;
	key=low; i=low+1; j=high;
	while(i<=j)
	{
		while ( a[i] <= a[key] ) i=i+1;
		while ( a[j] > a[key] ) j=j-1;
		if(i<j) Exch(&a[i], &a[j]);
	}
	Exch(&a[j], &a[key]);
	QuickSort(a, low, j-1);
	QuickSort(a,j+1,high);
}
int main(int argc, char const *argv[])
{
	int n,a[1000],k;
	clock_t st,et;
	double ts;
	cout<<"Enter How many Numbers : ";
	cin>>n;
	cout<<"\n The Random Numbers are : "<<endl;
	for(int k=1;k<=n;k++){
		a[k]=rand();
		cout<<a[k]<<" ";
	}
	st=clock();
	QuickSort(a,1,n);
	et=clock();
	ts=(double)(et-st)/CLOCKS_PER_SEC;
	cout<<"\nSorted Numbers are:"<<endl;
	for(k=1; k<=n; k++)
		cout<<a[k]<<" ";
	cout<<"\nThe time taken is "<<ts<<endl;
	return 0;
}