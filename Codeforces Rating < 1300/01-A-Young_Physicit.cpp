// https://codeforces.com/problemset/problem/69/A

// hint : equilibrium means x+y+z = 0
#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	
	int t;
	int x,y,z;
	// int xsum(0),ysum(0),zsum(0);
	int xsum = 0, ysum = 0, zsum= 0;
	cin >> t;
	while(t--){
		
		cin >> x >> y >> z;
		
		xsum += x;
		ysum += y;
		zsum += z;
		
	}
	if(xsum == 0 && ysum == 0 && zsum ==0){
		
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}