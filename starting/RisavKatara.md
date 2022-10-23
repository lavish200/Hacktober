#include<bits/stdc++.h>
#include "cmath"
using namespace std;
#define ll long long
const ll INF = 1e9+7; 

void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #else
    // online submission
    #endif
}
bool primefind(ll x)
{
    if(x==1){
        return 0;
    }
    for(ll i=2;i*i<=x;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
long long gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}
void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=arr[0],y=arr[0];
    bool ok=true;
    for(int i=1;i<n;i++){
        x=min(x,arr[i]);
        y=max(y,arr[i]);
        if(arr[i]!=y && arr[i]!=x){
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }


}   

int main(){
    init_code();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        solve();        
    }
    
    
    

    return 0;
    
        
    
}
  
  
Output:-
  ![Screenshot (229)](https://user-images.githubusercontent.com/87906280/197359130-07674ed7-0c58-4895-9388-ebd8d2c04dcb.png)
