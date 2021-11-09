# include <iostream>
# include <iomanip>

typedef struct	Data {
	int	elm;
}				Data;

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data		*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}


int main()
{
	Data data;

	data.elm = 6;
	std::cout << "Original Address\t\t" << &data << " elm = " << data.elm << std::endl;

	Data *data2 = deserialize(serialize(&data));
	std::cout << "Adress after Serialization\t" << data2 << " elm = " << data2->elm << std::endl; 

	return 0;
}
