#include <iostream>
#include<vector>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,cnt = 0,sal = 0,maxi = 0;
	    cin >> x >> y;
	    string g;
	    cin >> g;
	    for(int i = 0 ; i <= g.size() ; i++){
	        if(g[i] == '1'){
	            cnt++;
	            sal += x;
	        }else{
	            if(cnt > maxi) maxi = cnt;
	            cnt = 0;
	        }
	    }
	    sal += (maxi*y);
	    cout<<sal<<endl;
	}
	return 0;
}
