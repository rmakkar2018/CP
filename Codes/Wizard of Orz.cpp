// question --> https://codeforces.com/contest/1467/problem/A 
#include <bits/stdc++.h>
/*it contains vector, map , set , iterator , string, iostream */
#include <math.h>
#include <algorithm>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

#define fi first // how to use v->fi, v->se
#define se second
#define pb push_back
#define mp make_pair
#define foreach(it, v) for(auto it=(v).begin(); it != (v).end(); ++it)
#define lop(i,start,end) for(auto i=start;i<end;i++)
#define lope(i,start,end) for(auto i=start;i<=end;i++)
#define gcd(a,b) __gcd(a,b)
#define endl "\n"
#define MX LLONG_MAX
#define MN LLONG_MIN

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> indexed_set;
const ld PI = 3.1415926535897932384626433832795;

ll powermodm(ll x,ll n,ll M){
  ll result=1;
  while(n>0){
    if(n%2==1) result=(result*x)%M;
    x=(x*x)%M;
    n=n/2;
  }
  return result;
}

void func(){
	ll n;
	cin>>n;
	if(n==1){
		cout<<"9"<<endl;
		return;
	}
	if(n==2){
		cout<<"98"<<endl;
		return;
	}
	if(n==3){
		cout<<"989"<<endl;
		return;
	}
	string s="989";
	int cnt=0;
	while(n>3){
		s+=to_string(cnt);
		cnt=(cnt+1)%10;
		n--;
	}
	cout<<s<<endl;
	return;

	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	ll t;
	cin>>t;
	while(t--){
		func();
	}
	return 0;
}
