//Problem link : -> https://www.codechef.com/problems/CONFCAT
//Difficulty Rating -> Difficulty Rating:1488 (Starters 59 -Recent Contest)




//Code:

#include<bits/stdc++.h>
#define int long long
using namespace std;


signed main() {

    int t;
    cin>>t;
    while(t--) {

        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        vector<int> a,b;
        int max = INT_MIN;
        int position;
        for(int i= 0;i<n;++i){
            if(arr[i]>max){
                max = arr[i];
                position =i;
            }
        }
        if(position == 0){
            cout<< -1 <<endl;

        }else{
            for(int i=0;i<position;i++){
                a.push_back(arr[i]);
            }
            for(int i=position;i<n;i++){
                b.push_back(arr[i]);
            }
            cout<<a.size()<<endl;
            for(int &e :a){
                cout<<e<<" ";
            }
            cout<<endl;
            cout<<b.size()<<endl;
            for(int &e :b){
                cout<<e<<" ";
            }
            cout<<endl;
        }

    }

}
