enum class EnemyType { ZOMBIE, VAMPIRE, GHOST, WITCH, MAX };

struct Enemy {

	EnemyType tipo;
	std::string name;
	int health;

};