#include "atm.h"

unsigned int get_money(unsigned short int amount)
{
	unsigned int notes_list = 0x00000000;
	int num_of_notes = 0;
	int denominations[8] = {2000, 500, 100, 50, 20, 10, 5, 1};

	if (amount > 31999)
	{
		return notes_list;
	}

	for (int index = 0; index < 8; index++)
	{
		num_of_notes = amount / denominations[index];
		amount %= denominations[index];
		notes_list = num_of_notes | (notes_list << 4);
	}

	return notes_list;
}
