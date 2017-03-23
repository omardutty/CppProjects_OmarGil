#include <iostream>
#include <string>
#include <ctime>
#include <conio.h>

class Player;
class CoinManager;


#include <iostream>
#include <string>
#include <ctime>
#include <conio.h>
#include<time.h>

class Map {
public:
	char **md;
	int row;
	int col;

	void mapGenerator() {
		md = new char*[row];
		for (int i = 0; i < row; i++) {
			md[i] = new char[col];
			for (int j = 0; j < col; j++) {
				md[i][j] = '.';
			}
		}
	}

	void printField() {
		char print;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				print = md[i][j];
				std::cout << print;
			}
			std::cout << std::endl;
		}
	}

	void changeSymbol(int row, int col, char sym) {
		md[row][col] = sym;
	}

	Map(int diff) {
		row = ((rand() % (10 * diff - 5 * diff)) + 5 * diff);
		col = ((rand() % (10 * diff - 5 * diff)) + 5 * diff);
		mapGenerator();
		printField();
	}
private:

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
	CoinManager::CoinManager(Map &map) : mapa(map) {
		mapa.changeSymbol = map.changeSymbol;
	};

	void coinGenerator(int rows, int columns) {

		int monedaspuestas = 0;
		bool hascoin;
		int posX;
		int posY;

		int minimo = (rows*columns)*0.03;
		int max = (rows*columns)*0.13;
		numberofCoins = (rand() % (max - minimo)) + minimo;

		do
		{
			posX = ;
			posY = ;

		} while (monedaspuestas < numberofCoins);
	}
};

void main() {
	srand(static_cast<unsigned>(time(nullptr)));
	int diff;
}
