//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> &v, long long n, long long x) {

        // Your code here
        long long lo = 0, hi = n-1;
        int idx = -1;
        while(lo <= hi) {
            long long mid = lo + (hi-lo)/2;
            
            // if(v[mid] == x) return int(mid-1);
            // else if(v[mid] > x) hi = mid - 1;
            // else lo = mid + 1;
            
            if(v[mid] <= x) {
                idx = mid;
                lo = mid + 1;
            }
            else hi = mid - 1;
        }
        
        // return int(hi);
        return idx;
    }
};


//{ Driver Code Starts.

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long x;
        cin >> x;

        vector<long long> v;

        for (long long i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            v.push_back(temp);
        }
        Solution obj;
        cout << obj.findFloor(v, n, x) << endl;
    }

    return 0;
}
// } Driver Code Ends