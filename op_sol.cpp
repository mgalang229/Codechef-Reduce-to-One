#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;
long long dp[1000007];

void Process() {
	// store the results of the subproblems using dynamic programming
	// set dp[1] = 1
	dp[1] = 1;
	for (long long i = 2; i < 1000007; i++) {
		// use the formula: x + y + x * y and compute it modulo 1000000007 for every position
		dp[i] = ((i + dp[i - 1]) % mod + (i * dp[i - 1]) % mod) % mod;
	}
}
                             
int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);          
  int tt;
  Process();
  cin >> tt;
  while (tt--) {
  	int n;
  	cin >> n;
  	// print the value of the n-th position
		cout << dp[n] << '\n';	
  } 
  return 0;
}      
