// deque container
/*
Contenedor secuencial cuyos valores no estan guardados consecutivamente en memoria.
Una caracteristica es que las operaciones de insertar y borrar son mas baratas que en el vector.
Se puede acceder a los valores a traves de un indice.

(Se puede usar este contendeor en substitucion al vector)

Caracteristicas:
- Implementadas con arrays dinamicas con los elementos no consecutivos en memoria
- Mas eficiente que vector
- Permiten insertar i eliminar elementos al inicio, final e intermedio del contenedor de forma mas eficiente que el vector
- Es dinamico
- Estan en orden secuencial, los valores no tienen nada que ver
- Acceso directo via [pos]
- Soporta iteradores bidireccionales


*/

#include<deque>
#include<iostream>
#include<string>
#include<vector>

std::deque<int>d1;
std::deque<std::string>d2(5);
std::deque<std::string>d3(5, "abc");
std::deque<int>d4({ 1,2,3,4 });

void Deque() {
	//INSERT
	d1.push_back(1);
	d1.push_front(2);
	d1[45] = 7;
	//DELETE
	d1.pop_back();
	d1.pop_front();

	for (unsigned i = 0; i < d3.size; i++) {
		std::cout << d3[i] << "-";
	}

//Ejemplo

	std::deque<int> d6;
	//Set some initial values:
	for (int i = 1; i<6; i++) d6.push_back(i); // 1 2 3 4 5
	std::deque<int>::iterator it = d6.insert(d6.begin() + 2, 10); // 1 2 10 3 4 5
		// "it" now points to the newly inserted 10
		d6.insert(it, 2, 20); // 1 2 20 20 10 3 4 5
	// "it" no longer valid!
	it = d6.begin() + 2;
	std::vector<int> myvector(2, 30);
	d6.insert(it, myvector.begin(), myvector.end());
	// 1 2 30 30 20 20 10 2 3 4 5
	std::cout << "d6 contains:";
	for (it = d6.begin(); it != d6.end();++it)
		std::cout << ' ' << *it;
		std::cout << '\n';
