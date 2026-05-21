//11 EJERCICIO 2 - C++
//1/ Mapa para buscar productos
#include <iostream>
#include <map>
#include <string>
using namespace std;

class Producto {
public:
     string nombre;
     float precio;

     Producto () {}
     
     Producto(string n, float p) {
         nombre = n;
         precio = p;
		}
};

int main() {
    map<string, Producto> productos;
    
     productos ["A001"] = Producto("Lapiz", 8.50);
     productos ["A002"] = Producto("Cuaderno", 35.00);
     productos ["A003"] = Producto("Pluma", 12.00);

     string codigo;
     cout << "Codigo a buscar: ";
	 cin >> codigo;
	 
     if (productos. find(codigo) != productos.end()) {
         Producto producto = productos[codigo];
         cout << "Producto: " << producto.nombre <<endl;
		 cout << "Precio: $" <<producto.precio << endl;
} else {
     cout << "Codigo no encontrado" << endl;
	 }
return 0;
}
