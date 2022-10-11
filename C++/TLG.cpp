//CodeChef Problem Code: TLG
#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,p1,p2,sp1=0,sp2=0,w,l=0;
	cin>>t;
	while(t--){
	    cin>>p1>>p2;
		sp1+=p1; sp2+=p2;
		if(sp1>sp2 && (sp1-sp2)>l){
			l=sp1-sp2;
			w=1;
		}
		else if(sp1<sp2 && (sp2-sp1)>l){
			l=sp2-sp1;
			w=2;
		}
	}
	cout<<w<<" "<<l<<el;
	return 0;
}
