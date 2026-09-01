#include <iostream>
#include <vector>

int main(void){
    int N, soma, menor_sobra;
    std::cin >> N;

    std::vector<std::vector<int>> armazenados(N ,std::vector<int>(2));
    
    for (int i = 0; i < N; i++){
        std::cin >> armazenados[i][0]; 
    }
    for (int i = 0; i < N; i++){
        std::cin >> armazenados[i][1]; 
    }
    menor_sobra = armazenados[0][0] - armazenados[0][1];
    for(int i = 0; i < N; i++){
        if(menor_sobra > armazenados[i][0] - armazenados[i][1]){
            menor_sobra = armazenados[i][0] - armazenados[i][1];
            elemento[0] = armazenados[i];
        }
    }

    if(menor_sobra >= 0){
        soma = 0;
        for(int i = 0; i < N; i++){
            soma += armazenados[i][0];
        }
        soma -= menor_sobra;

    }else{
        soma = -1;
    }
   
    std::cout << soma;


    return 0;
}