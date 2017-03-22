#include <iostream>
#include <string>
#include <ctime>
#include <conio.h>

class Player;
class CoinManager;


class Map {
public:
	char **md;
	int row = 5 * diff;
	int col = 5 * diff * 2;

	void mapGenerator(char **m_data, int rows, int columns) {
		md = new char*[row];
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < row; i++) {
				md[i] = new char[col];
				md[i][j] = '.';
			}
		}
	}

	void fillField() {

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				std::cout << md[i][j];
			}
			std::cout << '\n';
		}
	}
	
	void changeSymbol(int row, int col, char sym) {
		md[row][col] = sym;
	}

	Map(int diff) { 
		col= rand()*5 * diff;
		row; 
		mapGenerator; 
		fillField; 
	}

};

enum class Key // represents each key that the player can use
{
	NONE, W, A, S, D, ENTER, ESC
};

class Player {
public:
	char symbolplayer;
	int posicionX;
	int posicionY;

	static Key getKey() // returns the key that has been pressed
	{
		if (_kbhit())
		{
			switch (_getch())
			{
			case 87: case 119:
				return Key::W; // w and W
			case 65: case 97:
				return Key::A; // a and A
			case 83: case 115:
				return Key::S; // s and S
			case 68: case 100:
				return Key::D; // d and D
			case 13:
				return Key::ENTER; // carriage return
			case 27:
				return Key::ESC; // escape
			}
		}
		return Key::NONE;
	}
};


class CoinManager {
public:
	char symbolCoin;
	int numberofCoins;
	int numcoinsrecogidas;
	void coinGenerator(int rows, int columns) {
		int minimo = (rows*columns)*0.03;
		int max = (rows*columns)*0.13;
		numberofCoins = (rand() % (max - minimo)) + minimo;
	}

	Map &mapa;
	CoinManager(Map &map) : {
		mapa.changeSymbol = map.changeSymbol;
	}

	void coinPlacer() {
		for(int i=0;i<rows;)
	}

};

void main() {
	int diff;
}
