#include<string>
#include<vector>
#include<map>
#include<iostream>

struct Player {
	std::string name;
	int points;
};


void main() {
	Player jugador;
	int puntuacion = jugador.points;
	std::vector<int> rankingVector(4);
	std::map<int, Player> rankingMap;
	rankingMap[20000] = { "Alpi",20000 };
	rankingMap[500] = { "xxGreySoulxx",500 };
	rankingMap[1000000] = { "Omardutty",1000000 };
	rankingMap[53200] = { "Nigger",53200 };

	std::cout << "Write your name: ";
	std::cin >> jugador.name;
	std::cout << std::endl << "Write your points: ";
	std::cin >> jugador.points;
	std::cout << std::endl << "This is the ranking:" << std::endl;

	rankingMap[jugador.points] = { jugador.name,jugador.points };

	for (auto i = rankingMap.begin(); i != rankingMap.end(); ++i) {
		std::cout << rankingMap[i].name << " " << rankingMap[i]<< std::endl;
	}
}