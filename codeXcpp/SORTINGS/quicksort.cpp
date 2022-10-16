#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
	int t=*x;
	*x=*y;
	*y=t;
}
int partition(int arr[],int l,int r){
	int pivot=arr[r];
	int i=l-1;
	for(int j=l;j<=r-1;j++){
		if(arr[j]<pivot){
			i++;
			swap(&arr[i],&arr[j]);
		}	
	}
	swap(&arr[i+1],&arr[r]);
	return i+1;
}
void quicksort(int arr[],int l,int r){
	if(l<r){
		int pi=partition(arr,l,r);
		quicksort(arr,l,pi-1);
		quicksort(arr,pi+1,r);
	}
}
int main(){
	int a[20];//={5,4,2,1,3,8,7};
	int n=7;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	quicksort(a,0,n-1);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	
	return 0;
}
//not working 