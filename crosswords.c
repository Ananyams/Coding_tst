//Private Includes
#include <stdio.h>
#include <string.h>
//Func def
void find_nxt_char (char nxt_char, int pos, int dir);
void fill_array();
int get_wordlen(char * wrd); 
//Global variables
char g_grid_in[16]={"abanzqzdrrorrnrr"};
char g_disct_wrd[128] = {"abandon"};
int g_pos_flag [16]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
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
	int i = 0, loop_word_char_cnt = 0;
	char main_cur_char;
	//DBG variable
	main_cur_char = g_disct_wrd [0];
	for (i=0; i<16; i++)//replace with just reccursive
	{
		if (main_cur_char == g_grid_in[i])
		{
			g_pos_flag[i] = 1;			
			loop_word_char_cnt++;
			i++;
			printf("first char found %c,calling next char \r\n", main_cur_char);
			//g_pos_flag[i] = 1;						
			find_nxt_char(g_disct_wrd[loop_word_char_cnt], i, LEFT);
			//printf("first char found, breaking out: %d\r\n", main_cur_char);
			break;
		}
	}
	if (i == 16)
	{
		return -1;
	}
	//printf("%s\r\n", (char*) main_disct_wrd);
	printf("return from main\r\n");
	return 0;
}

void find_nxt_char (char l_nxt_char, int l_cur_pos, int l_dir)
{
	int l_nxt_char_dirs[7], i=0;
	static int recursive_cnt= 0;
	printf("Finding nxt char\r\n");	
	switch(l_cur_pos)//replace with if else
	{
		case 1:{
			 
			printf("Nxt char pos: %d, %d, %d\n", RIGHT, DOWN, DIA_DR);//int l_nxt_char_dirs[7] = {RIGHT, DOWN, DIA_DR, 0};
			l_nxt_char_dirs[0] = RIGHT;
			l_nxt_char_dirs[1] = DOWN;
			l_nxt_char_dirs[2] = DIA_DR;
			l_nxt_char_dirs[3] = 0;
			//printf("Nxt char pos: %d, %d, %d", l_nxt_char_dirs[0], l_nxt_char_dirs[1], l_nxt_char_dirs[2]);
			break;
			}

		case 2 :{ //||3
			 
			printf("Nxt char pos: %d, %d, %d, %d, %d\n", LEFT, RIGHT, DOWN, DIA_DR, DIA_DL);
			l_nxt_char_dirs[0] = LEFT;
			l_nxt_char_dirs[1] = RIGHT;
			l_nxt_char_dirs[2] = DOWN;
			l_nxt_char_dirs[3] = DIA_DR;
			l_nxt_char_dirs[4] = DIA_DL;
			l_nxt_char_dirs[5] = 0;
			//printf("Nxt char pos: %d, %d, %d\n", l_nxt_char_dirs[0], l_nxt_char_dirs[1], l_nxt_char_dirs[2]);
			break;
			} //int l_nxt_char_dirs[7] = {LEFT, RIGHT, DOWN, DIA_DR, DIA_DL, 0};
		case 3 :{
			 
			printf("Nxt char pos: %d, %d, %d, %d, %d\n", LEFT, RIGHT, DOWN, DIA_DR, DIA_DL);
			l_nxt_char_dirs[0] = LEFT;
			l_nxt_char_dirs[1] = RIGHT;
			l_nxt_char_dirs[2] = DOWN;
			l_nxt_char_dirs[3] = DIA_DR;
			l_nxt_char_dirs[4] = DIA_DL;
			l_nxt_char_dirs[5] = 0;
			//printf("Nxt char pos: %d, %d, %d\n", l_nxt_char_dirs[0], l_nxt_char_dirs[1], l_nxt_char_dirs[2]);
			break;
			}
		case 4: {
			 
			printf("Nxt char pos: %d, %d, %d\n", LEFT, DOWN, DIA_DL);
			l_nxt_char_dirs[0] = LEFT;			
			l_nxt_char_dirs[1] = DOWN;
			l_nxt_char_dirs[2] = DIA_DL;
			l_nxt_char_dirs[3] = 0;
			printf("Nxt char pos: %d, %d, %d\n", l_nxt_char_dirs[0], l_nxt_char_dirs[1], l_nxt_char_dirs[2]);
			break;
			}//l_nxt_char_dirs = {LEFT, DOWN, DIA_DL, 0};
		case 8 :{
			 
			printf("Nxt char pos: %d, %d, %d, %d, %d\n", LEFT, DOWN, UP, DIA_DL, DIA_UL);
			l_nxt_char_dirs[0] = LEFT;
			l_nxt_char_dirs[1] = DOWN;
			l_nxt_char_dirs[2] = UP;
			l_nxt_char_dirs[3] = DIA_DL;
			l_nxt_char_dirs[4] = DIA_UL;
			l_nxt_char_dirs[5] = 0;
			//printf("Nxt char pos: %d, %d, %d\n", l_nxt_char_dirs[0], l_nxt_char_dirs[1], l_nxt_char_dirs[2]);
			break;
			}
		case 11 :{ 
			 
			printf("Nxt char pos: %d, %d, %d, %d, %d, %d, %d, %d\n", LEFT, RIGHT, DOWN, UP, DIA_DR, DIA_DL, DIA_UR, DIA_UL);
			l_nxt_char_dirs[0] = LEFT;
			l_nxt_char_dirs[1] = RIGHT;
			l_nxt_char_dirs[2] = DOWN;
			l_nxt_char_dirs[3] = UP;
			l_nxt_char_dirs[4] = DIA_DR;
			l_nxt_char_dirs[5] = DIA_DL;
			l_nxt_char_dirs[6] = DIA_UR;
			l_nxt_char_dirs[7] = DIA_UL;
			l_nxt_char_dirs[8] = 0;
			//printf("Nxt char pos: %d, %d, %d\n", l_nxt_char_dirs[0], l_nxt_char_dirs[1], l_nxt_char_dirs[2]);
			break;
			}
		case 14 :{ 
			 
			printf("Nxt char pos: %d, %d, %d, %d, %d\n", LEFT, RIGHT, UP, DIA_UR, DIA_UL);
			l_nxt_char_dirs[0] = LEFT;
			l_nxt_char_dirs[1] = RIGHT;
			l_nxt_char_dirs[2] = UP;
			l_nxt_char_dirs[3] = DIA_UR;
			l_nxt_char_dirs[4] = DIA_UL;
			l_nxt_char_dirs[5] = 0;
			//printf("Nxt char pos: %d, %d, %d\n", l_nxt_char_dirs[0], l_nxt_char_dirs[1], l_nxt_char_dirs[2]);
			break;
			}
		/*case 5||9: l_nxt_char_dirs = {LEFT, DOWN, UP, DIA_DR, DIA_UR, 0};
		case 6||7||10||11: l_nxt_char_dirs = {LEFT, RIGHT, DOWN, UP, DIA_DR, DIA_DL, DIA_UR, DIA_UL, 0};
		case 8||12: l_nxt_char_dirs = {LEFT, DOWN, UP, DIA_DL, DIA_UL, 0};
		case 13: l_nxt_char_dirs = {RIGHT, UP, DIA_UR, 0};
		case 14||15: l_nxt_char_dirs = {LEFT, RIGHT, UP, DIA_UR, DIA_UL, 0};
		case 16: l_nxt_char_dirs = {LEFT, UP, DIA_UL, 0};*/
		default: printf("Mxt char not found");//int l_nxt_char_dirs [7] = {0, 0,0, 0, 0, 0, 0, 0, 0};
	}
	//printf("nxt char dir : %d\n\r", l_nxt_char_dirs[0]);
	//Try to find the nxt char in possible directions
	while (l_nxt_char_dirs[i] != 0) 
	{
		recursive_cnt++;		
		printf("Finding char at %d\r\n",l_cur_pos + l_nxt_char_dirs[i]);
		if (g_pos_flag[l_cur_pos +l_nxt_char_dirs[i] -1] != 1) 		
		if (g_grid_in[l_cur_pos +l_nxt_char_dirs[i] -1] == l_nxt_char)
		{
		printf("[DBG]");
		g_pos_flag[l_cur_pos +l_nxt_char_dirs[i] -1] = 1;
		printf("Nxt char found %c at %d \r\n", l_nxt_char, (l_cur_pos + l_nxt_char_dirs[i])); 
		if(recursive_cnt != 8)
		find_nxt_char (g_disct_wrd[l_cur_pos +l_nxt_char_dirs[i]], (l_cur_pos +l_nxt_char_dirs[i]), l_nxt_char_dirs[i]); 			break;
		}
		i++;  
	}

}
/*
void fill_array ()
{
	int i;
	int array[N];
	for (i=0; i<N: i++)
	{
		array[i] = 
	}



}*/









