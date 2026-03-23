// https://ideone.com/cjq4Iu

#include <bits/stdc++.h>
using namespace std;

void problem_C_BackTrack(int count , int maxCount){
	if(count > maxCount)
		return;
	problem_C_BackTrack(count+1, maxCount);
	cout << count << " ";
}
void problem_B_BackTrack(int count , int maxCount){
	if(count <= 0 )
		return;
	problem_B_BackTrack(count-1, maxCount);
	cout << count << " ";

}

void problem_C(int count , int maxCount){
	if(count <= 0)
		return;
	cout << count << " ";
	problem_C(count-1, maxCount);
}

void problem_B(int count , int maxCount){
	if(count > maxCount)
		return;
	cout << count << " ";
	problem_B(count+1, maxCount);
}
int main() {
	// your code goes here
	
	
	int count ; cin >> count;
	problem_B(1, count);
	cout << "\n";
	problem_C(count, count);
	cout << "\nBackTrack : " <<"\n";
	problem_B_BackTrack(count, count);
	cout << "\n";
	problem_C_BackTrack(1, count);

	return 0;
}