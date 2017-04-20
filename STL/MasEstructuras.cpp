// Mas estructuras de datos asociativas

// SET
/*
Tiene una diferencia con el map, este no tiene keys.
El valor que se guarda es la propia key.

Caracteristicas:
- Los valores son unicos, no hay valores repetidos.
- Si queremos insertar un elemento que ya esta dentro no lo inserta.
- No tiene sentido modificar los elementos(no existe el update).
- Es dinamico
- El set es ordenado, guarda los valores en un arbol binario ordenado.
- Soporta iteradores bidireccionales.

Operacionse CRUD:
- Create: insertar elemento.
- Delete: eliminar elemento.




*/

#include<set>
#include<string>
#include<iostream>
#include<algorithm>
#include<iterator>

// Constructor
std::set<std::pair<std::string, int>> s;
// Constructor sin argumentos
std::set<int> c1, c2;
// Constructor por lista
std::set<std::string> c4({ "abc","def","ghijk" });
// Constructor por copia
std::set<std::string>s5(c4);
// Constructor por iteradores
std::set<std::string>s6(c4.begin(), c4.end());
// Insertar
void Insert() {
	s.insert({ "Omar",18 });
	c1.insert(1);
}
// Delete
void Delete() {
	c1.erase(3);
}
// Read
void Read() {
	auto it = c1.find(3);
	std::cout << (*it);
}

// UNION
void Union() {
	std::set<int>c1, c2, c3;
	c1.insert(1);
	c1.insert(4);
	c1.insert(3);

	c2.insert(2);
	c2.insert(4);

	std::set_union(c1.begin(), c1.end(), c2.begin(), c2.end(), std::inserter(c3, c3.begin()));
}