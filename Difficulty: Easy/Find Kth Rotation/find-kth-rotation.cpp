//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        
        int lo = 0, hi = arr.size() - 1;
        int idx = -1;
        int ans = INT_MAX;
        while(lo <= hi) {
            int mid = lo + (hi - lo)/2;
            
            if(arr[mid] <= arr[hi]) {
                if (arr[mid] < ans) {
                    ans = arr[mid];
                    idx = mid;
                }
                hi = mid - 1;
            }
            else if(arr[mid] >= arr[lo]) {
                // idx = lo;
                if(arr[lo] < ans) {
                    ans = arr[lo];
                    idx = lo;
                }
                lo = mid + 1;
            }
        }
        
        return idx;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
    }
}
// } Driver Code Ends