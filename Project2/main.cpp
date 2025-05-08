#include "header.h"

int main(int argc, char **argv)
{
	string input;
	int size;

	if (argc != 2)
	{
		cout<<"Introduceti numarul: ";
		cin>>input;
		size = validate_input(input);
		if(size == -1)
		{
			cout<<"Sirul introdus nu este un numar\n";
			return -1;
		}
		Numar nr(input);
		generate(&nr);
		nr.PrintLit();
	}
	else
	{
		ifstream file(argv[1]);
		if (!file.is_open()) {
			cout << "Error opening the file!";
			return 1;
		}
		getline(file, input);
		size = validate_input(input);
		if(size == -1)
		{
			cout<<"Sirul introdus nu este un numar\n";
			return -1;
		}
			
		Numar nr(input);
		generate(&nr);
		nr.PrintLit();
		file.close();
	}
	cout<<"\n";
	return 0;
}