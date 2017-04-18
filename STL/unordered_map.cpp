// Contenedor unordered_map
/* 
Tiene la misma forma conceptual que el map

- Los elementos no estan ordenados, se organizan con una hash table, eso hace que sea mas eficiente que el map
	Se esta usando mas el unordered_map que el map
- Solo soporta iteradores forward(no tiene sentido recorrer hacia delante y atras porque no tiene orden)

OPERACIONES CRUD:

- Create: es mas rapido ya que no hay orden
- Read: mas rapida que map
- Update: actualizar el valor con su key
- Delete: usando la key
- Buscar una key si existe es mas rapido
- Para iterar no lo hace en un orden especifico

*/
#include<unordered_map>
#include<iostream>
#include<string>

std::unordered_map<std::string, double> myrecipe, mypantry = { {"milk",2.0},{"flour",1.5} };
std::pair<std::string, double> myshopping("baking powder", 0.3);
//Insert por copia
void main() {
	myrecipe.insert(myshopping);
	myrecipe.insert(std::make_pair<std::string, double>("eggs", 6.0));
}

//La key del unordered_map puede ser de cualquier tipo siempre que ese tipo tenga la funcion de hash
//Si no la tiene hay que implementarla

//El operador "operator()" es la funcion hash

// POSIBLE SOLUCION

struct coor {
	int x, y;
	bool operator==(const coor &other) const {
		return (x == other.x && y == other.y);
	};
	size_t operator()(const coor &c) const {
		return((std::hash<int>()(c.x) ^ (std::hash<int>()(c.y) << 1)) >> 1);
	}
};

std::unordered_map<coor, int, coor> om;
void mein() { /*main falso*/
	om = { {{2,3},2},{{1,2},3},{{3,4},7} };
}

// OTRA SOLUCION

struct coorHash {
	size_t operator()(const coor&c) const {
		return((std::hash<int>()(c.x) ^ (std::hash<int>()(c.y) << 1)) >> 1);
	}
};

std::unordered_map<coor, int, coorHash> om1;
void mein2() {
	om1 = { { { 2,3 },2 },{ { 1,2 },3 },{ { 3,4 },7 } };
}