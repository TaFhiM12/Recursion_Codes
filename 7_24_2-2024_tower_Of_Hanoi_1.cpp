#include<bits/stdc++.h>
using namespace std ;
#define nl "\n" 
#define int long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

void towerOfHanoi(int NoOfDisk, int A , int B , int C){
    if(NoOfDisk>0){
        towerOfHanoi(NoOfDisk-1 , A , C , B);
        cout << "("<<A<< ","<<C << ")" << nl ;
        towerOfHanoi(NoOfDisk-1 , B , A , C);
    }
}

int32_t main()
{
    optimize();
    int NoOfDisk , p ;
    cin >> NoOfDisk;
    towerOfHanoi(NoOfDisk , 1 , 2 , 3);
    return 0;
}