#include "header.h"

Numar::Numar(string numar)
{

	this->num = numar;
	this->size = numar.size();
	this->tier = this->size / 3;
}

Numar::~Numar ()
{
}

void Numar::SetZec(int unit, int zeci, int sute)
{
	this->zec.unit = unit;
	this->zec.zeci = zeci;
	this->zec.sute = sute;
}

void Numar::SetMie(int unit, int zeci, int sute)
{
	this->mie.unit = unit;
	this->mie.zeci = zeci;
	this->mie.sute = sute;
}

void Numar::SetMilion(int unit, int zeci, int sute)
{
	this->milion.unit = unit;
	this->milion.zeci = zeci;
	this->milion.sute = sute;
}

void Numar::SetMiliard(int unit, int zeci, int sute)
{
	this->miliard.unit = unit;
	this->miliard.zeci = zeci;
	this->miliard.sute = sute;
}

void Numar::SetTrilion(int unit, int zeci, int sute)
{
	this->trilion.unit = unit;
	this->trilion.zeci = zeci;
	this->trilion.sute = sute;
}

void Numar::SetCvadrilion(int unit, int zeci, int sute)
{
	this->cvadrilion.unit = unit;
	this->cvadrilion.zeci = zeci;
	this->cvadrilion.sute = sute;
}

void Numar::SetCvintilion(int unit, int zeci, int sute)
{
	this->cvintilion.unit = unit;
	this->cvintilion.zeci = zeci;
	this->cvintilion.sute = sute;
}

void Numar::SetSextilion(int unit, int zeci, int sute)
{
	this->sextilion.unit = unit;
	this->sextilion.zeci = zeci;
	this->sextilion.sute = sute;
}

void Numar::SetSeptilion(int unit, int zeci, int sute)
{
	this->septilion.unit = unit;
	this->septilion.zeci = zeci;
	this->septilion.sute = sute;
}

void Numar::SetOctilion(int unit, int zeci, int sute)
{
	this->octilion.unit = unit;
	this->octilion.zeci = zeci;
	this->octilion.sute = sute;
}

void Numar::SetNonilion(int unit, int zeci, int sute)
{
	this->nonilion.unit = unit;
	this->nonilion.zeci = zeci;
	this->nonilion.sute = sute;
}

void Numar::SetDecilion(int unit, int zeci, int sute)
{
	this->decilion.unit = unit;
	this->decilion.zeci = zeci;
	this->decilion.sute = sute;
}

int Numar::GetTier()
{
	return this->tier;
}

int Numar::GetSize()
{
	return this->size;
}

string Numar::GetNumber()
{
	return this->num;
}

void Numar::Print()
{
	cout<<this->decilion.sute<<this->decilion.zeci<<this->decilion.unit<<this->nonilion.sute<<this->nonilion.zeci<<this->nonilion.unit<<this->octilion.sute<<this->octilion.zeci<<this->octilion.unit<<this->septilion.sute<<this->septilion.zeci<<this->septilion.unit<<this->sextilion.sute<<this->sextilion.zeci<<this->sextilion.unit<<this->cvintilion.sute<<this->cvintilion.zeci<<this->cvintilion.unit<<this->cvadrilion.sute<<this->cvadrilion.zeci<<this->cvadrilion.unit<<this->trilion.sute<<this->trilion.zeci<<this->trilion.unit<<this->miliard.sute<<this->miliard.zeci<<this->miliard.unit<<this->milion.sute<<this->milion.zeci<<this->milion.unit<<this->mie.sute<<this->mie.zeci<<this->mie.unit<<this->zec.sute<<this->zec.zeci<<this->zec.unit;
}

