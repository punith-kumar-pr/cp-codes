#include <bits/stdc++.h>
using namespace std;

void say_hello(int n){
    if(n==0) return;
    say_hello(n-1);
    cout<<"Hello"<<n<<endl;
}

int main(){
    say_hello(10);
    return 0;
}