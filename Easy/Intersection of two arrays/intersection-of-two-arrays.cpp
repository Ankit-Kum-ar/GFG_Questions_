//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int nums1[], int nums2[], int n, int m) {
        // Your code goes here
        sort(nums1,nums1+n);
        sort(nums2,nums2+m);
        vector<int> ans;
        int x = INT_MIN;
        int i = 0, j = 0;
        while(i<n and j<m){
            if(nums1[i] == nums2[j] and nums1[i] != x){
                ans.push_back(nums1[i]);
                x = nums1[i];
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]) i++;
            else j++;
        }
        return ans.size();
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends