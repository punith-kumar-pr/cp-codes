#include <bits/stdc++.h>
using namespace std;

void pat_prt(int n){
    if(n==1) {
        cout<<1<<endl;
        return;
    }
    
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;

    pat_prt(n-1);

    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    pat_prt(10);
    return 0;
}