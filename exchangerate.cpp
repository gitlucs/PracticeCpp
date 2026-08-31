#include <iostream>

int main(void){
    int T,C,K, total_fora;
    
    std::cin >> T >> C >> K;
    total_fora = T * K;

    if(total_fora > C){
        std::cout << C;
    }else{
        std::cout << total_fora;
    }


    return 0;
}