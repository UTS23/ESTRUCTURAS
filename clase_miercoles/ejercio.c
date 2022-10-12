#include <iostream>
int potencia(int base,int exponente);
int main(){
    int base,exponente;
    regresoBase:
    std::cout<<" ingresa un numero base mayor a 1:";std::cin>>base;
    if(base<1){
        std::cout<<"ingresa un numero mayor o igual a 1.\n";
        goto regresoBase;
    }
    regresoExponente:
    std::cout<<" ingresa un numero exponente mayor a 1:";std::cin>>exponente;
    if(exponente<1){
        std::cout<<" ingresa un numero mayor o igual a 1.\n";
        goto regresoExponente;
    }
    std::cout<<"el resultado es  resultado: "<<potencia(base,exponente)<<"\n";
    system("pause");
    return 0;
}
int potencia(int base,int exponente){
    int pot=0;
    if(exponente==1){
        pot=base;
    }else{
        pot=base*potencia(base,exponente-1);
    }
    return pot;
