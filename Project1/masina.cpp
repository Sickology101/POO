#include <iostream>
#include <string>

using namespace std;

class Masina {
	public:
		string city;
		int nr;
		string letters;
		int id;
		Masina();
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