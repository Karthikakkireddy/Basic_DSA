#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	string s = "Karthik";
	string emp ;
	// Length of String
	cout << s.length() << "\n"; 
	cout << emp.length() << "\n";

	// Substring (start_index, end_index - 'Not inclusive']
	for(int i=0; i< s.length() ; i++)
	{
		cout << s.substr(i, s.length() ) << "\n";
	}
	
	//Runtime error : start index is more than the length of the string
		//cout << s.substr(8, s.length() ) << "\n";
	return 0;
}