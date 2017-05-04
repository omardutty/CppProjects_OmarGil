#include<stack>
#include<iostream>
#include<queue>
#include<string>
//A
std::stack<int> superMerge(std::stack<int>a, std::stack<int>b) {
	std::stack<int>c(a);
	int tamañoB = b.size();
	for (int i = 0; i < tamañoB; i++) {
		c.emplace(b.top());
		b.pop();
	}
	std::priority_queue<int>a2;
	int tamañoC = c.size();
	for (int i = 0; i < tamañoC; i++) {
		a2.push(c.top());
		c.pop();
	}
	int tamañoA = a2.size();
	for (int i = 0; i < tamañoA; i++) {
		c.emplace(a2.top());
		a2.pop();
	}
	tamañoC = c.size();
	std::stack<int>reverse;
	for (int i = 0; i < tamañoC; i++) {
		reverse.push(c.top());
		c.pop();
	}
	//Comprovador
	for (int i = 0; i < tamañoC; i++) {
		std::cout << reverse.top() << std::endl;
		reverse.pop();//La devuelve vacia
	}
	return reverse;
}

//B
std::stack <std::string> putHat(std::stack <std::string>a, std::stack <std::string>b) {
	std::stack<std::string>helperA;
	int tamañoA = a.size();
	for (int i = 0; i < tamañoA; i++) {
		helperA.push(a.top());
		a.pop();
	}
	tamañoA = helperA.size();
	for (int i = 0; i < tamañoA; i++) {
		b.emplace(helperA.top());
		helperA.pop();
	}
	int tamañoB = b.size();
	for (int i = 0; i < tamañoB; i++) {
		std::cout << b.top() << std::endl;
		b.pop();
	}
	return b;
}

//C
std::queue<int> transformToQ(std::stack<int>a) {
	std::queue<int>result;
	int tamaño = a.size();
	for (int i = 0; i < tamaño; i++) {
		result.push(a.top());
		a.pop();
	}
	return result;
}

//E
/*bool balancedP(std::queue<char>a) {
	int abrir;
	int cerrar;
	int tamaño = a.size();
	for (int i = 0; i < tamaño; i++) {
		if (a.front() == '(') {
			abrir++;
		}
		else if (a.front == ')') {
			cerrar++;
		}
		a.pop();
	}
	if (abrir == cerrar) { return true; }
	else { return false; }
}*/

//F
std::queue<int> change(std::queue<int>a) {
	int top = a.front();
	int back = a.back();
	int tamaño = a.size();
	a.pop();
	std::queue<int>helper;
	helper.push(back);
	tamaño = a.size();
	std::stack<int>reverse;
	helper.pop();
	for (int i = 0; i < tamaño; i++) {
		reverse.push(a.front());
		a.pop();
	}
	for (int i = 0; i < tamaño; i++) {
		
		helper.push(reverse.top());
		reverse.pop();	
	}
	helper.push(top);
	tamaño = helper.size();
	for (int i = 0; i < tamaño; i++) {
		std::cout << helper.front() << std::endl;
		helper.pop();
	}
	return helper;
}

std::stack<int>a;
std::stack<int>b;
std::stack<std::string>c;
std::stack<std::string>d;
std::queue<int>e({1,2,3,4,5});

void main() {

	a.emplace(3);
	a.emplace(5);
	a.emplace(7);
	a.emplace(9);

	b.emplace(2);
	b.emplace(4);
	b.emplace(6);
	b.emplace(8);
	b.emplace(10);

	//superMerge(a, b);
	//transformToQ(a);

	c.emplace("ghi");
	c.emplace("def");
	c.emplace("abc");
	
	d.emplace("mno");
	d.emplace("jkl");

	//putHat(c, d);
	change(e);

}
