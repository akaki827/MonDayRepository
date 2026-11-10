#include"Servant.h"
#include"Saber.h"
#include"Archer.h"
#include"Rider.h"

int main(void)
{
	Saber saber;
	Archer archer;
	Rider rider;

	saber.ShowProfile();
	saber.Attack();

	archer.ShowProfile();
	archer.Attack();

	rider.ShowProfile();
	rider.Attack();

	return 0;
}