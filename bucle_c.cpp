#include<iostream>
int main(){
    //Este programa cuenta hasta 10
    int i;
    char salir;
    //Los for son un poco distintos
    //i++ es lo mismo que i=i+1
    for(i=1;i<=10;i++){
        std::cout<<i;
        std::cout<<"\n";
        
}
std::cout<<"Toca cualquier tecla:";//instrucci�n de salida
std::cin>>salir;//instrucci�n de entrada
return 0;
}
    
