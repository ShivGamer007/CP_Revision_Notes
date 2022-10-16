#include<iostream>
using namespace std;

void countsort(int arr[],int n){
	int k=arr[0];
	for(int i=0;i<n;i++){
		k=max(k,arr[i]);
	}
	int count[10]={0};
	for(int i=0;i<n;i++){
		count[arr[i]]++;
	}
	for(int i=1;i<=k;i++){
		count[i]+=count[i-1];
	}
	int output[n];
	for(int i=n-1;i>=0;i--){
		output[--count[arr[i]]]=arr[i];
	}
	for(int i=0;i<n;i++){
		arr[i]=output[i];
	}
}
int main(){
	int a[20];//={5,4,2,1,3,8,7};
	int n=7;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	countsort(a,n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	
}