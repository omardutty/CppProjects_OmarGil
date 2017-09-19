#include<stdio.h>
#include<iostream>
#include<vector>
#include<deque>
#include<queue>
#include<stack>
#include<list>
#include<forward_list>
#include<map>
#include<set>








void main() {

	//VECTOR

	std::vector<int>vector1({ 1, 2, 3, 4, 5 });//Constructor por lista
	std::vector<int>vector2(vector1);//Constructor por copia
	std::vector<int>vector3(5);//Constructor de numero de elementos inicializados en 0
	for (int i = 0; i < vector1.size(); i++) {
		std::cout << vector1[i] << " ";
	}
	std::cout << std::endl;
	for (std::vector<int>::iterator it = vector1.begin(); it != vector1.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	//DEQUE

	std::deque<int>deque1({ 6, 7, 8, 9, 10 });//Constructor por lista
	std::deque<int>deque2(deque1);//Constructor por copia
	std::deque<int>deque3(5);//Constructor de numero de elementos inicializados en 0
	for (int i = 0; i < deque1.size(); i++) {
		std::cout << deque1[i] << " ";
	}
	std::cout << std::endl;
	for (std::deque<int>::iterator it = deque1.begin(); it != deque1.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	//QUEUE

	std::queue<int>queue1({ 11, 12, 13, 14, 15 });//Constructor por lista
	std::queue<int>queue2(queue1);//Constructor por copia
	for (int i = 0; i < queue1.size(); i++) {
		std::cout << queue1.front() << " ";
		queue1.push(queue1.front());
		queue1.pop();
	}
	std::cout << std::endl;

	//PRIORITY QUEUE

	std::priority_queue<int>pqueue1;
	pqueue1.push(19);
	pqueue1.push(20);
	pqueue1.push(16);
	pqueue1.push(18);
	pqueue1.push(17);
	std::priority_queue<int>pqueue2(pqueue1);
	int auxSize = pqueue1.size();
	for (int i = 0; i < auxSize; i++) {
		std::cout << pqueue1.top() << " ";
		pqueue1.pop();
	}
	std::cout << std::endl;
	while (!pqueue2.empty()) {
		std::cout << pqueue2.top() << " ";
		pqueue2.pop();
	}
	std::cout << std::endl;

	//STACK

	std::stack<int>stack1({ 21,22,23,24,25 });
	std::stack<int>stack2(stack1);
	std::stack<int>aux;
	int auxSize2 = stack1.size();
	for (int i = 0; i < auxSize2; i++) {
		aux.push(stack1.top());
		stack1.pop();
	}
	for (int i = 0; i < auxSize2; i++) {
		std::cout << aux.top() << std::endl;
		aux.pop();
	}
	std::cout << std::endl;
	for (int i = 0; i < auxSize2; i++) {
		aux.push(stack2.top());
		stack2.pop();
	}
	while (!aux.empty()) {
		std::cout << aux.top() << std::endl;
		aux.pop();
	}
	std::cout << std::endl;

	//LIST

	std::list<int>list1({ 26,27,28,29,30 });
	std::list<int>list2(list1);
	std::list<int>list3;
	list3 = list1;
	std::list<int>list4;
	std::list<int>::iterator puntero;
	puntero = list4.begin();
	std::vector<int>vector4({ 26,27,28,29,30 });
	list4.insert(puntero, vector4.begin(), vector4.end());
	for (std::list<int>::iterator it = list4.begin(); it != list4.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	//FORWARD LIST

	std::forward_list<int>flist1({ 31,32,33,34,35 });
	std::forward_list<int>flist2(flist1);
	std::forward_list<int>flist3;
	flist3 = flist1;
	for (int i = 0; i < 5; i++) {
		std::cout << flist1.front() << " ";
		flist1.pop_front();
	}
	std::cout << std::endl;

	//MAP

	std::map<char, int>map1;
	map1['a'] = 36;
	map1['b'] = 37;
	map1['c'] = 38;
	map1['d'] = 39;
	map1['e'] = 40;
	std::map<char, int>map2(map1);
	std::map<char, int>map3(map1.begin(), map1.end());
	int tamañomap = map1.size();
	for (auto it = map1.begin(); it != map1.end(); it++) {
		std::cout << "Key is " << it->first << " and value is " << it->second << std::endl;
	}
	std::cout << std::endl;
	for (auto it = map1.rbegin(); it != map1.rend(); it++) {
		std::cout << "Key is " << it->first << " and value is " << it->second << std::endl;
	}
	std::cout << std::endl;

	//SET

	std::set<int>set1({ 41, 42, 43, 44, 45 });
	std::set<int>set2(set1);
	std::set<int>set3(set1.begin(), set1.end());
	for (auto it = set1.begin(); it != set1.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	for (auto it = set1.rbegin(); it != set1.rend(); it++) {
		std::cout << *it << " ";
	}
}