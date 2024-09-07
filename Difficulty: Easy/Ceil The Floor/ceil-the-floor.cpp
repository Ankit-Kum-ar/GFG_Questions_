//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        
        int mn = -1;
        for(int i=0;i<arr.size();i++) {
            if(mn == -1 and arr[i] <= x) {
                mn = arr[i];
            }
            else if (mn != -1 and arr[i] <= x and arr[i] > mn) {
                mn = arr[i];
            }
        }
        
        int mx = -1;
        for(int i=0;i<arr.size();i++) {
            if(mx == -1 and arr[i] >= x) {
                mx = arr[i];
            }
            else if(mx != -1 and arr[i] >= x and arr[i] < mx) {
                mx = arr[i];
            }
        }
        
        return {mn , mx};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends