#ifndef PARCARE_H
# define PARCARE_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

typedef	struct{
	int unit;
	int zeci;
	int sute;
}	decimals;

class Numar{
	private:
		decimals zec;
		decimals mie;
		decimals milion;
		decimals miliard;
		decimals trilion;
		decimals cvadrilion;
		decimals cvintilion;
		decimals sextilion;
		decimals septilion;
		decimals octilion;
		decimals nonilion;
		decimals decilion;
		int tier;
		string num;
		int size;
	public:
		Numar(string num);
		~Numar();

		void SetZec(int unit, int zeci, int mii);
		void SetMie(int unit, int zeci, int mii);
		void SetMilion(int unit, int zeci, int mii);
		void SetMiliard(int unit, int zeci, int mii);
		void SetTrilion(int unit, int zeci, int mii);
		void SetCvadrilion(int unit, int zeci, int mii);
		void SetCvintilion(int unit, int zeci, int mii);
		void SetSextilion(int unit, int zeci, int mii);
		void SetSeptilion(int unit, int zeci, int mii);
		void SetOctilion(int unit, int zeci, int mii);
		void SetNonilion(int unit, int zeci, int mii);
		void SetDecilion(int unit, int zeci, int mii);
		int GetTier();
		int GetSize();
		string GetNumber();
		void Print();
		void PrintLit();
};

int validate_input(string input);
void generate(Numar *nr);
int my_atoi(string input);
void get_num(Numar nr, decimals *data, int pos);
void print_nr(int nr, int pos);
void print_teen(int nr);

#endif