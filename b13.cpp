//Nhân 2 ma trận.


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
    int n , m , k; cin >> n >> m >> k;
    int a[n][m] , b[m][k] , c[n][k];

    for (int i =0 ;i < n ; i++){
        for (int j =0 ; j < m ;j++){
            cin >> a[i][j];
        }
    }
    for (int i=0 ;i < m ;i++){
        for (int j =0 ; j < k ;j++){
            cin >> b[i][j];
        }
    }
    for (int i =0 ; i < n ;i++){
        for (int j =0 ; j < k ; j++){
            c[i][j] = 0;
            for (int z = 0 ;z < m ; z++){
                c[i][j] += a[i][z] * b[z][j];
            }
        }
    }switch
    for (int i =0 ;i < n ;i++){
        for (int j =0 ; j < k ; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
