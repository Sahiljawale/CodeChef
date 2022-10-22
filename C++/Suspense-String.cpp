#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
ll mod = 1e9+9;

/*--------------------------------------functions-------------------------------------------*/

ll gcd(ll a, ll b){  // GCD of two numbers
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a,ll b){      // LCM of two numbers
    return ((a*b) / gcd(a,b));
}

int arrGCD(vector<ll>arr)  //GCD of array/vector
{
    int n = arr.size();
    ll result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}
 
ll findlcm(vector<ll> arr) // LCM of an array/vector
{
    int n = arr.size();
    ll ans = arr[0];
 
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}

vector<vector<int>> allPossibleSubset(vector<int>arr, int n) //generates 2^n subsets in vector
{
    vector<vector<int>>ans;
    int count = pow(2, n);
    
    for (int i = 0; i < count; i++) {
        vector<int>x;
        for (int j = 0; j < n; j++) {
            if ((i & (1 << j)) != 0)
                x.push_back(arr[j]);
        }
        ans.push_back(x);
    }
    return ans;
}

void print(vector<vector<int>>ans){     // prints a 2D array / vector
    for(int i=0;i<ans.size();++i){
            for(int j=0;j<ans[i].size();++j){
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
}

vector<vector<int>> input(int i,int j){     // takes input of a 2D vector 
        vector<vector<int>>ans;
        for(int m=0;m<i;m++){
            vector<int>n;
            for(int p=0;p<j;p++){
                int l;
                cin >> l;
                n.push_back(l);
            }
            ans.push_back(n);
        }
        return ans;
}

ll binpow(ll a, ll b){                  // longer powers a^b 
    a%=mod;
    ll ans=1;
    while(b){
        if(b&1)ans=(ans*a) % mod;
        a = (a * a) % mod;
        b>>=1;
    }
    return ans;
}

bool isPrime(ll n){                 // check if a number is prime or not
    if(n==1)return false;
    for(ll i=2;i*i<=n;++i)
        if(n%i==0)return false;
    return true;
}

vector<int> primefactors(int n){        // prime factors of a number 
    vector<int>ans;
    for(int i=2;i*i<=n;++i){
        while(n%i==0){
            ans.push_back(i);
            n/=i;
        }
    }
    if(n>1)ans.push_back(n);
    return ans;
}

vector<ll> SieveOfEratosthenes(ll n)    // primes in range
{
    vector<ll>ans;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for(ll i=2;i<=n;++i)
        if(prime[i])ans.push_back(i);
    return ans;
}

int power(int x, unsigned int y, unsigned int m) // power modulo m
{
    if (y == 0)
        return 1;
    int p = power(x, y / 2, m) % m;
    p = (p * p) % m;
 
    return (y % 2 == 0) ? p : (x * p) % m;
}

int modInverse(int a, int m)    // inv
{
    int g = gcd(a, m);
    if (g != 1)return 0;
    else return power(a, m - 2, m);
}
 
string to_binary(int n){
    string ans = bitset<64> (n).to_string();
    const auto loc1 = ans.find('1');
     
    if(loc1 != string::npos){
        return ans.substr(loc1);
    }
    return "0";
}

vector<vector<int>> findPermutations(vector<int>arr, int n){   
    vector<vector<int>>ans;
    sort(arr.begin(), arr.end());
    do {
        vector<int>x(arr.begin(),arr.end());
        ans.push_back(x);
    } while (next_permutation(arr.begin(),arr.end()));
    return ans;
}

bool isSubSequence(string str1, string str2){   // if str1 is a subsequence of str2
    int m=str1.size(),n=str2.size();
    int j = 0;
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
    return (j == m);
}

int lis(vector<int>arr){			// returns the length of longest increasing sub
	int n=arr.size();
    int lis[n];
    lis[0] = 1;
    for (int i = 1; i < n; i++) {
        lis[i] = 1;
        for (int j = 0; j < i; 
        	j++)
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }
    return *max_element(lis, lis + n);
}

int fact(int n){
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int nCr(int n, int r){
    return fact(n) / (fact(r) * fact(n - r));
}

// cout << "Case #" << google <<": "<< ans << endl;
//         google++;



/*------------------------------------main code----------------------------------------------*/


class Node{
public:
	int data;
	Node* next;

	Node(int data){
		this->data = data;
		this->next = NULL;
	}
};

void InsertAtHead(Node* &head,int data){
	Node* temp = new Node(data);
	temp->next = head;
	head = temp;
}

void PrintLL(Node* &head){
	Node* temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}



int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  	
  	int tt=1,google=1;
  	cin >> tt;
  	while(tt--){
  		int n;
  		cin >> n;
  		string s,res="";
  		cin >> s;
  		if(n==1)cout << s << endl;
  		int i=0,j=n-1;
  		while(j>=i){
  			if(s[i]=='0')res = "0" + res;
  			else res+="1";
  			if(s[j]=='0' && i<j)res+="0";
  			else if(s[j]=='1' && i<j)res = "1" + res;
  			i++;
  			j--;
  		}
  		cout << res << endl;
  	}

  	// Node* n1 = new Node(5);
  	// Node* head = n1;
  	// PrintLL(head);

  	// InsertAtHead(head,4);
  	// InsertAtHead(head,8);

  	// PrintLL(head);
  	

}






