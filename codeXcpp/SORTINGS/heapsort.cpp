#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}

void heapify(int arr[],int n,int i){
	int largest=i;
	int l=2*i+1,r=2*i+2;
	if(l<n && arr[l]>arr[largest]){
		largest=l;
	}
	if(r<n && arr[r]>arr[largest]){
		largest=r;
	}
	if(largest!=i){
		swap(&arr[i],&arr[largest]);
		heapify(arr,n,largest);
	}
}
void heapsort(int arr[],int n){
	for(int i=n/2-1;i>=0;i--){
		heapify(arr,n,i);
	}
	for(int i=n-1;i>=0;i--){
		swap(&arr[0],&arr[i]);
		heapify(arr,i,0);
	}
}
int main(){
	int a[20];//={5,4,2,1,3,8,7};
	int n=7;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	heapsort(a,n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	
	return 0;
}