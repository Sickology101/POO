#include "parcare.h"

float PRET;

void initialize_parcare(loc *parcare)
{
	int index;
	
	index = 0;
	while (index < LOC_TOT)
	{
		parcare[index].id = index;
		parcare->valid = 1;
		index++;
	}
}

int main()
{
	string input;
	vector<Masina> cars;
	loc parcare[LOC_TOT];

	string instructiuni = "Instructiuni:\n - Folositi \"<\" urmat de numarul de inmatriculare pentru a il inregistra ex: \"<BC12ABC\"\n - Folositi \">\" urmat de numarul de inmatriculare pentru a il elimina ex: \">BC12ABC\"\n - Folositi \"X\" pentru a iesi din program\n";
	initialize_parcare(parcare);
	cout<<instructiuni;

	cin>>input;

	while(input[0] != 'x' && input[0] != 'X')
	{
		if (input.size() == 8 || input.size() == 7) 
		{
			if (input[0] == '<')
				cars.push_back(parse_in(input, parcare));
			else if (input[0] == '>')
				parse_out(input);
		}
		else
			cout<<"Nr inmatriculare invalid\n";
		cin>>input;
	}
}