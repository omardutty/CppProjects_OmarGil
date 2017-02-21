#include<iostream>
#include<string>
#include<ctime>
#include "stdafx.h"


enum class EnemyType { ZOMBIE, VAMPIRE, GHOST, WITCH,MAX };

struct Enemy {

	EnemyType type;
	std::string name;
	int health;
	std::string getEnemyTypeString() {

		switch (type) {
		case EnemyType::ZOMBIE: return "zombie";
		case EnemyType::VAMPIRE: return "vampire";
		case EnemyType::GHOST: return "ghost";
		case EnemyType::WITCH: return "witch";
		default: return "";
		}
	}
};

bool operator==(const Enemy &a,const Enemy &b) {

	/*bool igual{ false };
	if ((a.type == b.type) && (a.name == b.name))
	{
		igual = true;
	}
	return igual;*/
	return  a.type == b.type && a.name == b.name; //És més eficient
}

Enemy CreateRandomEnemy() {
	const int MAX_LIFE{ 5000 };
	const std::string NAMES[]{ "Ambrosio","Boca_Chancla","Carmen_de_Mairena","Dimitri","Eufrasio","Frienzoned","Game_Over" };
	return Enemy{ 
		static_cast<EnemyType>(rand() % static_cast<int>(EnemyType::MAX)),
		NAMES[rand()%(sizeof std::string)],
		rand()%MAX_LIFE 
	};
}

void main()
{
	srand(static_cast<unsigned>(time(nullptr)));
	const int MAX_ENEMIES{ 5 };
	Enemy enemies[MAX_ENEMIES];
	
	{
		int i{ 0 };
		while (i < MAX_ENEMIES) {
			enemies[i] = CreateRandomEnemy();
			int j{ i - 1 };
			while (j >= 0) {
				if (enemies[i] == enemies[j]) {
					--i;
					break;
				};
				j--;
			};
			++i;
		}
	}
	/*for (int i = 0; i < MAX_ENEMIES; i++) {
		std::cout << (i + 1) << ")" << std::endl;
		std::cout << "Name:" << enemies[i].name << std::endl;
		std::cout << "Type:" << enemies[i].getEnemyTypeString << std::endl;
		std::cout << "Health:" << enemies[i].health << std::endl;
	}*/
	for (auto &enemy : enemies) {
		std::cout << enemy.name << "is a " << enemy.getEnemyTypeString() << "whose life is " << enemy.health << std::endl;
	}
}