// https://ideone.com/q5cmNn

#include <bits/stdc++.h>
using namespace std;

int sum_N_R(int num , int limit)
{
	if(num >= limit)
		return num;
		
	return num+sum_N_R(num+1, limit);
}

int sum_N(int num , int limit)
{
	if(num <= 0 )
		return 0;
	return num+sum_N(num-1, limit);
}

int sumN(int n)
{
	if(n == 0)
		return 0;
		
	return n + sumN(n-1);
}
int main() {
	// your code goes here
	int n; cin >> n;
	
	cout << sum_N(n,n) << " : " << sum_N_R(1,n);
	return 0;
}