//Số điểm cực đại


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

int dx[8]  = {-1 , -1, -1 , 0 , 0 , 1 , 1,1 };
int dy[8] = {-1 , 0 , 1 , -1 , 1 , -1 , 0 , 1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , m; cin >> n >> m;
    int a[101][100];
    for (int i =1 ; i <= n ;i++){
        for(int j = 1; j <= m ;j++){
            cin >> a[i][j];
        }
    }
    ll ans =0;
    for (int i = 1; i <= n ; i++){
        for (int j =1; j <= m ;j++){
            bool ok = true;
            for (int k =0 ; k < 8 ; k++){
                int imoi = i + dx[k];
                int jmoi = j + dy[k];
                if (imoi >= 1 && imoi <= n && jmoi >= 1 && jmoi <=n){
                    if (a[imoi][jmoi] >= a[i][j]){
                        ok = false;
                        break;
                    }
                }
            }
            if (ok) ans++;
        }
    }
    cout << ans;
}
