#include<iostream>
/*Este programa sirve para saber qu� numeros son pares o impares*/
main(){
       int n_maximo;
       n_maximo=100;
       int i;
       char salir;
       //i es una variable contadora.
       for(i=1;i<=n_maximo;i++){
                           if(i%2==0){
                                      std::cout<<i;
                                      std::cout<<" es PAR";
                           }else{
                                 std::cout<<i;
                                 std::cout<<"es IMPAR"; 
                           }       
                           std::cout<<"\n";
       
       }
       std::cout<<"SE ACABO LO QUE SE DABA \n";
       std::cout<<"Toca cualquier tecla para salir: ";
       std::cin>> salir;
       return 0;
}
