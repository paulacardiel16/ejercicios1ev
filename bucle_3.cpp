#include<iostream>
main(){
       int numero;
       int i;
       char salir;
       std::cout<<"Que tabla de multiplicar quieres que escriba(1-10):";
       std::cin>> numero;
       for(i=1;i<=10;i++){
                          std::cout<< i;
                          std::cout<<" x ";
                          std::cout<<numero;
                          std::cout<< " = ";
                          std::cout<< i*numero;
                          std::cout<< "\n";
       }
       std::cout<<"Toca cualquier tecla para salir: ";
       std::cin>> salir;
       return 0;
}