void Numar::PrintLit()
{
	int state;
	int state_1;

	state = 0;
	state_1 = 0;
	if(this->decilion.sute != 0)
	{
		state = 1;
		print_nr(this->decilion.sute, 2);
		if (this->decilion.sute == 1)
			cout<<" suta";
		else
			cout<<" sute";
	}
	if(this->decilion.zeci != 0)
	{
		state = 1;
		if (this->decilion.zeci == 1)
		{
			cout<<" ";
			print_teen(this->decilion.unit);
			state_1 = 1;
		}
		else
		{
			cout<<" ";
			print_nr(this->decilion.zeci, 1);
		}
		if (state_1 != 1)
			cout<<" zeci";

	}
	if(this->decilion.unit != 0 && state_1 != 1)
	{
		if (state == 1)
			cout<<" si ";
		if (this->decilion.unit != 2)
			print_nr(this->decilion.unit, 0);
		else
			cout<<"doua";
		state = 1;
	}
	if(state == 1)
		cout<<" decilioane ";
	if(state == 2)
		cout<<" decilion ";
	
//Next
	state = 0;
	state_1 = 0;
	if(this->nonilion.sute != 0)
	{
		state = 1;
		print_nr(this->nonilion.sute, 2);
		if (this->nonilion.sute == 1)
			cout<<" suta";
		else
			cout<<" sute";
	}
	if(this->nonilion.zeci != 0)
	{
		state = 1;
		if (this->nonilion.zeci == 1)
		{
			cout<<" ";
			print_teen(this->nonilion.unit);
			state_1 = 1;
		}
		else
		{
			cout<<" ";
			print_nr(this->nonilion.zeci, 1);
		}
		if (state_1 != 1)
			cout<<" zeci";

	}
	if(this->nonilion.unit != 0 && state_1 != 1)
	{
		if (state == 1)
			cout<<" si ";
		if (this->nonilion.unit != 2)
			print_nr(this->nonilion.unit, 0);
		else
			cout<<"doua";
		state = 1;
	}
	if(state == 1)
		cout<<" nonilioane ";
	if(state == 2)
		cout<<" nonilion ";

//Next

	state = 0;
	state_1 = 0;
	if(this->octilion.sute != 0)
	{
		state = 1;
		print_nr(this->octilion.sute, 2);
		if (this->octilion.sute == 1)
			cout<<" suta";
		else
			cout<<" sute";
	}
	if(this->octilion.zeci != 0)
	{
		state = 1;
		if (this->octilion.zeci == 1)
		{
			cout<<" ";
			print_teen(this->octilion.unit);
			state_1 = 1;
		}
		else
		{
			cout<<" ";
			print_nr(this->octilion.zeci, 1);
		}
		if (state_1 != 1)
			cout<<" zeci";

	}
	if(this->octilion.unit != 0 && state_1 != 1)
	{
		if (state == 1)
			cout<<" si ";
		if (this->octilion.unit != 2)
			print_nr(this->octilion.unit, 0);
		else
			cout<<"doua";
		state = 1;
	}
	if(state == 1)
		cout<<" octilioane ";
	if(state == 2)
		cout<<" octilion ";

//Next

	state = 0;
	state_1 = 0;
	if(this->septilion.sute != 0)
	{
		state = 1;
		print_nr(this->septilion.sute, 2);
		if (this->septilion.sute == 1)
			cout<<" suta";
		else
			cout<<" sute";
	}
	if(this->septilion.zeci != 0)
	{
		state = 1;
		if (this->septilion.zeci == 1)
		{
			cout<<" ";
			print_teen(this->septilion.unit);
			state_1 = 1;
		}
		else
		{
			cout<<" ";
			print_nr(this->septilion.zeci, 1);
		}
		if (state_1 != 1)
			cout<<" zeci";

	}
	if(this->septilion.unit != 0 && state_1 != 1)
	{
		if (state == 1)
			cout<<" si ";
		if (this->septilion.unit != 2)
			print_nr(this->septilion.unit, 0);
		else
			cout<<"doua";
		state = 1;
	}
	if(state == 1)
		cout<<" septilioane ";
	if(state == 2)
		cout<<" septilion ";


//Next
	state = 0;
	state_1 = 0;
	if(this->sextilion.sute != 0)
	{
		state = 1;
		print_nr(this->sextilion.sute, 2);
		if (this->sextilion.sute == 1)
			cout<<" suta";
		else
			cout<<" sute";
	}
	if(this->sextilion.zeci != 0)
	{
		state = 1;
		if (this->sextilion.zeci == 1)
		{
			cout<<" ";
			print_teen(this->sextilion.unit);
			state_1 = 1;
		}
		else
		{
			cout<<" ";
			print_nr(this->sextilion.zeci, 1);
		}
		if (state_1 != 1)
			cout<<" zeci";
	}
	if(this->sextilion.unit != 0 && state_1 != 1)
	{
		if (state == 1)
			cout<<" si ";
		if (this->sextilion.unit != 2)
			print_nr(this->sextilion.unit, 0);
		else
			cout<<"doua";
		state = 1;
	}
	if(state == 1)
		cout<<" sextilioane ";
	if(state == 2)
		cout<<" sextilion ";

//Next
	state = 0;
	state_1 = 0;
	if(this->cvintilion.sute != 0)
	{
		state = 1;
		print_nr(this->cvintilion.sute, 2);
		if (this->cvintilion.sute == 1)
			cout<<" suta";
		else
			cout<<" sute";
	}
	if(this->cvintilion.zeci != 0)
	{
		state = 1;
		if (this->cvintilion.zeci == 1)
		{
			cout<<" ";
			print_teen(this->cvintilion.unit);
			state_1 = 1;
		}
		else
		{
			cout<<" ";
			print_nr(this->cvintilion.zeci, 1);
		}
		if (state_1 != 1)
			cout<<" zeci";

	}
	if(this->cvintilion.unit != 0 && state_1 != 1)
	{
		if (state == 1)
			cout<<" si ";
		if (this->cvintilion.unit != 2)
			print_nr(this->cvintilion.unit, 0);
		else
			cout<<"doua";
		state = 1;
	}
	if(state == 1)
		cout<<" cvintilioane ";
	if(state == 2)
		cout<<" cvintilion ";

//Next
	state = 0;
	state_1 = 0;
	if(this->cvadrilion.sute != 0)
	{
		state = 1;
		print_nr(this->cvadrilion.sute, 2);
		if (this->cvadrilion.sute == 1)
			cout<<" suta";
		else
			cout<<" sute";
	}
	if(this->cvadrilion.zeci != 0)
	{
		state = 1;
		if (this->cvadrilion.zeci == 1)
		{
			cout<<" ";
			print_teen(this->cvadrilion.unit);
			state_1 = 1;
		}
		else
		{
			cout<<" ";
			print_nr(this->cvadrilion.zeci, 1);
		}
		if (state_1 != 1)
			cout<<" zeci";

	}
	if(this->cvadrilion.unit != 0 && state_1 != 1)
	{
		if (state == 1)
			cout<<" si ";
		if (this->cvadrilion.unit != 2)
			print_nr(this->cvadrilion.unit, 0);
		else
			cout<<"doua";
		state = 1;
	}
	if(state == 1)
		cout<<" cvadrilioane ";
	if(state == 2)
		cout<<" cvadrilion ";

//Next
	state = 0;
	state_1 = 0;
	if(this->trilion.sute != 0)
	{
		state = 1;
		print_nr(this->trilion.sute, 2);
		if (this->trilion.sute == 1)
			cout<<" suta";
		else
			cout<<" sute";
	}
	if(this->trilion.zeci != 0)
	{
		state = 1;
		if (this->trilion.zeci == 1)
		{
			cout<<" ";
			print_teen(this->trilion.unit);
			state_1 = 1;
		}
		else
		{
			cout<<" ";
			print_nr(this->trilion.zeci, 1);
		}
		if (state_1 != 1)
			cout<<" zeci";

	}
	if(this->trilion.unit != 0 && state_1 != 1)
	{
		if (state == 1)
			cout<<" si ";
		if (this->trilion.unit != 2)
			print_nr(this->trilion.unit, 0);
		else
			cout<<"doua";
		state = 1;
	}
	if(state == 1)
		cout<<" trilioane ";
	if(state == 2)
		cout<<" trilion ";

//Next
	state = 0;
	state_1 = 0;
	if(this->miliard.sute != 0)
	{
		state = 1;
		print_nr(this->miliard.sute, 2);
		if (this->miliard.sute == 1)
			cout<<" suta";
		else
			cout<<" sute";
	}
	if(this->miliard.zeci != 0)
	{
		state = 1;
		if (this->miliard.zeci == 1)
		{
			cout<<" ";
			print_teen(this->miliard.unit);
			state_1 = 1;
		}
		else
		{
			cout<<" ";
			print_nr(this->miliard.zeci, 1);
		}
		if (state_1 != 1)
			cout<<" zeci";

	}
	if(this->miliard.unit != 0 && state_1 != 1)
	{
		if (state == 1)
			cout<<" si ";
		if (this->miliard.unit != 2)
			print_nr(this->miliard.unit, 0);
		else
			cout<<"doua";
		state = 1;
	}
	if(state == 1)
		cout<<" miliarde ";
	if(state == 2)
		cout<<" miliard ";

//Next
	state = 0;
	state_1 = 0;
	if(this->milion.sute != 0)
	{
		state = 1;
		print_nr(this->milion.sute, 2);
		if (this->milion.sute == 1)
			cout<<" suta";
		else
			cout<<" sute";
	}
	if(this->milion.zeci != 0)
	{
		state = 1;
		if (this->milion.zeci == 1)
		{
			cout<<" ";
			print_teen(this->milion.unit);
			state_1 = 1;
		}
		else
		{
			cout<<" ";
			print_nr(this->milion.zeci, 1);
		}
		if (state_1 != 1)
			cout<<" zeci";

	}
	if(this->milion.unit != 0 && state_1 != 1)
	{
		if (state == 1)
			cout<<" si ";
		if (this->milion.unit != 2)
			print_nr(this->milion.unit, 0);
		else
			cout<<"doua";
		state = 1;
	}
	if(state == 1)
		cout<<" milioane ";
	if(state == 2)
		cout<<" milion ";

//Next
	state = 0;
	state_1 = 0;
	if(this->mie.sute != 0)
	{
		state = 1;
		print_nr(this->mie.sute, 2);
		if (this->mie.sute == 1)
			cout<<" suta";
		else
			cout<<" sute";
	}
	if(this->mie.zeci != 0)
	{
		state = 1;
		if (this->mie.zeci == 1)
		{
			cout<<" ";
			print_teen(this->mie.unit);
			state_1 = 1;
		}
		else
		{
			cout<<" ";
			print_nr(this->mie.zeci, 1);
		}
		if (state_1 != 1)
			cout<<" zeci";

	}
	if(this->mie.unit != 0 && state_1 != 1)
	{
		if (state == 1)
			cout<<" si ";
		if (this->mie.unit != 2)
			print_nr(this->mie.unit, 0);
		else
			cout<<"doua";
		state = 1;
	}
	if(state == 1)
		cout<<" mii ";
	if(state == 2)
		cout<<" mie ";

//Next
	state = 0;
	state_1 = 0;
	if(this->zec.sute != 0)
	{
		state = 1;
		print_nr(this->zec.sute, 2);
		if (this->zec.sute == 1)
			cout<<" suta";
		else
			cout<<" sute";
	}
	if(this->zec.zeci != 0)
	{
		state = 1;
		if (this->zec.zeci == 1)
		{
			cout<<" ";
			print_teen(this->zec.unit);
			state_1 = 1;
		}
		else
		{
			cout<<" ";
			print_nr(this->zec.zeci, 1);
		}
		if (state_1 != 1)
			cout<<" zeci";

	}
	if(this->zec.unit != 0 && state_1 != 1)
	{
		if (state == 1)
			cout<<" si";
		cout<<" ";
		print_nr(this->zec.unit, 0);
		state = 1;
	}
}