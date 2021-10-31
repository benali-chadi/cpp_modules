#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	Character madara("Madara");
	Character hachirama("Hachirama");
	MateriaSource sources;

	sources.learnMateria(new Ice());
	sources.learnMateria(new Ice());
	sources.learnMateria(new Cure());
	sources.learnMateria(new Cure());
	sources.learnMateria(new Cure());

	madara.equip(sources.createMateria("ice"));
	madara.equip(sources.createMateria("ice"));
	madara.equip(sources.createMateria("ice"));
	madara.equip(sources.createMateria("cure"));
	madara.equip(sources.createMateria("ice"));

	std::cout << std::endl;

	hachirama.equip(sources.createMateria("ice"));
	hachirama.equip(sources.createMateria("cure"));
	hachirama.equip(sources.createMateria("cure"));
	hachirama.equip(sources.createMateria("ice"));
	hachirama.equip(sources.createMateria("cure"));

	std::cout << std::endl;

	madara.use(2, hachirama);
	hachirama.use(1, hachirama);
	hachirama.use(0, madara);
	hachirama.use(5, madara);
	madara.use(2, madara);
	hachirama.use(0, madara);
	hachirama.use(0, madara);
	madara.unequip(1);
	madara.use(2, hachirama);
	madara.use(1, hachirama);

	std::cout << std::endl;
	return (0);
}