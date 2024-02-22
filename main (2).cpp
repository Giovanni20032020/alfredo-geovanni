/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std; 

void pedirCafe(){
    
    
    cout<<"Bienvenido ala cafeteria "<<endl, 
    cout<<"Que tipo de cafe te gustaria pedir "<<endl; 
    cout<<"Opciones disponibles: Espresso, Latte, Capuccino "<<endl; 

string tipoCafe; 
cin>>tipoCafe; 

cout<<"Deseas agregar azucar?  (si/no)"<<endl; 
string respuesta; 
cin>>respuesta; 

if (respuesta=="si"||respuesta =="si"||respuesta =="si"||respuesta =="SI"||respuesta=="S"){
    
    cout<<"Perfecto,estas pidiendo un"<<tipoCafe<<"Sin azucar.  ¡Enseguida lo haremos"<<endl;
}else{
    cout<<"Perfecto,estas pidiendo un"<<tipoCafe<<"Sin azucar.  ¡Enseguida lo haremos"<<endl;


}
}

int main(){
    pedirCafe();
    return 0; 
}
    
