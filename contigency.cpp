#include <iostream>
#include <vector>

int main(void){
    int N, soma;
    std::cin >> N;

    std::vector<int> armazenados(N);
    std::vector<int> esperados(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> armazenados[i]; 
    }
    for (int i = 0; i < N; ++i) {
        std::cin >> esperados[i]; 
    }
    soma = 0;
    for(int i = N - 1; i >= 0; i--){
        if(esperados[i] > armazenados[i]){
            soma = -1;
            break;
        }else if(esperados[0] == esperados[i]){
            soma += esperados[i];
            break;
        }else{
            soma += armazenados[i];
        }

    }
    std::cout << soma;


    return 0;
}