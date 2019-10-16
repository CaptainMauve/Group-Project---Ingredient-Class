#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "Recipe.h"
using namespace std;

//Class declaration
class Drink
{
private:
	string name;
	Recipe rec;
	string alc_cont;
	//visit num_vis;
	//Picture pic;

public:
	Drink();
	~Drink();
	Drink(string drinkName, Recipe recip, string content);
	//int calculate_alcohol();
	string getName();
	void setName(string drinkName);
	void displayDrink();
};

//(Alc content * Liquor Volume) / Drink Volume
//0 = None, 1-25 = Light, 26-50 Medium, 50+ = Heavy
