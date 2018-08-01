#include <iostream>
#include <cstdlib>

using namespace std;
 
int main()
{
		float subtotal=0;
	int descuento=0;
	float impuesto=0;
	float calculoDescuento=0;
	float calculoImpuesto=0;
	float total=0;
	int esExento=0;
	
    cout << "Ingrese el subtotal: ";
cin >> subtotal;
  cout << "Ingrese el descuento: ";
cin >> descuento;

cout << "Es factura exenta? si = 0 / no = 1 \n ";
cin >> esExento;
       if (esExento==0) {
       	
    calculoImpuesto = 0;
    cout << "\n Calculo del total de una factura con descuento sin impuesto :\n";
     }else
     
		if  (esExento==1){
    	impuesto = 0.15;
    	calculoImpuesto = (subtotal - calculoDescuento) * impuesto;
    	cout << "\n Calculo del total de una factura con descuento e impuesto :\n";
    }
    
calculoDescuento = (subtotal * descuento) / 100;

	
	total = subtotal - calculoDescuento + calculoImpuesto;
	
	cout << " El total a pagar es "<< total;
}
