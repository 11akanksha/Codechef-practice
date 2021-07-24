#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int r1,w1,c1,r2,w2,c2;
		cin>>r1>>w1>>c1>>r2>>w2>>c2;
		int m1=0,m2=0;
		if(r1>r2){
			m1++;
		}else{
			m2++;
		}
		if(w1>w2){
			m1++;
		}else{
			m2++;
		}
		if(c1>c2){
			m1++;
		}else{
			m2++;
		}
		if(m1>m2){
			cout<<"A"<<endl;
		}else{
			cout<<"B"<<endl;
		}
	}
	return 0;
}
