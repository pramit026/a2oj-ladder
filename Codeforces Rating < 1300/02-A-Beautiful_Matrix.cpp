// https://codeforces.com/problemset/problem/263/A

#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	
	int x  ;
	
	
	for (int i = 1; i <= 5; ++i)
	{
		for (int j = 1; j <=5; ++j)
		{
			cin >> x;
			
			if(x == 1){
				
				cout << abs(i - 3) + abs(j-3) << endl;

			}
		}
	}
	
	return 0;
}