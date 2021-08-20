#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	//int num;
	cin>>n;
	int unique= 0;
	for(int i=0;i<n;i++){
		int nu;
		cin>>nu;
		unique^=nu;
	}
	cout<<unique;
	return 0;
}
