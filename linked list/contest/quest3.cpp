#include <bits/stdc++.h>
using namespace std;
 
// Function to calculate factorial
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
 
// Function to count number of ways
// to make 2 necklace having exactly
// N/2 beads if each bead is
// considered different
long long numOfNecklace(int N, int n1, int n2)
{
    // Number of ways to choose N/2 beads
    // from N beads
    long long ans = factorial(N)
                    / (factorial(n1) * factorial(n2));
 
    // Number of ways to permute N/2 beads
    ans = ans * factorial(n1- 1);
    ans = ans * factorial(n2 - 1);
 
    // Divide ans by 2 to remove repetitions
    ans /= 2;
 
    // Return ans
    return ans;
}
 
// Driver Code
int main()
{
    // Given Input
    int N, n1, n2;
    cin>>N>>n1>>n2;
    // Function Call
    cout << numOfNecklace(N, n1, n2) << endl;
    return 0;
}