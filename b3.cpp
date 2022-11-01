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
    int a[n][m];
    for (int i =0 ;i < n ;i++){
       for (int j=0 ; j < m ;j++){
           cin >> a[i][j];
       }

    }
    int _max =0; int _min = INT_MAX;
    for (int i =0 ; i < n ;i++){
        for (int j = 0 ;j < m ;j++){
            _max = max(a[i][j] , _max);
        }
        for (int j = 0 ; j < m ;j++){
            if (a[i][j] < _min){
                _min = min(a[i][j] , _min);
            }
        }
    }
    cout << _min << endl;
    for (int i =0 ;i < n ;i++){
        for (int  j =0 ;j <n ;j++){
            if (_min == a[i][j]){
                cout << "vi tri : " << i + 1 << " " << j+1 << endl;
            }
        }
    }
    cout << _max << endl;
    for (int i =0 ;i < n ;i++){
        for (int j =0 ; j < n ; j++){
            if (_max == a[i][j]){
                cout << "vi tri : " << i + 1  << " " << j+ 1 << endl;
            }
        }
    }
}
