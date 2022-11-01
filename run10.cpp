#include<bits/stdc++.h>


using namespace std;
using ll = long long;
using db = double;
#define MAX_SIZE 1e7
#define MIN_SIZE -1e7

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ,m; cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (auto &x : a){
        cin >> x;
    }
    for (auto &x : b){
        cin >> x;
    }
    vector<int> g ,h;
    int i=0 , j=0;
    while(i < n && j < m){
        if (a[i] == b[j]){
            h.push_back(a[i]);
            g.push_back(a[i]);
            i++; j++;
        } else if (a[i] > b[j]){
            h.push_back(b[j++]);
        } else {
            h.push_back(a[i++]);
        }
    }
    while(i < n) {
        h.push_back(a[i++]);
    }
    while(j < m){
        h.push_back(b[j++]);
    }
    for (auto x : h){
        cout << x << " ";
    }
    cout << endl;
    for (auto x : g){
        cout << x << " ";
    }
}
