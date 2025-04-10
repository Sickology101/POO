#include "parcare.h"

int	ft_strcmp(string s1, const char *s2)
{
	if (s1[1] == s2[0] && s1[2] == s2[1])
		return 1;
	return(0);
}

int check_city(string city)
{
	if(ft_strcmp(city, "AB") || ft_strcmp(city, "AR") || ft_strcmp(city, "AG") || ft_strcmp(city, "BC") || ft_strcmp(city, "BH")
	|| ft_strcmp(city, "BN") || ft_strcmp(city, "BT") || ft_strcmp(city, "BV") || ft_strcmp(city, "BR") || ft_strcmp(city, "BZ")
	|| ft_strcmp(city, "CS") || ft_strcmp(city, "CL") || ft_strcmp(city, "CJ") || ft_strcmp(city, "CT") || ft_strcmp(city, "CV")
	|| ft_strcmp(city, "DB") || ft_strcmp(city, "DJ") || ft_strcmp(city, "GL") || ft_strcmp(city, "GR") || ft_strcmp(city, "GJ")
	|| ft_strcmp(city, "HR") || ft_strcmp(city, "HD") || ft_strcmp(city, "IL") || ft_strcmp(city, "IS") || ft_strcmp(city, "IF")
	|| ft_strcmp(city, "MM") || ft_strcmp(city, "MH") || ft_strcmp(city, "MS") || ft_strcmp(city, "NT") || ft_strcmp(city, "OT")
	|| ft_strcmp(city, "PH") || ft_strcmp(city, "SM") || ft_strcmp(city, "SJ") || ft_strcmp(city, "SB") || ft_strcmp(city, "SV")
	|| ft_strcmp(city, "TR") || ft_strcmp(city, "TM") || ft_strcmp(city, "TL") || ft_strcmp(city, "VS") || ft_strcmp(city, "VL")
	|| ft_strcmp(city, "VN"))
		return 1;
	else
		return 0;
}

int get_nr(string input, int pos)
{
	int nr;

	if (pos == 2 )
	{
		nr = (input[pos] - '0') * 10 + (input[pos + 1] - '0');
		if (input[pos + 2] > '0' && input[pos + 2] < '9')
			nr = nr * 10 + (input[pos + 2] - '0');
	}
	else
		nr = (input[pos] - '0') * 10 + (input[pos + 1] - '0');
	return nr;
}

string get_letters(string input)
{
	string letters;

	if (input[4] > '0' && input[4] < '9')
		letters = input.substr(5,7);
	else
		letters = input.substr(4,6);
	return letters;
}

int find_valid(loc *parcare)
{
	int index;
	index = 0;
	while (index < LOC_TOT)
	{
		if(parcare[index].valid == 1)
		{
			parcare[index].valid = 0;
			return index;
		}
		index++;
	}
	return 0;
}

Masina parse_buc(string input, loc *parcare)
{
	int nr;
	string letters;
	int valid;

	nr = get_nr(input, 2);
	letters = get_letters(input);
	valid = find_valid(parcare);
	Masina masina( "B", nr, letters, valid);
	if (input.size() == 7)
		masina.nr_inmat = input.substr(1,6);
	else
		masina.nr_inmat = input.substr(1,7);
	return masina;
}

string get_city(string input)
{
	string city;

	city = input.substr(1,2);

	return city;
}

Masina parse_rest(string input, loc *parcare)
{
	int nr;
	string letters;
	int valid;
	string city;

	city = get_city(input);
	nr = get_nr(input, 3);
	letters = get_letters(input);
	valid = find_valid(parcare);
	Masina masina( city, nr, letters, valid);
	masina.nr_inmat = input.substr(1,7);
	return masina;
}