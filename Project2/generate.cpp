#include "header.h"



void generate(Numar *nr)
{
	int pos;
	decimals *data;

	pos = (*nr).GetSize() - 1;
	data = (decimals *)malloc(sizeof(decimals));
	get_num(*nr, data, pos);
	(*nr).SetZec(data->unit, data->zeci, data->sute);
	pos = pos - 3;
	if (pos >= 0)
	{
		get_num(*nr, data, pos);
		(*nr).SetMie(data->unit, data->zeci, data->sute);
	}
	else
		(*nr).SetMie(0, 0, 0);
	pos = pos - 3;
	if (pos >= 0)
	{
		get_num(*nr, data, pos);
		(*nr).SetMilion(data->unit, data->zeci, data->sute);
	}
	else
		(*nr).SetMilion(0, 0, 0);
	pos = pos - 3;
	if (pos >= 0)
	{
		get_num(*nr, data, pos);
		(*nr).SetMiliard(data->unit, data->zeci, data->sute);
	}
	else
		(*nr).SetMiliard(0, 0, 0);
	pos = pos - 3;
	if (pos >= 0)
	{
		get_num(*nr, data, pos);
		(*nr).SetTrilion(data->unit, data->zeci, data->sute);
	}
	else
		(*nr).SetTrilion(0, 0, 0);
	pos = pos - 3;
	if (pos >= 0)
	{
		get_num(*nr, data, pos);
		(*nr).SetCvadrilion(data->unit, data->zeci, data->sute);
	}
	else
		(*nr).SetCvadrilion(0, 0, 0);
	pos = pos - 3;
	if (pos >= 0)
	{
		get_num(*nr, data, pos);
		(*nr).SetCvintilion(data->unit, data->zeci, data->sute);
	}
	else
		(*nr).SetCvintilion(0, 0, 0);
	pos = pos - 3;
	if (pos >= 0)
	{
		get_num(*nr, data, pos);
		(*nr).SetSextilion(data->unit, data->zeci, data->sute);
	}
	else
		(*nr).SetSextilion(0, 0, 0);
	pos = pos - 3;
	if (pos >= 0)
	{
		get_num(*nr, data, pos);
		(*nr).SetSeptilion(data->unit, data->zeci, data->sute);
	}
	else
		(*nr).SetSeptilion(0, 0, 0);
	pos = pos - 3;
	if (pos >= 0)
	{
		get_num(*nr, data, pos);
		(*nr).SetOctilion(data->unit, data->zeci, data->sute);
	}
	else
		(*nr).SetOctilion(0, 0, 0);
	pos = pos - 3;
	if (pos >= 0)
	{
		get_num(*nr, data, pos);
		(*nr).SetNonilion(data->unit, data->zeci, data->sute);
	}
	else
		(*nr).SetNonilion(0, 0, 0);
	pos = pos - 3;
	if (pos >= 0)
	{
		get_num(*nr, data, pos);
		(*nr).SetDecilion(data->unit, data->zeci, data->sute);
	}
	else
		(*nr).SetDecilion(0, 0, 0);
}
