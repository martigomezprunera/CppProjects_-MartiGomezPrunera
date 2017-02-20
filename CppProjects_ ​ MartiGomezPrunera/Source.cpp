#include <iostream>
#include <stdio.h>
#include <string>

//ESTOY REALIZANDO PRUEBAS CON EL GITHUB

enum EnemyType{zombie, vampire, ghost, witch};

struct Enemy
{
	enum Enemytype type;
	std::string name;
	int health;
};

bool operator == (Enemy n1, Enemy n2)
{
	bool resultado = false;

	if (n1.type == n2.type && n1.name == n2.name)
	{
			resultado = true;
	}

	return resultado;
};

void main()
{

}