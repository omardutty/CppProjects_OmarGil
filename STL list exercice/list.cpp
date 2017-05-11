#include<iostream>
#include<list>
#include<queue>
#include<string>



std::list<int> superMerge(std::list<int>a, std::list<int>b) {
	std::list<int>todo(a);
	std::priority_queue<int>ordenado;
	for (int i = 0; i < b.size(); i++) {
		todo.push_front(b.front());
		b.pop_front();
	}
	int size = todo.size();
	for (int i = 0; i < size; i++) {
		ordenado.emplace(todo.front());
		todo.pop_back();
	}
	for (int i = 0; i < size; i++) {
		todo.push_back(ordenado.top());
		ordenado.pop();
	}
	return todo;
}

std::list<int> change(std::list<int>a) {
	int primero = a.front();
	int ultimo = a.back();
	a.pop_back();
	a.push_back(primero);
	a.pop_front();
	a.push_front(ultimo);
	return a;
}

int getElementPos(std::list<int>a,int pos) {
	for (int i = 0; i < pos; i++) {
		a.pop_front();
	}
	return a.front();
}

void removeDuplicates(std::list<int>a) {
	int aux = a.front();
	std::priority_queue<int>ordenado;

}


void main() {

}