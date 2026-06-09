// https://ideone.com/HJEmQA


#include <bits/stdc++.h>
using namespace std;


void printVector(vector<int> &v)
{
	for(auto x : v)
	{
		cout << x << ", ";
	}
	cout <<"\n";
}

void rotateVector(int offSet, vector<int> &v)
{
	int n = v.size();
	
	vector<int> res(n); 
	
	for(int i=0 ; i<n ; i++)
	{
		// res[i] = v[(i-offSet+n) % n];  // Right to Left
		res[(i-offSet+n) % n] = v[i];
	}
	
	printVector(res);
}

int main() {
	// your code goes here
	int n ; cin >> n ;
	vector<int> v(n);
	
	for(int i=0; i < n ; i++)
	{
		cin >> v[i];
	}
	
	int offSet ; cin >> offSet;
	
	printVector(v);
	rotateVector(offSet, v);
	return 0;
}