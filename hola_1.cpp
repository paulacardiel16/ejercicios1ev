/*Esto es mi primer programa en C */
#include<iostream>//Es una instrucción al prepocesador
int main(){
    //Definición de las variables
    char salir;
    //print "Hola Mundo"
    std::cout<< "Hola Mundo";//Es obligatorio el ;
    /*Ponemos una instrucción para que el programa espere a que toquemos cualquier tecla*/
    std::cout<<"Toca cualquier tecla:";//instrucción de salida
    std::cin>>salir;//instrucción de entrada
    return 0;
}
