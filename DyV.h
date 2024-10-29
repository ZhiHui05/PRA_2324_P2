#include<vector>
/*Ejemplo implementacion de include vector
std::vector<int> a;            //Vector de ints vacío
std::vector<float> b(10);      //Vector de floats con 10 elementos
std::vector<short> d{1, 2, 3}; //Vector de shorts con 3 elementos: 1, 2 y 3

size_t val = b.size();         //Tamaño del vector b
a.push_back(10);               //Añade el valor 10 al final del vector a
d.pop_back();                  //Elimina el último valor del vector d.
float val2 = b[3];             //Devuelve el valor que haya en la posición 3 de b
*/			   


//=============================================================
#define NOTFOUND -1

int busquedabin(int x, std::vector<int>& v, int ini, int fin){

	if (ini > fin){
	//Devuelve error si valor no esta en el intervalo
	return NOTFOUND;
	}
	int medio =( (ini + fin) / 2);
	
	if (v[medio] == x){
		return medio;
	}
	else if (v[medio] > x){
		return busquedabin(x,v,ini,medio -1);
	}
	else{
		return busquedabin(x,v,medio + 1, fin);
	}


}
