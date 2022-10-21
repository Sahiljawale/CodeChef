#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin>>T;
  while(T--) {
    int a1[8] = {2,2,-2,-2,1,1,-1,-1};
    int a2[8] = {1,-1,1,-1,2,-2,2,-2};
    vector<vector<int>> v1,v2;
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    for(int i = 0;i<8;i++){
        int x = x1 + a1[i];
        int y = y1 + a2[i];
        if((x>=1 && x<=8)&&(y>=1 && y<=8))
         v1.push_back({x,y});
        x = x2 + a1[i];
        y = y2 + a2[i];
        if((x>=1 && x<=8)&&(y>=1 && y<=8))
         v2.push_back({x,y});
    }
    bool k = false;
    for(auto &c1:v1){
        for(auto &c2:v2){
            if(c1==c2)
             k = true;
        }
    }
    if(k==true)
     cout<<"Yes";
    else
     cout<<"No";

    cout<<endl;
	}
  return 0;
}
