#include <iostream>
#include <cstdlib>

int sort[]={1,3,134,6,2,62,3254};

void selection(int *a,int n){
    for(int i=1; i<n;++i){
        int now=i;
        for (int j=i+1;j<=n;++j ){
            if(a[j]<a[now]){
                std::swap(a[i],a[now]);
            }
        }
    }
};
int main(){
    selection(sort,7);
    return 0;
};

