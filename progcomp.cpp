#include<iostream>
#include<string>
#define MOD 1000000007
#define LLD long long int
using namespace std;
LLD fact(LLD x) {
    if(x == 0) {
        return 1;
    }
    else {
        LLD j,k = 1;
        for(j=1;j<=x;j++) {
            k = (k*j)%MOD;
        }
        return k;
    }

}
int main()
{
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        LLD i, cnt=0;
        LLD h[30]  = {0};
        for(i=0;i<s.length();i++) {
            h[s[i]- 'a']++;
        }
        for(i=0;i<30;i++) {
            if(h[i]>0) {
                cnt++;
            }
        }
        LLD ans= fact(cnt);
        for(i=0;i<30;i++) {
            if(h[i]>0){
                ans = (ans * fact(h[i]))%MOD;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
