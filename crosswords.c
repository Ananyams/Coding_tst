//Private Includes
#include <stdio.h>
#include <string.h>
//Func def
void find_nxt_char (char nxt_char, int pos, int dir); 
//Global variables
char g_grid_in[16]={"abanzqzdrrorrnrr"};
//Defines
/*Directions*/
#define UP 	-4
#define DOWN 	4
#define RIGHT 	1
#define LEFT 	-1
#define DIA_DR 	5
#define DIA_UL 	-5
#define DIA_DL 	3
#define DIA_UR 	-3
/*Positions*/
//#define _IS_CORNER(X) if (X == 1 || X == 4 || X == 13 || X == 16);
int main ()
{
	int main_cur_pos, main_dir;
	int i = 0;
	char main_cur_char;
	//DBG variable
	char main_disct_wrd[128] = {"abandon"};
	main_cur_char = main_disct_wrd [0];
	for (i=0; i<16; i++)
	{
		if (main_cur_char == g_grid_in[0])
		{
			loop_word_char_cnt++;
			find_nxt_char(g_grid_in[loop_word_char_cnt], i, LEFT);
		}
	}
	if (i == 16)
	{
		return -1;
	}
	printf("%s\r\n", (char*) main_disct_wrd);
	return 0;
}

void find_nxt_char (char l_nxt_char, int l_cur_pos, int l_dir)
{
	int l_nxt_char_dirs[7];
	switch(l_cur_pos)
	{
		case 1: l_nxt_char_dirs[0:3] = {RIGHT, DOWN, DIA_DR, 0};
		case 2||3: l_nxt_char_dirs[0:5] = {LEFT, RIGHT, DOWN, DIA_DR, DIA_DL, 0};
		case 4: l_nxt_char_dirs[0:3] = {LEFT, DOWN, DIA_DL, 0};
		case 5||9: l_nxt_char_dirs[0:5] = {LEFT, DOWN, UP, DIA_DR, DIA_UR, 0};
		case 6||7||10||11: : l_nxt_char_dirs[0:7] = {LEFT, RIGHT, DOWN, UP, DIA_DR, DIA_DL, DIA_UR, DIA_UL, 0};
		case 8||12: l_nxt_char_dirs[0:5] = {LEFT, DOWN, UP, DIA_DL, DIA_UL, 0};
		case 13: l_nxt_char_dirs[0:3] = {RIGHT, UP, DIA_UR, 0};
		case 14||15: l_nxt_char_dirs[0:5] = {LEFT, RIGHT, UP, DIA_UR, DIA_UL, 0};
		case 16: l_nxt_char_dirs[0:3] = {LEFT, UP, DIA_UL, 0};
		default: l_nxt_char_dirs[0:7] = {0, 0,0, 0, 0, 0, 0, 0, 0};
	}
}
