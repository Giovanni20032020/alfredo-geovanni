/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    // Inicializar semilla para números aleatorios
    srand(time(NULL));

    // Generar números aleatorios
    int numero_aleatorio_1 = rand() % 100; // Genera un número aleatorio entre 0 y 99
    int numero_aleatorio_2 = rand() % 100; // Genera un número aleatorio entre 0 y 99

    // Mostrar los números aleatorios generados
    cout << "Número aleatorio 1: " << numero_aleatorio_1 << endl;
    cout << "Número aleatorio 2: " << numero_aleatorio_2 << endl;

    // Solicitar al usuario una contraseña
    string contrasena;
    cout << "Ingrese una contraseña: ";
    cin >> contrasena;

    // Solicitar al usuario una contraseña de verificación
    string contrasena_verificacion;
    cout << "Ingrese la contraseña de verificación: ";
    cin >> contrasena_verificacion;

    // Verificar que las contraseñas coincidan
    if (contrasena != contrasena_verificacion) {
        cout << "Las contraseñas no coinciden. El programa se cerrará." << endl;
        return 1; 

    cout << "Contraseñas verificadas correctamente. Bienvenido." << endl;

    return 0;
}


