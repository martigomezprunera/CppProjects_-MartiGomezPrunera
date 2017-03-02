#include <iostream>
#include <stdio.h>
#include <string>
#include <ctime>

//ESTOY REALIZANDO PRUEBAS CON EL GITHUB

enum EnemyType{ZOMBIE, VAMPIRE, GHOST, WITCH , MAX};   //Todas las CONSTANTES en MAYUS

struct Enemy
{
	enum Enemytype type;
	std::string name;
	int health;

	std::string getEnemyTypeString()
	{
		switch (type)			//En caso que nos toque un tipo de enemigo mostraremos por pantalla una u otra cosa
		{
			case EnemyType::ZOMBIE:		return "zombie";
			case EnemyType::VAMPIRE:	return "vampire";
			case EnemyType::GHOST:		return "ghost";
			case EnemyType::WITCH:		return "witch";
			default: return "";
		}
	}
};

//OPERADOR OVERLOADzzzz
bool operator==(const Enemy &n1, const Enemy &n2)  //Ponemos "const" ya que es una constante y el "&" para pasar la variable por referencia. "ANOTHER LEVEL"
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
	srand(static_cast<unsigned>(time(nullptr)));   //NUMERO RANDOM relacionado con el TIEMPO
	const int MAX_ENEMIES{5};					   //CONSTANTES en C++
	Enemy enemies[MAX_ENEMIES];
}