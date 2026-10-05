#include<iostream>
#include<string>

using namespace std;

//基底クラス（動物）

class Animal
{
protected:
	string eyes;
	string foot;

public:
	void bark()
	{
		cout << "動物は泣きます\n";
	}

private:
	string name;
};

//派生クラス
class Dog :public Animal
{
public:
	Dog(string Name,string Eyes,string Foot)
	{
		dogName = Name;
		eyes = Eyes;
		foot = Foot;
	}
	void bark()
	{
		cout << "にゃー" << endl;
	}
	void ShowName()
	{
		cout << "名前:" << dogName << endl;
		cout << "目の色:" << eyes << endl;
		cout << "足の色:" << foot << endl;
	}
private:
	string dogName;
};

int main(void)
{
	cout << "猫の名前を入力しなさい" << endl;
	string name;
	string eyesColor;
	string footColor;
	cin >> name;
	cout << "猫の目の色を入力しなさい" << endl;
	cin >> eyesColor;
	cout << "猫の足の色を入力しなさい" << endl;
	cin >> footColor;

	Dog mydog(name,eyesColor,footColor);
	mydog.ShowName();
	mydog.Animal::bark();
	mydog.bark();

	return 0;
}