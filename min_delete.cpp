#include<bits/stdc++.h>
using namespace std;
int min_delete(int arr[],int n){
	unordered_map<int,int> freq;
	for(int i=0;i<n;i++){freq[arr[i]]++;}
	int max_freq=INT_MIN;
	for(auto itr=freq.begin();itr!=freq.end();itr++){
		cout<<itr->first<<" "<<itr->second<<endl;
		max_freq=max(max_freq,itr->second);
	}
	return n-max_freq;
}
int main()
{
    int arr[] = {4, 3, 4, 4, 2, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << min_delete(arr, n)<<endl;
    return 0;
}
