// https://ideone.com/7e16Rf

#include <bits/stdc++.h>
using namespace std;


bool checkPalindrome(string s, int i)
{
	if(i>= s.length()/2 )
	{
		return true;
	}
	if(s[i] != s[s.length() - 1 - i])
		return false;
	return checkPalindrome(s, i+1);
}

int main() {
	string s; cin >> s;
	
	cout << checkPalindrome(s, 0) ;
	
	return 0;
}