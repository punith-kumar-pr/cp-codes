#include <bits/stdc++.h>
using namespace std;

int sum_digits(int n){
    if(n==0) return 0;
    int leftpart = sum_digits(n/10);
    return leftpart + n%10;
}

int main(){
    cout<<sum_digits(1234);
    return 0;
}