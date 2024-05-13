#include <iostream>
using namespace std;
 int main () 
 {




//declaramos variables 
float horas =0;
float horas_b, horas_e, salario_neto,impuestos,salario_liquidos;
string nombre;

//datos de entrada; 
cout << "ingrese nombre ";
cin>> nombre;
cout << "ingrese horas de trabajo al mes";
cin>> horas; 
 
 //calculo de salario neto, sim impuestos 
 if (horas<=160 && horas >0)
{
horas_b = horas; 
horas_e = 0; 
}

 else {
horas_b =160;
horas_e =160; 
 }  
 salario_neto = horas_b *10 *1.5;
 if (salario_neto <=200)
{
    impuestos=salario_neto  *0;
}
else if(salario_neto>200 && salario_neto<200 )
{
    impuestos* 0.3;  
}
//salidas 

  cout << "Hola, " << nombre << " su datos de salario son: \n";
    cout << "\tSalario neto:\t\t" << salario_neto;
    cout << "\n\tImpuesto:\t\t" << impuestos;
    cout << "\n\tSalario Liquido:\t" << salario_neto-impuestos << "\n"; 
    return 0;








 }


  








