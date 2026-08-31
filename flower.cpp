#include <iostream>
#include <cmath>

int main(void){
    int sementes, potencia, resultado;

    std::cin >> sementes;
    
    potencia = 0;
    while(true){
        potencia += 1;
        resultado = std::pow(3, potencia);

        if(resultado > sementes){
            potencia -= 1;
            resultado = std::pow(3, potencia);
            break;
        }
    }
    std::cout << (resultado + sementes);



    return 0;
}