#include<bits/stdc++.h>

using namespace std;
vector<long long int> dp(1000);
long long int nthFibonacci(long long int n){
        // code here
        if(n==0) return 0;
        if(n==1) return 1;
        if(dp[n] !=0 ) return dp[n];
        dp[n] = (nthFibonacci(n-1) + nthFibonacci(n-2)) % 1000000007;
        return (dp[n]);
    }

int main(){
	int n;
	cin>>n;
	cout<<nthFibonacci(n);
	
	return 0;
}