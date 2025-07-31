// User function template for C++

class Solution {
  public:
    bool check(vector<int>& arr, int mid, int k) {
        int partSum = 0, cnt = 1;
        int n = arr.size();
        for(int i=0;i<n;i++) {
            if(partSum + arr[i] <= mid) {
                partSum += arr[i];
            }
            else {
                cnt++;
                partSum = arr[i];
            }
        }
        if(cnt > k) return false;
        return true;
    }
    int minTime(vector<int>& arr, int k) {
        // code here
        int lo = INT_MIN, hi = 0;
        int n = arr.size();
        for(int i=0;i<n;i++) {
            lo = max(lo, arr[i]);
            hi += arr[i];
        }
        int ans = -1;
        while(lo <= hi) {
            int mid = lo + (hi-lo)/2;
            if(check(arr, mid, k)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        // return minimum time
        return ans;
    }
};