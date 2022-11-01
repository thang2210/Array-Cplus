#include<bits/stdc++.h>



// Cho một ma trận nhị phân có N hàng và M cột, một con chuột bắt đầu từ ô có tọa độ [s, t] và tìm đường đi tới ô [u, v], biết rằng ở mỗi bước con chuột có thể di chuyển từ ô hiện tại sang các ô chung cạnh với ô hiện tại và số ở ô chung cạnh là số 1. Bạn chỉ được đi qua 1 ô đúng 1 lần hãy kiểm tra xem con chuột có thể tìm được đường đi tới ô [u, v] hay không ? Dữ liệu đảm bảo 2 ô [s, t] và ô [u, v] đều bằng 1.
using namespace std;
using ll = long long;
using db = double;
#define MAX_SIZE 1e7
#define MIN_SIZE -1e7

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}


int dx[4] = {-1 , 0 , 0 ,1};
int dy[4] = {0 , -1 , 1 , 0};

int n , m;
int s , t , u , v;
int a[101][101];


void Try(int i , int j){
    a[i][j] = 0;
    for (int l = 0 ;l < 4; l++){
        int imoi = i + dx[l];
        int jmoi = j + dy[l];
        if (imoi >= 1 && imoi <= n && jmoi >= 1 && jmoi <= m && a[imoi][jmoi]){
            Try(imoi , jmoi);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    cin >> s >> t >> u >> v;
    for (int  i =1;i <= n ;i++){
        for (int j =1;j <= m ;j++){
            cin >> a[i][j];
        }
    }
    Try(s , t);
    if(a[u][v] == 1) cout << "NO";
    else cout << "yes";
}
