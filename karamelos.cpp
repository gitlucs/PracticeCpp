#include <numeric>
#include <iostream>

int main(void){
    int amigos, tipos, resultado, divisor;

    std::cin >> amigos >> tipos;
    divisor = std::gcd(amigos,tipos);
    
    if(divisor != 1){
        resultado = -1;
    }else{
        resultado = 0;
        while(((resultado * tipos) % amigos != 1) || (resultado * tipos < amigos) ){
            resultado += 1;
        }
    }

    std::cout << resultado;
    return 0;
}