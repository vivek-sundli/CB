#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void count_bits(int a,int b){
	int count=0;
	while(a){
		if(a&1 || b&1){
			count++;
		}
		a=a>>1;
	}
	while(b){
		if(a&1 || b&1){
			count++;
		}
		b=b>>1;
	}
	cout<<count<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		count_bits(a,b);
	}
	return 0;
}
