#include <iostream>
#include <iostream>
#include <string>
#include "food_and_drink.h"

using namespace std;

int main() {
	string NAME, EAT_DRINK, ITEM;	/*NAME - INPUT from USER, EAT_DRINK - INPUT by USER, ITEM - For FUNCTION Random from GetRandom### functions*/
	int NUMBER;						/*NUMBER - INPUT by USER*/
	cout << "Input User Name:" << endl;	/*INPUT NAME*/
	cin >> NAME;						/*INPUT NAME*/
	cout << "Eat/Drink:" << endl;		/*INPUT EAT_DRINK*/
	cin >> EAT_DRINK;					/*INPUT EAT_DRINK*/
	if (EAT_DRINK == "eat" || EAT_DRINK == "Eat" || EAT_DRINK == "EAT") { /*Check EAT_DRINK input and get a random food item*/
		EAT_DRINK = "eat"; /*Spell correct	*Variable used in final output*/
		ITEM = GetRandomFoodItem();
	}
	else {
		if (EAT_DRINK == "drink" || EAT_DRINK == "Drink" || EAT_DRINK == "DRINK") { /*Check EAT_DRINK input and get a random food item*/
			EAT_DRINK = "drink"; /*Spell correct*/
			ITEM = GetRandomDrinkItem();
		}
		else { /*Other/Incorrect inputs*/
			cout << "Wrong Check Spelling\nTerminating Program" << endl;
			return 0;
		}
	}
	cout << "Number of items:" << endl;	/*INPUT NUMBER*/
	cin >> NUMBER;						/*INPUT NUMBER*/
	cout << NAME << " " << EAT_DRINK << "s " << NUMBER << " " << ITEM << endl;	/*Final+Requested OUTPUT*/
	return 0;
}