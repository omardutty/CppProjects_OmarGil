/*Contenedor MAP :

Contenedor asociativo, todos los elementos que conforman map no estan ordenados de forma consecutiva en memoria.
Cada uno de los elementos tiene dos partes : una key y su valor.
Podremos acceder a los valores a traves de la key.
Cada una de las keys tiene que ser unica, no pueden haber repetidas.
Tiene iteradores que saben moverse por los elementos del map.
Este contenedor, como todos los de STL, es dinamico.
*/

//Ejemplo :
#include<map>
#include<string>

	struct Person {
	std::string name;
	int age;
};
	void main() {
		std::map<std::string, Person> persons;

		persons["49738781Q"] = { "Omar","18" };
		//.
		//.
		//.
		persons[//"KEYn"] = { NOMBREn,EDADn };


		// Constructor sin iteradores
			std::map<char, int> first;

			first['a'] = 10;
			first['b'] = 30;

			// Constructor con iteradores sobre otro map
			std::map<char, int>second(first.begin(), first.end());

			//Insertar a traves de pair
			persons.insert(std::pair<std::string, Person>("39057249S", { "juan","45" }));

			//Tipo typedef permite definir tipos con nombre

			typedef std::map<std::string, Person> DicPerson;

			DicPerson persons1;

			persons1.insert(persons.begin(), persons.find("49738781Q"));


			//Delete buscando el elemento a borrar
			auto it = persons.find("49738781Q");
			if (it != persons.end())persons.erase(it);

			// Delete por key
			persons.erase("49738781Q");

			//Delete multiple usando rango
			auto it1 = persons.find("49738781Q");
			persons.erase(it1, persons.end());

			// Acceso a un value usando key
			std::cout << persons["49738781Q"].name;

			// Acceso a un elemento para actualizar valor
			persons["49738781Q"].name = "Omar";

			//Acceso a key que no existe
			std::cout << persons["77777777H"].name;    //imprime ""


	}