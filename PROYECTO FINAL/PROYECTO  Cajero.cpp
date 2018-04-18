#include<iostream>
using namespace std;

int main(){
    int saldo_inicial = 1000 ;
    int saldo,reintegro, opcion, agregar;
    
    cout<<"\n1-Camilo Gonzalez....Mat:14-MISN-1-139";
    cout<<"\n2-Eddy Gonzalez....Mat:14-MISN-1-107";
    cout<<"\n..............";
    cout<<"\n..............";
    
    cout<<"\tBienvenido a su cajero Virtual";
    
    cout<<"\n..............";
    
    cout<<"\nEscoge una Opcion: ";
    cout<<"\n1. Ingrese en Cuenta";
    cout<<"\n2. Reintegro";
    cout<<"\n3. Ver el Saldo de Cuenta";
    cout<<"\n0. Salir";
    
    cout<<"\n...............................";
    
    cout<<"\nOpcion:";
    cin>>opcion;
    
    if(opcion==1){
         cout<<"\nIngrese la cantidad a depositar: ";
         cin>>agregar;
         saldo = saldo_inicial + agregar;
        
         cout<<"\ncantidad disponible en cuenta: "<<saldo;     
          cout<<"\n...";
          return main();
    }
                
    else if(opcion==2){
         cout<<"\nCuenta cantidad desea retirar: ";
         cin>>reintegro;
         if (reintegro>1000){
           cout<<"\La csntidad digitada es mayor a 1000, digite de nuevo la cantidad ";
           cin>>reintegro; 
            cout<<"\n...";
            return main();
       }  
          saldo= saldo_inicial - reintegro;
          cout<<"\ncantidad disponible en cuenta: "<<saldo;
             cout<<"\n..."; 
             return main();                
    }
    else if(opcion==3){
         cout<<"\nLa cantidad disponible en cuenta es de: "<<saldo_inicial; 
          cout<<"\n..."; 
          
    }
    else if(opcion==0){
         cout<<"Gracias por utilizar nuestro cajero automatico";
          cout<<"\n...";
        
    }
    else {
         cout<<"Se equivoco de opcion";  
          cout<<"\n...";  
          return main();
          
    }
    
 system ("pause");

 return 0;
 return main();
 }   

