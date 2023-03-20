#include <bits/stdc++.h>
using namespace std;

// 1+2+....+(n-1)+n
int sum_n(int n){
    if(n==0) return 0;
    int leftpart = sum_n(n-1);
    return leftpart+n;
}

int main(){
    cout<<sum_n(10);
    return 0;
}