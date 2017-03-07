/*Mirar capitulo 3 del libro de C++;
Capitulo 4 y 5 deben estar asumidos(1r Semestre);
*/

// Interfaz vs. Implementacion

// Trabajabamos con un main en un cpp
// Tambien usabamos headers(.h files)
// Dos versiones: Se puede debugar o hacer release
// Una release es la version que genera un ejecutable para poner en produccion
// La cohesion es si en un .h todo tiene que ver con un tipo de cosas: Ej:
	/*Math.h creado solo con funciones matematicas: Altamente cohesionado.
	  Math.h creado con funciones matematicas y otras funciones: Bajamente cohesionado.*/

// Una clase es un bloque con nombre, atributos y metodos.
	/*Los atributos son datos que tendra cada objeto de esa clase.
	  Los metodos trabajan sobre los atributos previos.*/

// Cada clase esta autocontenida, como si fuera un gran struct.
// Se suele cojer todos los atributos y los prototipos(cabezera) de los metodos, incluyendo tambien, constructores y destructores.
// Todos estos los podemos montar en Player.h --> esto es la interfaz de la calse, lo que la clase tiene.
// Para poder usar una clase necesitamos conocer la intrfaz de esta.
// Ahora hay que implementar cada metodo de la clase en otro archivo .cpp
// En este archivo hay que hacer un include del header:  #include "Player.h"
// Nos interesa separar la interfaz de la implementacion para generar un .obj ocultando la implementacion.

// Caracteristicas Constructor: Es un metodo de la clase
//								Se llama igual que la clase
//								Es publico
//								Inicializar los atributos de la clase
//								Este se llama automaticamente al instanciar(declarar) un objeto
//								Pueden estar sobrecargados

//


