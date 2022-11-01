#include<bits/stdc++.h>


using namespace std;
using ll = long long;
using db = double;
const int MOD = 1e9 +7;





int nt(int n){
    for (int i=2 ;i <= sqrt(n) ;i++){
        if (n % i == 0) return 0;
    }
    return n>1;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //memset(cnt , 0 , sizeof(int));
    int n , m; cin >> n >> m;
    int a[n][m];
    for (int i=0 ;i < n;i++){
        for (int j=0 ; j < m ;j++){
            cin >> a[i][j];
        }
    }
    for (int i=0 ; i < n ;i++){
        for (int j =0; j < m ;j++){
            if (nt(a[i][j])){
                cout  << a[i][j] << " ";
            }
        }
        cout << endl;
    }
}
