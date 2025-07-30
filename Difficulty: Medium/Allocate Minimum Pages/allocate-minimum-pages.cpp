class Solution {
  public:
    bool check(vector<int>& arr, int mid, int k) {
        long long pageCnt = 0, cnt = 1;
        int n = arr.size();
        for(int i=0;i<n;i++) {
            if (pageCnt + arr[i] <= mid) {
                pageCnt += arr[i];
            }
            else {
                cnt++;
                pageCnt = arr[i];
            }
        }
        if(cnt > (long long)(k)) return false;
        return true;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        // find lo & hi ==>
        int lo = INT_MIN, hi = 0;
        int n = arr.size();
        for(int i=0;i<n;i++) {
            lo = max(lo, arr[i]);
            hi += arr[i];
        }
        
        // Apply B.S ==>
        if (n<k) return -1;
        int ans = -1;
        while(lo <= hi) {
            int mid = lo + (hi-lo)/2;
            if(check(arr, mid, k)) {
                ans = mid;
                hi = mid - 1;
            }
            else lo = mid + 1;
        }
        
        return ans;
    }
};