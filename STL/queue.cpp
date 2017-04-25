//queue container
/*
Caso particular de deque
Implementar un comportamiento FIFO
Solo se puede insertar por el final
Solo se puede borrar por el principio
Es dinamico
No tiene ningun tipo de iterador

Operaciones CRUD:

- Create: encolar
- Delete: desencolar
- Update: NO TIENE
- Read: Consultar el primer elemento de la cola sin desencolarlo y consultar el ultimo


*/

#include<queue>
#include<iostream>

std::queue<int> q1;
void Queue() {
	q1.push(2);
	q1.push(3);
	int p = q1.front();
	std::cout << "Primer elemento: " << p << std::endl;
	q1.pop();
	int u = q1.back();
	std::cout << "Ultimo elemento: " << u << std::endl;
	q1.pop();
}

//priority_queue
/*

Lo mimo que la queue pero en el orden de su valor
Si son enteros se ordenaran por numero de mas grande a mas pequeño
Solo se puede acceder al front

*/

std::priority_queue<int>pq1;
void PQueue() {
	pq1.push(23);
	pq1.push(245);
	pq1.push(7);
	std::priority_queue<int>pq2(pq1);
	while (!pq2.empty())
	{
		std::cout << pq2.top() << std::endl;
		pq2.pop();
	}
}
