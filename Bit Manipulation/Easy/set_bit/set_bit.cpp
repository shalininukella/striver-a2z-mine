//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

left shift 
class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    
    bool checkKthBit(int n, int k)
    {
        if(n&(1<<k)){
            return true;
        }
        else{
            return false;
        }
        // Your code here
        // It can be a one liner logic!! Think of it!!
    }
};

/*//using right shift 
 class Solution
 {
    public:
    // Function to check if Kth bit is set or not.
    
    bool checkKthBit(int n, int k)
    {
        if((n>>k) & 1)
        return true;
        else return false;
    
    }
};*/

/*//using % operator
class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    
    bool checkKthBit(int n, int k)
    {
        if((n>>k)%2==0){
            return false;
        }
        else{
            return true;
        }
        // Your code here
        // It can be a one liner logic!! Think of it!!
    }
}; */




//{ Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;//taking testcases
	while(t--)
	{
	    long long n;
	    cin>>n;//input n
	    int k;
	    cin>>k;//bit number k
	    Solution obj;
	    if(obj.checkKthBit(n, k))
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}
// } Driver Code Ends
