#include "parcare.h"

void parse_out(string input)
{
	if(input[1] == 'B' && input[2] > '0' && input[2] < '9')
	{
		cout<<"Bucuresti\n";
	}
	else if (check_city(input))
		cout<<"Valid\n";
	else
		cout<<"Invalid\n";
}