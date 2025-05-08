#include "header.h"


// Valideaza sirul introdus si returneaza dimensiunea acestuia (-1 in caz ca sirul nu este un numar)
int validate_input(string input)
{
	int index;
	int size;

	size = input.size();

	index = 0;

	while (index < size)
	{
		if (input[index] < 48 || input[index] > 57)
			return -1;
		index++;
	}
	return size;
}

int my_atoi(string input)
{
	int size;
	int nr;
	int index;

	size = input.size();
	index = 1;
	nr = input[0] - '0';
	while(index < size)
	{
		nr = nr * 10;
		nr = nr + (input[index] - '0');
		index++;
	}
	return nr;
}

void get_num(Numar nr, decimals *data, int pos)
{
	data->unit = nr.GetNumber()[pos] - '0';
	pos--;
	if(pos>=0)
		data->zeci = nr.GetNumber()[pos] - '0';
	else
		data->zeci = 0;
	pos--;
	if(pos>=0)
		data->sute = nr.GetNumber()[pos] - '0';
	else
		data->sute = 0;
}