//{ Driver Code Starts
//Initial Template for C++

// C++ implementation to rearrange the array 
// elements after modification 
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        void modifyAndRearrangeArr(int arr[], int n) 
    { 
    	// Complete the function
    	for(int i=0;i<n-1;i++){
    	    if(arr[i] != 0 and arr[i] == arr[i+1]){
    	        arr[i] = arr[i] * 2;
    	        arr[i+1] = 0;
    	    }
    	}
    // 	int i = 0, j = n/2;
    // 	while(i<n/2 and j<n){
    // 	    while(arr[i] != 0 and i<n/2) i++;
    // 	    while(arr[j] == 0 and j<n) j++;
    // 	    swap(arr[i], arr[j]);
    // 	    i++;
    // 	    j++;
    // 	}
        int z;
        for(int i=0;i<n;i++){
            if(arr[i] == 0){
                z = i;
                break;
            }
        }
        int j = z + 1;
        while(j<n){
            if(arr[j] != 0){
                swap(arr[z],arr[j]);
                z++;
            }
            j++;
        }
    }
}; 


//{ Driver Code Starts.
// Driver program to test above 
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        ob.modifyAndRearrangeArr(arr, n);
        for(int i=0;i<n;i++)
            cout << arr[i] << " ";
        cout << endl;
        
    }

	return 0; 
} 

// } Driver Code Ends