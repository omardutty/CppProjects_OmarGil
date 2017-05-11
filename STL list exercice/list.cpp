#include<iostream>
#include<list>
#include<queue>
#include<string>
#include<deque>


void printList(std::list<int>a) {
	int size = a.size();
	for (int i = 0; i < size; i++) {
		std::cout << a.front() << std::endl;
		a.pop_front();
	}
}

std::list<int> superMerge(std::list<int> a, std::list<int> b) {

	std::list<int> lista;
	std::priority_queue<int> queue;

	std::list<int> lista1(a);
	int size1 = lista1.size();
	std::list<int> lista2(b);
	int size2 = lista2.size();

	for (int i = 0; i < size1; i++) {
		int aux;
		aux = lista1.front();
		lista1.pop_front();
		queue.push(aux);
	}

	for (int i = 0; i < size2; i++) {
		int aux;
		aux = lista2.front();
		lista2.pop_front();
		queue.push(aux);
	}

	int size = queue.size();
	for (int i = 0; i < size; i++) {

		int aux;
		aux = queue.top();
		queue.pop();
		lista.push_back(aux);
	}
	return lista;
}
//OK

std::list<int> change(std::list<int>a) {
	int primero = a.front();
	int ultimo = a.back();
	a.pop_back();
	a.push_back(primero);
	a.pop_front();
	a.push_front(ultimo);
	return a;
}
//OK

int getElementPos(std::list<int>a,int pos) {
	for (int i = 0; i < pos; i++) {
		a.pop_front();
	}
	int b = a.front();
	return b;
}
//OK

std::list<int> removeDuplicates(std::list<int>a) {
	std::priority_queue<int>ordenado;
	std::deque<int>posicion;
	int size = a.size();
	for (int i = 0; i < size; i++) {
		ordenado.push(a.front());
		a.pop_front();
	}
	int size2 = ordenado.size();
	for (int i = 0; i < size; i++) {
		posicion.push_front(ordenado.top());
		ordenado.pop();
	}

	int aux = posicion.front();
	for (int i = 1; i < posicion.size(); i++) {
		if (aux == posicion[i]) {
			posicion.erase(posicion.begin()+i);
			aux = posicion[i];
		}
		else {
			aux = posicion[i];
		}
	}
	size = posicion.size();
	for (int i = 0; i < size; i++) {
		a.push_front(posicion.front());
		posicion.pop_front();
	}
	std::list<int>copia(a);
	return copia;
}
//OK

std::list<int> removeElement(std::list<int>a, int num) {
	int size = a.size();
	std::deque<int>helper;
	for (int i = 0; i < size; i++) {
		helper.emplace_front(a.front());
		a.pop_front();
	}
	int size2 = helper.size();
	for (int i = 0; i < helper.size(); i++) {
		if (helper[i] == num) {
			helper.erase(helper.begin() + i);
			i--;
		}
	}
	int size3 = helper.size();
	for (int i = 0; i < size3; i++) {
		a.push_front(helper.front());
		helper.pop_front();
	}
	std::list<int>l1(a);
	return l1;
}
//OK

bool palindrome(std::list<int>&a) {
	int mitad = a.size() / 2;
	int contador = 0;
	for (int i = 0; i < mitad; i++) {
		if (a.front() == a.back()) {
			contador++;
			a.pop_front();
			a.pop_back();
		}
		else { return false; }
	}
	
		return true;
	
}
//OK

void main() {
	std::list<int>a{ 5,4,5,2,1,1,8,9 };
	std::list<int>b{ 9,7,8,9 };
	superMerge(a, b);
	//change(a);
	//getElementPos(a, 4);
	//removeElement(a,1);
	bool a1 = palindrome(b);
	printList(superMerge(a, b));
	std::cout << std::endl;
	printList(removeDuplicates(a));
}