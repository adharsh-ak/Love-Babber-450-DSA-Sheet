void reverseArray(vector<int> &arr , int m) {
    int len=arr.size();

    int left =m+1;
    int right=len-1;

    while (left<right){
        int temp= arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }

}