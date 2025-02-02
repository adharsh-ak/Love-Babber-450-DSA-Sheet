long long maxSubarraySum(vector<int> arr, int n)
{
    long long max_sum =0;
    long long sum=0;
    for (int index=0;index<arr.size();index++){
        sum+=arr[index];
        if(sum>max_sum) max_sum=sum;
        if (sum<0) sum=0;
    }
    return max_sum;
}