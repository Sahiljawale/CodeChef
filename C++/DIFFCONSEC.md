## Problem Statement :

Chef has a binary string SS of length NN. Chef can perform the following operation on SS:

Insert any character (00 or 11) at any position in SS.

Find the minimum number of operations Chef needs to perform so that no two consecutive characters are same in SS..


## Code solution :

```cpp

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<s.size()-1;i++){
            
            if(s[i]==s[i+1])
            cnt++;
        }
        cout<<cnt<<endl;
    }
	return 0;
}


```

