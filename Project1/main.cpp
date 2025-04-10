#include "parcare.h"

float PRET;

LocParcare add_loc()
{
	LocParcare loc;

	loc.valid = 1;

	return loc;
}

void initialize_parcare(Parcare *parcare)
{
	int index;
	
	index = 0;
	while (index < LOC_TOT)
	{
		(*parcare).loc_parcare.push_back(add_loc());
		index++;
	}
}

void print_parcare(Parcare parcare)
{
	int index;

	index = 0;
	while(parcare.masina[index].city != "")
	{
		cout<<parcare.masina[index].id<<" -> "<<parcare.masina[index].nr_inmat<<"\n";
		index++;
	}
}

int main()
{
	string input;
	Parcare parcare;
	string instructiuni = "Instructiuni:\n - Folositi \"<\" urmat de numarul de inmatriculare pentru a il inregistra ex: \"<BC12ABC\"\n - Folositi \">\" urmat de numarul de inmatriculare pentru a il elimina ex: \">BC12ABC\"\n - Folositi \"X\" pentru a iesi din program\n";
	
	initialize_parcare(&parcare);
	cout<<instructiuni;

	cin>>input;

	while(input[0] != 'x' && input[0] != 'X')
	{
		if (input.size() == 8 || input.size() == 7) 
		{
			if (input[0] == '<')
				parcare.masina.push_back(parse_in(input, &parcare));
			else if (input[0] == '>')
				parse_out(input, &parcare);
		}
		else
			cout<<"Nr inmatriculare invalid\n";
		print_parcare(parcare);
		cin>>input;
	}
}