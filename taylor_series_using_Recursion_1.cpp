#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

double e(double x , double n){
    static double p = 1 , f = 1 ;
    double r ;
    if(n==0) return 1;
    else {
        r = e(x,n-1);
        p = p*x ;
        f = f*n ;
        return r + (p/f) ;
    }
}

int32_t main()
{
    optimize();
    cout << e(3,100) << nl ;;
    return 0;
}
