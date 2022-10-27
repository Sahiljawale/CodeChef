// JAI BAJARANG BALI

// manitianajay45

// give me some sunshine, give me some rain, give me another chance to grow up once again....

// sab moh maya hai....

#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll n,k;

typedef struct edge{
    ll mx1,mx2,gcd_rem1,gcd_rem2;
}edge;


typedef struct segmenttree{
    vector<edge> seg;
    ll sz=1;

    void build(ll siz,vector<ll> vec){
        while(sz<siz){
            sz*=2;
        }

        seg.resize(2*sz-1);
        seg.assign(2*sz-1,{0,0});
        for(ll i=0;i<(ll)(vec.size());i++){
            seg[sz-1+i].mx1=vec[i];
            seg[sz-1+i].mx2=0;
            seg[sz-1+i].gcd_rem1=0;
            seg[sz-1+i].gcd_rem2=0;
        }

    }


    edge merge(edge a,edge b){
        vector<ll> vec1;
        priority_queue<ll> pq;
        pq.push(a.mx1);
        pq.push(a.mx2);
        pq.push(b.mx1);
        pq.push(b.mx2);
        ll mx1,mx2;
        mx1=max(a.mx1,b.mx1);

        ll gcd_rem1,gcd_rem2;
        if(mx1==a.mx1){
            gcd_rem1=__gcd(a.gcd_rem1,__gcd(b.mx1,b.gcd_rem1));

        }else{
            gcd_rem1=__gcd(b.gcd_rem1,__gcd(a.mx1,a.gcd_rem1));
        }
        mx2=0;

        while(!pq.empty()){
            if(mx1!=pq.top()){
                mx2=pq.top();

                break;
            }
            pq.pop();
        }

        if(mx2==a.mx1){
            gcd_rem2=__gcd(a.gcd_rem1,__gcd(b.mx1,b.gcd_rem1));
        }else if(mx2==b.mx1){
            gcd_rem2=__gcd(b.gcd_rem1,__gcd(a.mx1,a.gcd_rem1));

        }else if(mx2==a.mx2){
            gcd_rem2=__gcd(a.gcd_rem2,__gcd(b.mx1,b.gcd_rem1));
        }else{
            gcd_rem2=__gcd(b.gcd_rem2,__gcd(a.mx1,a.gcd_rem1));

        }

        edge ans;
        ans.mx1=mx1;
        ans.mx2=mx2;
        ans.gcd_rem1=gcd_rem1;
        ans.gcd_rem2=gcd_rem2;
        return ans;
    }

    void update(ll x,ll l,ll r){
        if(r-l==1){
            return ;
        }

        ll mid=(l+r)/2;

        update(2*x+1,l,mid);
        update(2*x+2,mid,r);

        seg[x]=merge(seg[2*x+1],seg[2*x+2]);
    }

    edge query(ll l,ll r,ll x,ll lf,ll rf){
        if(lf>=l && rf<=r){
            return seg[x];
        }else if(lf>=r || rf<=l){
            return {0,0,0,0};
        }
        ll mid=(lf+rf)/2;

        return merge(query(l,r,2*x+1,lf,mid),query(l,r,2*x+2,mid,rf));
    }

}segmenttree;

int main(){
    ll t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<ll> vec;

        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            vec.push_back(x);

        }

        segmenttree segclass;

        segclass.build(n,vec);

        // cout<<segclass.sz<<endl;
        segclass.update(0,0,segclass.sz);

        // for(ll i=0;i<2*segclass.sz-1;i++){
        //     cout<<segclass.seg[i].mx1<<" ";
        // }

        // cout<<endl;

        // cout<<segclass.seg[0].mx1<<" "<<segclass.seg[0].gcd_rem1<<endl;
        // cout<<segclass.seg[0].mx2<<" "<<segclass.seg[0].gcd_rem2<<endl;

        ll l=2,r=n;

        ll ans=-1;

        while(r>=l){
            ll mid=(l+r)/2;
            // cout<<mid<<endl;
            bool check=false;
            for(ll i=mid;i<=n;i++){
                ll lr=i-mid,rr=i;
                edge q=segclass.query(lr,rr,0,0,segclass.sz);
                ll val=max(q.mx1-q.gcd_rem1,q.mx2-q.gcd_rem2);
                if(val>=k){

                    // cout<<"mid"<<" "<<mid<<endl;

                    // cout<<q.mx<<" "<<q.gcd_rem<<endl;
                    check=true;
                    break;
                }
            }
            if(check){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
