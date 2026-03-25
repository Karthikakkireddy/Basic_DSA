// https://ideone.com/POcidH

#include <bits/stdc++.h>
using namespace std;

int fibonacciNumber(int i)
{
	if(i == 0 )
		return 0;
	if(i == 1)
		return 1;
	
	return fibonacciNumber(i-1) + fibonacciNumber(i-2);
}

int main() {
	// your code goes here
	int n; cin >> n;
	
	cout << fibonacciNumber(n);
	
	return 0;
}