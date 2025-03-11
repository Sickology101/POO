#include <iostream>
#include <string>

using namespace std;

class Student {
	private:
		string nume;
		int varsta;
		float medie;

	public:
	//Constructor cu var aux
		Student(string nume_student, int varsta_student, float medie_student) {
			nume = nume_student;
			varsta = varsta_student;
			medie = medie_student;
			cout<<"Constructorul a fost apelat pentru "<<nume<<endl;
		}
	//Constructor cu THIS
	/*
		Student(string nume, int varsta, float medie) {
			this -> nume = nume;
			this -> varsta = varsta;
			this -> medie = medie;
			cout<<"Constructorul a fost apelat pentru "<<nume<<endl;
		}
	*/
	~Student()
	{
		cout<<"Destructorul a fost apelat pentru: "<<nume<<endl;
	}
	void afisare_informatii()
	{
		cout<<"NUME: "<<nume<<"; Varsta: "<<varsta<<"; Medie: "<<medie<<";\n";
	}
	int get_medie()
	{
		return medie;
	}
	void get_mediev2()
	{
		cout<<nume<<" Medie: "<<medie<<endl;
	}
};

int main()
{
	int n;
	int i;
	int index;
	int temp;
	int temp_2;
	cout <<"Introduceti numarul de studenti ";cin>>n;
	Student* studenti[n];
	for(i= 0; i < n; i++)
	{
		string nume;
		int varsta;
		float medie;
		cout<<"Introdu numele studentului "<<i+1<<": ";cin>>nume;
		cout<<"Intriduceti varsta studentului "<<i+1<<": ";cin>>varsta;
		cout<<"Intriduceti media studentului "<<i+1<<": ";cin>>medie;
		studenti[i] = new Student(nume, varsta, medie);
	}

	//Afisarea studentilor
	for (i = 0; i<n;i++)
	{
		studenti[i]->afisare_informatii();
	}

	index = 1;
	temp = studenti[0]->get_medie();
	temp_2 = 0;
	while (index < n)
	{
		if (temp < studenti[index]->get_medie())
		{
			temp = studenti[index]->get_medie();
			temp_2 = index;
		}
		index++;
	}

	cout<<"Studentul cu cea mai mare medie este: ";
	studenti[temp_2]->get_mediev2();

	// Eliberam memoria programului
	for (i = 0; i<n; i++)
	{
		delete studenti[i];
	}
	return 0;
}