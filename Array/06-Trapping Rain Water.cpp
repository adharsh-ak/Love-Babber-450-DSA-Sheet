
long long getTrappedWater(long long* arr, int n) {
    int left=0,right=n-1;
    long long  water = 0;
    int lmax=arr[left],rmax=arr[right];
    while (left<right){
        lmax = lmax>arr[left] ? lmax:arr[left];
        rmax = rmax>arr[right] ? rmax:arr[right];
        water += (lmax<=rmax) ?(lmax-arr[left++]) : (rmax-arr[right--]);
    }
    return water;
}