#include "parcare.h"

Masina parse_in(string input, loc *parcare)
{
	Masina masina;

	if(input[1] == 'B' && input[2] > '0' && input[2] < '9')
	{
		masina = parse_buc(input, parcare);
	}
	else if (check_city(input))
		cout<<"Valid\n";
	else
		cout<<"Invalid\n";
	return masina;
}

