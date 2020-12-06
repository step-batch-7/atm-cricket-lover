#include <stdio.h>
#include "atm.h"

void display_notes(unsigned short int money)
{
	unsigned int notes_list = 0x00000000;
	int num_of_notes = 0;
	int denominations[8] = {2000, 500, 100, 50, 20, 10, 5, 1};
}

int main(void)
{
  unsigned short int amounts[] = {1, 10, 39, 589, 2590, 31999};
  for (int i = 0; i < 6; i++)
  {
    unsigned int notes = get_money(amounts[i]);
    printf("%5u %08x\n", amounts[i], notes);
  }

  return 0;
}
