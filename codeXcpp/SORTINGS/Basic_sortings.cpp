#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void selection_sort(int arr[],int n){
	for(int i=0;i<n;i++){
		int min_idx=i;
		for(int j=i+1;j<n;j++){
			if (arr[min_idx]>arr[j]){
				min_idx=j;
			}
		}
		if(min_idx != i){
			swap(&arr[i],&arr[min_idx]);
		}
	}
}
void bubblesort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}
void insertionsort(int arr[],int n){
	
	for(int i=1;i<n;i++){
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}


int main(){
	int a[20];//={5,4,2,1,3,8,7};
	int n=7;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	// selection_sort(a,n);
	// bubblesort(a,n);
	insertionsort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	
	return 0;
}