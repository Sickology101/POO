#include "header.h"

void print_1(int s){
	switch(s){
		case 0:
			cout<<"unu";
			break;
		case 1:
			cout<<"un";
			break;
		case 2: 
			cout<<"o";
			break;
	}
}

void print_2(int s){
	switch(s){
		case 0:
			cout<<"doi";
			break;
		case 1:
			cout<<"doua";
			break;
	}
}

void print_3(){
	cout<<"trei";
}

void print_4(){
	cout<<"patru";
}

void print_5(){
	cout<<"cinci";
}

void print_6(){
	cout<<"sase";
}

void print_7(){
	cout<<"sapte";
}

void print_8(){
	cout<<"opt";
}

void print_9(){
	cout<<"noua";
}

void print_teen(int nr)
{
	string str = "sprezece";

	switch (nr)
	{
	case 0:
		cout<<"zece";
		break;
	case 1:
		cout<<"unsprezece";
		break;
	case 2:
		print_2(0);
		cout<<str;
		break;
	case 3:
		print_3();
		cout<<str;
		break;
	case 4:
		cout<<"pai"<<str;
		break;
	case 5:
		print_5();
		cout<<str;
		break;
	case 6:
		cout<<"sai"<<str;
		break;
	case 7:
		print_7();
		cout<<str;
		break;
	case 8:
		print_8();
		cout<<str;
		break;
	case 9:
		print_9();
		cout<<str;
		break;
	}
}

void print_nr(int nr, int pos)
{
	switch(nr){
		case 1:
			if (pos == 0)
				print_1(0);
			else if (pos == 1)
				print_1(1);
			else
				print_1(2);
			break;
		case 2:
			if (pos == 0)
				print_2(0);
			else
				print_2(1);
			break;
		case 3:
			print_3();
			break;
		case 4:
			print_4();
			break;
		case 5:
			print_5();
			break;
		case 6:
			print_6();
			break;
		case 7:
			print_7();
			break;
		case 8:
			print_8();
			break;
		case 9:
			print_9();
			break;
	}
}