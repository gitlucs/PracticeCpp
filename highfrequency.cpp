#include <iostream>
#include <vector>

int main(void){
    int N, Q, soma_c, soma_v, ci, vi, n;
    float I;
    std::cin >> N;

    std::vector<std::vector<int>> somas(N, std::vector<int>(2));
    soma_c = 0;
    soma_v = 0;
    for(int i = 0; i < N; i++){
        std::cin >> ci >> vi;
        soma_c += ci;
        soma_v += vi;

        somas[i][0] = soma_c;
        somas[i][1] = soma_v;
    }

    std::cin >> Q;
    for(int i = 0; i < Q; i++){
        std::cin >> n;
        n -= 1;

        I = static_cast<float>(somas[n][0] - somas[n][1])/ (somas[n][0] + somas[n][1]);
        if(I > 0.0f){
            std::cout << "COMPRA" << "\n";
        }else if(I < 0.0f){
            std::cout << "VENDA" << "\n";

        }else{
            std::cout << "NEUTRO" << "\n";
        }

    }
    

    return 0;
}