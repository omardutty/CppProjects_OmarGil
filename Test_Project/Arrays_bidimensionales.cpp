// Arrays de 2 dimensiones:
// Sirven para hacer los videojuegos, las estructuras de datos de estos estan hechos con matrices.
// La clase map tiene funcion draw, en la matriz guardamos caracteres, el draw es un volcado de esa matriz.
// Cuando hacemos draw podemos dibujar un sprite o lo que queramos.
// Para saber donde esta la serpiente podemos mirar los unos de la matriz
// Las celdas de la matriz tambien pueden contener un objeto de una clase o un struct.

int m[3][4] { {10,20,30,40},{11,21,31,41},{12,22,32,42} };

// En memoria se almacena por filas
// Si no completamos al inicializar el compilador pone zeros
// Con 2 bucles for podemos recorrer la matriz

const int NUM_ROWS{ 3 };
const int NUM_COLUMNS{ 4 };
int m[NUM_ROWS][NUM_COLUMNS];

for (int i = 0; i < NUM_ROWS; i++) {
	for (int j = 0; j < NUM_COLUMNS; j++) {
		
		m[i][j] = 0;
	
	}
}

// Lo podemos hacer con una funcion

void initializer(int a[][NUM_COLUMNS], int numRows, int numColumns) {
	for (int i = 0; i < numRows; i++) {
		for (int j = 0; j < numColumns; j++) {
			
			a[i][j] = 0;
		
		}
	}
}

void main() {
	const int NUM_ROWS{ 3 };
	const int NUM_COLUMNS{ 4 };
	int m[NUM_ROWS][NUM_COLUMNS];

	initializer(m,NUM_ROWS,NUM_COLUMNS);
}

// Podemos solucionar el problema para hacer que sirva para cualquier matriz:

void initializer(int *a,int numRows,int numColumns) {
	for (int i = 0; i < numRows; i++) {
		for (int j = 0; j < numColumns; j++) {
			
			a[i*numColumns + j] = 0; // Se trata como una array de 1D haciendo que el parametro sea un puntero
		
		}
	}
}


// Matrices Dinamicas(no sabemos ni filas ni columnas de la matriz)

// Declarar puntero de puntero

int **md;
int numRows, numColumns;

// LEER el numero de filas y columnas

std::cin >> numRows;
std::cin >> numColumns;

// Pedir Memoria para un array de punteros
// Tantos punteros como filas
// Cada puntero apuntara a una columna

md = new int*[numRows];

// Para cada puntero fila, hay que pedir memoria para las columnas de esa fila
for (int i = 0; i < numRows; i++) {
	md[i] = new int[numColumns];
}

// Ya tenemos la array de 2 dimensiones creada en memoria(HEAP)

// Para acceder:

for (int i = 0; i < numRows; i++) {
	for (int j = 0; j < numColumns; j++) {

		md[i][j] = 0;

	}
}

// Para liberar la memoria:

for (int i = 0; i < numRows; i++) {
	delete[]md[i];
}
delete[]md;









