#include "parcare.h"

int get_id(Parcare parcare, string input)
{
	int index;

	index = 0;

	while (parcare.masina[index].nr_inmat != "")
	{
		if (parcare.masina[index].nr_inmat == input)
			return index;
		index++;
	}
	return (-1);
}

void parse_out(string input, Parcare parcare)
{

	string nr_inmatriculare;
	int id;

	if (input.size() == 7)
	{
		nr_inmatriculare = input.substr(1,6);
		id = get_id(parcare, nr_inmatriculare);
		if (id == -1)
			cout<<"Masina nu a fost gasita\n";
		else
			//parcare.masina.erase(id);
	}
	else if (input.size() == 8)
	{
		nr_inmatriculare = input.substr(1,7);
	}
	else
		cout<<"Nr inmatriculare invalid\n";
}