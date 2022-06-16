#include <iostream>

using namespace std;

int main()

{
    cout<<"\n\nEjemplo de bucle while que imprime la tabla de 9";

    int tabla=9;
    int i=1;
    while(i<=10)
    {
        cout<<"\n" << tabla << " x " << i << " = " << (tabla * i);
        i++;
    }

    //se pide por teclado un numero entero que debe estar entre 1 y 20.
    //este número representa la tabla que el usuario desea generar.
    //se pide con un bucle while generar la tabla de multiplicar

    int num;
    cout<<endl<<endl<<"ingrese la tabla que deseas generar: ";
    cin>>num;
    if( !( num>=1 && num <=20 ) )
    {
        cout<<endl<<"rango no válido...";
        return 0; //abandonar la ejecución del programa
    }
    
    i=1;
    while(i<=12)
    {
        
        cout<<"\n" << num << " x " << i << " = " << (num * i);
        i++;
    }
    return 0;
}