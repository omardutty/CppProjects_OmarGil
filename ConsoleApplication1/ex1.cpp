#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<queue>

void main() {

	// Deque
	std::deque<float>prices(10,10.50);
	prices.pop_back();
	prices.push_back(32.43);
	prices.pop_front();
	std::deque<float>prices2(prices);
	prices2.push_front(5.64);
	prices2.push_front(20.31);
	std::deque<float>::iterator it = prices2.insert(prices2.begin() + 1, 10);

	for (it = prices.end(); it != prices.begin(); --it) {
		std::cout << *it;
	}
	std::cout << std::endl;
	for (it = prices2.begin(); it != prices.end(); ++it) {
		std::cout << *it;
	}
	std::cout << std::endl;

	//vector
	std::vector<float>prices3(10, 10.5);
	prices3.pop_back();
	prices3.push_back(32.43);
	prices3.erase(prices3.begin());
	std::vector<float>prices4(prices3);
	prices4.insert(prices4.begin(), 5.64);
	prices4.insert(prices4.begin(), 20.31);
	prices4.insert(prices4.begin() + 1, 10);

	//for(){}

	for (int i = 0; i < prices4.size(); i++) {
		std::cout << prices4[i];
	}
	std::cout << std::endl;
}