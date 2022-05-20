#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,ans1,ans2,ans3,ans4;
    cin>>a;
    if((a>4&a<12) & a%2=0){
        ans1=1;
    }
    if((a>4&a<12)|a%2=0){
        ans2=1;
    }
    if((a>4&a<12)|a%2=0){
        if(!((a>4&a<12)&a%2=0)){
            ans3=1;
        }
    }
    if(!((a>4&a<12)&a%2=0)){
        ans4=1;
    }
    cout<<ans1<<" "<<ans2<<" "<<ans3<<" "<<ans4;
    return 0;
}