//		INPUT/OUTPUT
/*

*/

#include<fstream>
#include<iostream>
#include<string>
#include<map>
	
void ficheros() {
	// Abrir
		// De Salida
		std::ofstream fsalida;
		fsalida.open("doc.txt");
		// De Entrada
		std::ifstream fentrada;
		fentrada.open("doc2.txt");
		// Con Parametros
		std::ifstream myfile("doc3.txt", std::ios::in | std::ios::binary);
		std::ifstream myfile2("doc4.txt", std::ios::in | std::ios::binary);

	// Cerrar
		fentrada.close();

	// Leer
		// Leer Enteros
		int x1, y1;
		myfile >> x1 >> y1;
		// Leer por Linea con array de chars
		char line[250];
		while (myfile.getline(line, 250)) {
			std::cout << line << std::endl;
		};
		// Leer por Linia con strings
		std::string linea;
		while (getline(myfile2, linea)) {
			std::cout << linea << std::endl;
		};

}

void main() {
	std::map<std::string, std::string, std::string>mapa;
	std::ifstream archivo;
	archivo.open("doc.txt");
	std::string line
	std::string p1, p2, p3;
	while (getline(archivo,line)) {
		p1 = 
		mapa.insert(p1, p2, p3);
	}
}
