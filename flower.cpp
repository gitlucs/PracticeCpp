#include <iostream>
#include <cmath>

int main(void){
    int sementes, potencia, resultado;

    std::cin >> sementes;
    
    potencia = 0;
    while(true){
        resultado = std::pow(3, potencia);

        if(resultado <= sementes && sementes < 2 * resultado){
            resultado += sementes;
            break;
        }else if(2 * resultado <= sementes && sementes < std::pow(3, potencia + 1)){
            resultado = 3*(sementes - resultado);
            break;
        }
        potencia += 1;
    }
    std::cout << resultado;



    return 0;
}