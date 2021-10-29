#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	Character madara("Madara");
	Character hachirama("Hachirama");

	madara.equip(new Ice());
	madara.equip(new Ice());
	madara.equip(new Ice());
	madara.equip(new Cure());
	madara.equip(new Ice());

	hachirama.equip(new Ice());
	hachirama.equip(new Cure());
	hachirama.equip(new Cure());
	hachirama.equip(new Ice());
	hachirama.equip(new Cure());

	madara.use(2, hachirama);
	hachirama.use(1, hachirama);
	hachirama.use(0, madara);
	hachirama.use(5, madara);
	madara.use(3, madara);
	hachirama.use(0, madara);
	hachirama.use(0, madara);
	madara.unequip(1);
	madara.use(3, hachirama);
	madara.use(2, hachirama);

	return (0);
}