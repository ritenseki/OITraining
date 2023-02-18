#include <cstdlib>
#include <iostream>

int sort[]={3,4,2,5,7,8,6,9,1};

void bubble(int *arrays,int num){
    int count = num-1;
    
    for(int working=1;working<=count;++working){
        /*
        int now = 0,
            next = now+1;
        */
        for(int now = 0;now<=count-working;++now){
            int next = now+1;
            // std::cout<<arrays[now]<<arrays[next]<<std::endl;
            if(arrays[now]>arrays[next]){std::swap(arrays[now],arrays[next]);}
            // std::cout<<arrays[now]<<arrays[next]<<std::endl;
        }
        //std::cout<<arrays[working-1]<<std::endl;
    }

    
}

int main(){
    int  size = 9;
    bubble(sort,9);
    
    for(int k = 0;k<9;k++){
        std::cout<<sort[k]<<std::endl;
    }
    
    return 0;
}