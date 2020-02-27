#include<iostream>
using namespace std;
//Time O(no of bits)
int countBits(int n){
	int count=0;
	while(n>0){
		count += n&1;
		n=n>>1;
	}
	return  count;
}
//Time O(no of set bits)
int countBitsFast(int n){
	int count=0;
	while(n){
		count++;
		n=n&(n-1);
	}
	return count;
}
int getIthBit(int n,int i){
	return (n & (1<<i))!=0?1:0; 
}
int setIthBit(int &n,int i){
	int mask=1<<i;
	n=(n|mask);
}
int main(){
	int n,i;
	cin>>n>>i;
	cout<<setIthBit(n,i);
	//cout<<getIthBit(n,i);
	//cout<<countBits(n)<<endl;
	//cout<<countBitsFast(n);
	return 0;
}