#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	int min=arr[0] , max=arr[0];
	for (int i=0;i<n;i++){
		if(min<arr[i]){
			min=arr[i];
		}
		if(max>arr[i]){
			max=arr[i];
		}
	}
	return max+min;

}