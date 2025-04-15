#ifndef PARCARE_H
# define PARCARE_H

#include <iostream>
#include <string>

using namespace std;

# define STD_PRICE 1
#define LOC_TOT 200

class LocParcare{
	public:
		int valid;
		int id;
};

class Masina {
	public:
		string city;
		int nr;
		string letters;
		int id;
		string nr_inmat;
		LocParcare loc;
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
		vector<LocParcare> loc_parcare;
};



Masina parse_in(string input, Parcare *parcare);
void parse_out(string input, Parcare *parcare);
int check_city(string city);
Masina parse_buc(string input, Parcare *parcare);
Masina parse_rest(string input, Parcare *parcare);

#endif