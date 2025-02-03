#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
	int result=arr[0];
	int curr_min=arr[0];
	int curr_max=arr[0];
	for(int i=1;i<n;i++){
		int temp=max({arr[i],arr[i]*curr_min,arr[i]*curr_max});
		curr_min=min({arr[i],arr[i]*curr_min,arr[i]*curr_max});
		curr_max=temp;
		result=max(curr_max,result);

	}
	return result;
}
