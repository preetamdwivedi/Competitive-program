#include<iostream>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;
int main(){
	int n; cin>>n;
	int k; cin>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<pow(2,n);i++){
		vector<int> v;
		int x=i;
		while(x>0){
			int z = x%2; //0 0 0 1 
			v.push_back(z);
			x=x/2; //4 2 1 0
		}
		int p = n - (int)v.size();
		for(int i=0;i<p;i++){
			v.push_back(0);
		}
		reverse(v.begin(),v.end());
		int count=0;
		for(int i=0;i<v.size();i++){
			if(v[i]==1){
				count++;
			}		
		}
		if(count==k){
			for(int i=0;i<v.size();i++){
				if(v[i]==1){
					cout<<a[i]<<" ";
				}		
			}	
			cout<<endl;
		}
		v.clear();
	}
	return 0;
}
