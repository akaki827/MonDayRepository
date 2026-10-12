#include<iostream>
#include"Character.h"
using namespace std;
int main()
{
	Character character("レベル：140　極限ジンオウガ");
	cout << character.GetName() << endl;

	character.Attack();

	return 0;
}