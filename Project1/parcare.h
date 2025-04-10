#ifndef PARCARE_H
# define PARCARE_H

#include <iostream>
#include <string>

using namespace std;

# define STD_PRICE 1
#define LOC_TOT 200

typedef struct
{
	int id;
	int valid;
}		loc;

class Masina {
	public:
		string city;
		int nr;
		string letters;
		int id;
		string nr_inmat;
		Masina(){

		};
		Masina(string oras, int nr, string letters, int id) {
			this->city = oras;
			this->letters = letters;
			this->nr = nr;
			this->id = id;
		}
	~Masina()
	{
	}
};

class Parcare{
	public:
		vector<Masina> masina;
};

Masina parse_in(string input, loc *parcare);
void parse_out(string input);
int check_city(string city);
Masina parse_buc(string input, loc *parcare);
Masina parse_rest(string input, loc *parcare);

#endif