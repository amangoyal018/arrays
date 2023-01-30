#include<bits/stdc++.h>
using namespace std;
void fun(int *ptr){
    *ptr+=5;

}



int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int x=10;
    fun(&x);
    cout<<x;

}            