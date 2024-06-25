// question --> 
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

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> indexed_set;
const ld PI = 3.1415926535897932384626433832795;

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}


template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.fi); cerr << ","; _print(p.se); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// const int DIRS = 4;
// const int DR[DIRS] = {-1,  0, +1,  0};
// const int DC[DIRS] = { 0, +1,  0, -1};

// // const int DIRS = 8;
// // const int DR[DIRS] = {-1, -1, -1,  0, +1, +1, +1,  0};
// // const int DC[DIRS] = {-1,  0, +1, +1, +1,  0, -1, -1};

// struct state {
//     int row = -1, col = -1;

//     state() {}

//     state(int _row, int _col) : row(_row), col(_col) {}
// };

// template<typename T_row>
// struct grid_bfs {
//     int R, C;
//     vector<T_row> grid;
//     vector<vector<int>> dist;

//     grid_bfs(const vector<T_row> &_grid = {}) {
//         init(_grid);
//     }

//     void init(const vector<T_row> &_grid = {}) {
//         grid = _grid;
//         R = int(grid.size());
//         C = grid.empty() ? 0 : int(grid[0].size());
//     }

//     bool valid(int r, int c) {
//         return 0 <= r && r < R && 0 <= c && c < C;
//     }

//     void bfs_check(queue<state> &q, queue<state> &next_q, const state &s, int new_dist, int add) {
//         assert(add == 0 || add == 1);

//         if (new_dist < dist[s.row][s.col]) {
//             dist[s.row][s.col] = new_dist;
//             (add == 0 ? q : next_q).push(s);
//         }
//     }

//     void bfs(const vector<state> &source) {
//         if (R == 0 || C == 0) return;

//         // Two queues are needed for 0-1 BFS.
//         queue<state> q, next_q;
//         dist.assign(R, vector<int>(C, INF));

//         for (const state &src : source)
//             bfs_check(q, next_q, src, 0, 0);

//         int level = 0;

//         while (!q.empty() || !next_q.empty()) {
//             while (!q.empty()) {
//                 state top = q.front(); q.pop();
//                 int r = top.row, c = top.col;

//                 if (level > dist[r][c])
//                     continue;

//                 for (int dir = 0; dir < DIRS; dir++) {
//                     int nr = r + DR[dir];
//                     int nc = c + DC[dir];

//                     if (valid(nr, nc) && grid[nr][nc] >= 0) {
//                         int add = 1;
//                         bfs_check(q, next_q, state(nr, nc), dist[r][c] + add, add);
//                     }
//                 }
//             }

//             swap(q, next_q);
//             level++;
//         }
//     }
// };


// How to get an indexes of array after sorting, ind 
// vector<int> ind(n);
// iota(ind.begin(),ind.end(),0);
// sort(ind.begin(),ind.end(),[&v](int x,int y){
// 	return v[x].first<v[y].first;
// });


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
	int n,a,b;
	cin>>n>>a>>b;
	cout<<min(n*a,(n/2)*b+(n%2)*a)<<endl;
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("Error.txt", "w", stderr);
	#endif

	ll t=1;
	cin>>t;
	while(t--){
		func();
	}
	return 0;
}

