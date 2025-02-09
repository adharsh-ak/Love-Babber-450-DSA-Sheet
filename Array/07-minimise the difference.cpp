#include <bits/stdc++.h> 
int minimizeIt(vector<int> A, int K)
{
	int n = A.size();
    sort(A.begin(), A.end());
    int res =A[n - 1] - A[0];
    for (int i = 1; i < A.size(); i++) {
        if (A[i] - K < 0)
            continue;
        int minH = min(A[0] + K, A[i] - K);
        int maxH = max(A[i - 1] + K, A[n - 1] - K);
        res = min(res, maxH - minH);
    }
    return res;
}