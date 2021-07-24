#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		int s=x+y;
		if(s>=6) cout<<"0"<<endl;
		else cout<<(float)(6-s)/6<<endl;
	}
	return 0;
}
