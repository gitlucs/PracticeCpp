#include <iostream>

int main(void){
    int lances, tengos, lengos, diferenca;
    
    std::cin >> lances;

    tengos = 0;
    lengos = 0;
    for(int i = 1; i <= lances; i++){
        if(i % 2 == 0){
            tengos += i;
        }else{
            lengos += i;
        }
    }
    
    diferenca = tengos - lengos;

    if(diferenca % 2 == 0){
        std::cout << "PAR";
    }else{
        std::cout << "IMPAR";
    }

    return 0;
}