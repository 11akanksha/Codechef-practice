#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n,x,p;
	    cin>>n>>x>>p;
	    if(x*3+(n-x)*(-1) >= p)
	        cout<<"Pass"<<endl;
	    else
	        cout<<"Fail"<<endl;
	}
	return 0;
}
