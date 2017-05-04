#include<stack>
#include<iostream>
#include<queue>
#include<string>
//A
std::stack<int> superMerge(std::stack<int>a, std::stack<int>b) {
	std::stack<int>c(a);
	int tama�oB = b.size();
	for (int i = 0; i < tama�oB; i++) {
		c.emplace(b.top());
		b.pop();
	}
	std::priority_queue<int>a2;
	int tama�oC = c.size();
	for (int i = 0; i < tama�oC; i++) {
		a2.push(c.top());
		c.pop();
	}
	int tama�oA = a2.size();
	for (int i = 0; i < tama�oA; i++) {
		c.emplace(a2.top());
		a2.pop();
	}
	tama�oC = c.size();
	std::stack<int>reverse;
	for (int i = 0; i < tama�oC; i++) {
		reverse.push(c.top());
		c.pop();
	}
	//Comprovador
	for (int i = 0; i < tama�oC; i++) {
		std::cout << reverse.top() << std::endl;
		reverse.pop();//La devuelve vacia
	}
	return reverse;
}

//B
std::stack <std::string> putHat(std::stack <std::string>a, std::stack <std::string>b) {
	std::stack<std::string>helperA;
	int tama�oA = a.size();
	for (int i = 0; i < tama�oA; i++) {
		helperA.push(a.top());
		a.pop();
	}
	tama�oA = helperA.size();
	for (int i = 0; i < tama�oA; i++) {
		b.emplace(helperA.top());
		helperA.pop();
	}
	int tama�oB = b.size();
	for (int i = 0; i < tama�oB; i++) {
		std::cout << b.top() << std::endl;
		b.pop();
	}
	return b;
}

//C
std::queue<int> transformToQ(std::stack<int>a) {
	std::queue<int>result;
	int tama�o = a.size();
	for (int i = 0; i < tama�o; i++) {
		result.push(a.top());
		a.pop();
	}
	return result;
}

//E
/*bool balancedP(std::queue<char>a) {
	int abrir;
	int cerrar;
	int tama�o = a.size();
	for (int i = 0; i < tama�o; i++) {
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
	int tama�o = a.size();
	a.pop();
	std::queue<int>helper;
	helper.push(back);
	tama�o = a.size();
	std::stack<int>reverse;
	helper.pop();
	for (int i = 0; i < tama�o; i++) {
		reverse.push(a.front());
		a.pop();
	}
	for (int i = 0; i < tama�o; i++) {
		
		helper.push(reverse.top());
		reverse.pop();	
	}
	helper.push(top);
	tama�o = helper.size();
	for (int i = 0; i < tama�o; i++) {
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
