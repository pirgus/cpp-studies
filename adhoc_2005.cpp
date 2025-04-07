#include <iostream>

bool comp(int a[3], int b[3]){
    if((a[0] < b[0] && a[1] < b[1]) || (a[0] < b[1] && a[1] < b[0])
        || (a[0] < b[1] && a[1] < b[2]) || (a[0] < b[2] && a[1] < b[1])
        || (a[0] < b[0] && a[1] < b[2]) || (a[0] < b[2] && a[1] < b[0])
    ){
        return true;
    }
    else if((a[1] < b[0] && a[2] < b[1]) || (a[1] < b[1] && a[2] < b[0])
    || (a[1] < b[1] && a[2] < b[2]) || (a[1] < b[2] && a[2] < b[1])
    || (a[1] < b[0] && a[2] < b[2]) || (a[1] < b[2] && a[2] < b[0])
    ){
        return true;
    }
    else if((a[0] < b[0] && a[2] < b[1]) || (a[0] < b[1] && a[2] < b[0])
    || (a[0] < b[1] && a[2] < b[2]) || (a[0] < b[2] && a[2] < b[1])
    || (a[0] < b[0] && a[2] < b[2]) || (a[0] < b[2] && a[2] < b[0])
    ){
        return true;
    }
    
    return false;
}

int main(){
    int qtt;
    std::cin >> qtt;
    int fp[3], sp[3];
    int ans = 0;

    for(int i = 0; i < qtt; i++){
        for(int j = 0; j < 3; j++){
            std::cin >> fp[j];
        }
        for(int j = 0; j < 3; j++){
            std::cin >> sp[j];
        }

        if(comp(fp, sp)){
            if(comp(sp, fp)){
                ans = 3;
            }
            else{
                ans = 1;
            }
        }
        else if(comp(sp, fp)){
            ans = 2;
        }
    
        std::cout << ans << std::endl;
    }   

    return 0;
}