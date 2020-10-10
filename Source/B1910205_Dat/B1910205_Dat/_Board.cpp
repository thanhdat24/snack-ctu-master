#include "_Board.h"
#include "_Play.h"
#include <vector>
#include<iostream>
#include<conio.h>
#include"_Game.h"
#define MAX 100
using namespace std;
// cấp độ 
int sll1 = 7;
int sll2 = 7;
int sll3 = 7;
int sll4 = 7;
int sll5 = 7;
int sll6 = 7;
int sll7 = 7;
int sll8 = 7;
int sll9 = 7;
int sll10 = 7;
int sll11 = 7;
int sll12 = 7;
int sll13 = 7;
int sll14 = 7;
int sll15 = 7;
int sll16 = 7;
int sll17 = 7;
int sll18 = 7;
int sll19 = 7;
int sll20 = 7;
int sll21 = 7;
int sll22 = 7;
int sll23 = 7;
int sll24 = 7;
int sll25 = 7;
int sll26 = 7;
int sll27 = 7;
int sll28 = 7;
int sll29 = 7;
int sll30 = 7;
int sll31 = 7;
int sll32 = 7;
int sll33 = 7;
int sll34 = 7;
int sll35 = 7;
int sll36 = 7;

int sllv1 = 17;
int sllv2 = 17;
int sllv3 = 17;
int sllv4 = 17;
int sllv5 = 17;
int sllv6 = 17;
int sllv7 = 17;
int sllv8 = 17;


// x
int toa_dovcx1[8];
int toa_dovcx2[8];
int toa_dovcx3[8];
int toa_dovcx4[8];
int toa_dovcx5[8];
int toa_dovcx6[8];
int toa_dovcx7[8];
int toa_dovcx8[8];
int toa_dovcx9[8];
int toa_dovcx10[8];
int toa_dovcx11[8];
int toa_dovcx12[8];
int toa_dovcx13[8];
int toa_dovcx14[8];
int toa_dovcx15[8];
int toa_dovcx16[8];
int toa_dovcx17[8];
int toa_dovcx18[8];
int toa_dovcx19[8];
int toa_dovcx20[8];
int toa_dovcx21[8];
int toa_dovcx22[8];
int toa_dovcx23[8];
int toa_dovcx24[8];
int toa_dovcx25[8];
int toa_dovcx26[8];
int toa_dovcx27[8];
int toa_dovcx28[8];
int toa_dovcx29[8];
int toa_dovcx30[8];
int toa_dovcx31[8];
int toa_dovcx32[8];
int toa_dovcx33[8];
int toa_dovcx34[8];
int toa_dovcx35[8];
int toa_dovcx36[8];

int toa_doxlv1[18];
int toa_doxlv2[18];
int toa_doxlv3[18];
int toa_doxlv4[18];
int toa_doxlv5[18];
int toa_doxlv6[18];
int toa_doxlv7[18];
int toa_doxlv8[18];
// y
int toa_dovcy1[8];
int toa_dovcy2[8];
int toa_dovcy3[8];
int toa_dovcy4[8];
int toa_dovcy5[8];
int toa_dovcy6[8];
int toa_dovcy7[8];
int toa_dovcy8[8];
int toa_dovcy9[8];
int toa_dovcy10[8];
int toa_dovcy11[8];
int toa_dovcy12[8];
int toa_dovcy13[8];
int toa_dovcy14[8];
int toa_dovcy15[8];
int toa_dovcy16[8];
int toa_dovcy17[8];
int toa_dovcy18[8];
int toa_dovcy19[8];
int toa_dovcy20[8];
int toa_dovcy21[8];
int toa_dovcy22[8];
int toa_dovcy23[8];
int toa_dovcy24[8];
int toa_dovcy25[8];
int toa_dovcy26[8];
int toa_dovcy27[8];
int toa_dovcy28[8];
int toa_dovcy29[8];
int toa_dovcy30[8];
int toa_dovcy31[8];
int toa_dovcy32[8];
int toa_dovcy33[8];
int toa_dovcy34[8];
int toa_dovcy35[8];
int toa_dovcy36[8];

int toa_doylv1[18];
int toa_doylv2[18];
int toa_doylv3[18];
int toa_doylv4[18];
int toa_doylv5[18];
int toa_doylv6[18];
int toa_doylv7[18];
int toa_doylv8[18];

//--------------
int pause = 0;
int pause1 = 0;
int x_pause = SIZE * 4 +39;
int y_pause = 29;
int x1_pause = SIZE * 4 + 39;
int y1_pause = 29;
int xcu_pause = 35;
int ycu_pause = 14;
int xcu1_pause = 35;
int ycu1_pause = 14;
int speed = 150;
int speed1 = 150;
int speed2 = 150;
int score = 0;
int score1 = 0;
int score2 = 0;
int level = 1;
int level1 = 1;
int level2 = 1;
int xqua;
int yqua;
int xtang;
int xtang1;
int xtang2;
int ytang;
int ytang1;
int ytang2;
int ytang3;
int xgiam;
int xgiam1;
int xgiam2;
int xgiam3;
int ygiam;
int ygiam1;
int ygiam2;
int ygiam3;
int dem = 0;
int x_vc = 31, y_vc = 1;
int x_vc_1 = 63, y_vc_1 = 16;
int xcu_vc = 31, ycu_vc = 1;
int xcu_vc_1 = 63, ycu_vc_1 = 16;
int xspeed = SIZE * 4 + 38;
int yspeed = 4;
int xspeed1 = SIZE * 4 + 38;
int yspeed1 = 6;
int xspeed2 = SIZE * 4 + 38;
int yspeed2 = 16;
int xcu_speed = SIZE * 4 + 38;
int ycu_speed = 4;
int xcu_speed1 = SIZE * 4 + 38;
int ycu_speed1 = 6;
int xcu_speed2 = SIZE * 4 + 38;
int ycu_speed2 = 16;
int k = 1;
int load = 0;
// số lượng đốt
int sl = 3;
int sl1 = 3; 
int sl2 = 3;
//tọa độ 
int toado_x[MAX];
int toado_y[MAX];
int toado_xcu[MAX];
int toado_ycu[MAX];
int toado_x_1[MAX];
int toado_y_1[MAX];
int toado_x_2[MAX];
int toado_y_2[MAX];
int toado_xcu_1[MAX];
int toado_ycu_1[MAX];
int toado_xcu_2[MAX];
int toado_ycu_2[MAX];
void ve_tuong()
{
	Textcolor(Green);
	// ##########################
	for (int i = 0; i < SIZE * 2; i++)
	{
		// Ve cot phai
		Sleep(1);
		_Common::gotoXY(SIZE * 4, i + 1);
		if ((i + 1) % 2 == 1)
			cout << "|";
		else
			cout << "|";
	}
	// ##########################
	for (int i = 0; i < SIZE * 2; i++)
	{
		Sleep(1);
		// Ve cot trai
		_Common::gotoXY(0, i + 1);
		if ((i + 1) % 2 == 1)
			cout << "|";
		else
			cout << "|";
	}
	// ##########################
	// Ve dong dau
	_Common::gotoXY(0, 0);
	for (int i = 0; i < SIZE * 4; i++)
	{
		Sleep(1);
		if (i % 4 == 0)
			cout << "_";
		else
			cout << "_";
	}
	_Common::gotoXY(0, 0); cout << char(201);
	_Common::gotoXY(SIZE * 4, 0); cout << char(187);

	// Ve dong cuoi
	_Common::gotoXY(0, SIZE * 2);
	for (int i = 0; i < SIZE * 4; i++)
	{
		Sleep(1);
		if (i % 4 == 0)
			cout << "_";
		else
			cout << "_";
	}
	_Common::gotoXY(0, SIZE * 2); cout << char(200);
	_Common::gotoXY(SIZE * 4, SIZE * 2);
	cout << char(188);
}

void Game_1()
{
	sl = 3;
	tao_qua();
	ve_tuong();
	tao_vc1();
	ve_vc1();
	/*Let_Go();*/
	khoi_tao_ran();
	
	bool KT = true;
	int x = 30, y = 15;
	int check = 2; // 0: đi xuống
				   // 1: đi lên
				   // 2: đi qua phải
				   // 3: đi qua trái 
	int checkvc = 0;
	int checkvc_1 = 0;
	while (true)
	{
		
		Xoa_du_lieu_cu();
		cap_nhap_du_lieu_cu();

		//-------B2: vẽ rắn và vật cản---------
		// ------- vật cản 1 -----------------
		//int i = rand() % (15 - 1 + 1) + 1;
		//Textcolor(i);
		//_Common::gotoXY(xcu_vc, ycu_vc);
		//cout << " ";
		//xcu_vc = x_vc, ycu_vc = y_vc;
		//_Common::gotoXY(x_vc, y_vc);
		//cout << char(169);
		//if (checkvc == 0)
		//{
		//	y_vc++;
		//}
		//else if (checkvc == 1)
		//{
		//	y_vc--;
		//}
		//if (y_vc == 31) // chạm biên dưới và đi lên
		//{
		//	checkvc = 1;

		//}
		//else if (y_vc == 1) // chạm biên trên và đi xuống
		//{
		//	checkvc = 0;

		//}

		 //------- vật cản 2 -----------------
		int j = rand() % (15 - 1 + 1) + 1;
		Textcolor(j);
		_Common::gotoXY(xcu_vc_1, ycu_vc_1);
		cout << " ";
		xcu_vc_1 = x_vc_1, ycu_vc_1 = y_vc_1;
		_Common::gotoXY(x_vc_1, y_vc_1);
		cout << char(169);
		if (checkvc_1 == 3)
		{
			x_vc_1--;
		
		}
		else if (checkvc_1 == 2)
		{
			x_vc_1++;
		}
		if (x_vc_1 == 63) // chạm biên trái và đi qua phải
		{
			checkvc_1 = 3;

		}
		else if (x_vc_1 == 1) // chạm biên phải và đi qua trái
		{
			checkvc_1 = 2;

		}
		ve_ran();
		//========== GamOver rắn 1 ===========
		if (gameOver() == true)
		{
			PlaySound(TEXT("win.wav"), NULL, SND_ASYNC);
			system("cls");
			PWIN();
			while (k)
			{
				if (_kbhit())
				{
					switch (_getch())
					{
					case 'y':
						PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
						system("cls");
						return Menu_1();
						break;
					case 27:
						PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
						system("cls");
						ScreenStartGame(99);
						break;
					}
				}
			}
			break;
		}
		//======= Xử lí hướng đi rắn 1 ========
		if (_kbhit() == true)
		{
			char c = _getch();
			if (c == 27) // Exit
			{
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				system("cls");
				ScreenStartGame(99);
				break;
			}
			if (c == 32)
			{
				pause = 1;
			}
			if (c == -32)
			{
				c = _getch();
				{
					if (c == 72 && check != 0)
					{
						check = 1;
					}
					else if (c == 80 && check != 1)
					{
						check = 0;
					}
					else if (c == 77 && check != 3)
					{
						check = 2;
					}
					else if (c == 75 && check != 2)
					{
						check = 3;
					}
				}
			}
		}
		if (pause == 1)
		{
		
			Textcolor(Red);
			_Common::gotoXY(x_pause, y_pause);
			cout<<"Pause";
			while (_getch() != 32);//54 la ma aki cua 6
			pause++;
			_Common::gotoXY(xcu_pause, ycu_pause);
			cout << "     ";
			
			
		}
		Textcolor(White);
		_Common::gotoXY(SIZE * 4 + 39, 29);
		cout << "Pause";
		//=============== Dựa vào hướng xử lí di chuyển rắn 1 ===========
		if (check == 0)
		{

			y++;
		}
		else if (check == 1)
		{

			y--;
		}
		else if (check == 2)
		{

			x++;
		}
		else if (check == 3)
		{

			x--;
		}
		them(x, y);
		// ---------- qua trung vat the --------------
		for (int j = 0; j < sll1; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx1[j] && yqua == toa_dovcy1[j])
			{
				tao_qua();
				ve_vc1();
			}
		}
		for (int j = 0; j < sll2; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx2[j] && yqua == toa_dovcy2[j])
			{
				tao_qua();
				ve_vc1();
			}
		}
		for (int j = 0; j < sll3; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx3[j] && yqua == toa_dovcy3[j])
			{
				tao_qua();
				ve_vc1();
			}
		}
		for (int j = 0; j < sll4; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx4[j] && yqua == toa_dovcy4[j])
			{
				tao_qua();
				ve_vc2();
			}
		}
		for (int j = 0; j < sll5; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx5[j] && yqua == toa_dovcy5[j])
			{
				tao_qua();
				ve_vc2();
			}
		}
		for (int j = 0; j < sll6; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx6[j] && yqua == toa_dovcy6[j])
			{
				tao_qua();
				ve_vc2();
			}
		}
		for (int j = 0; j < sll7; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx7[j] && yqua == toa_dovcy7[j])
			{
				tao_qua();
				ve_vc1();
			}
		}
		for (int j = 0; j < sll8; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx8[j] && yqua == toa_dovcy8[j])
			{
				tao_qua();
				ve_vc1();
			}
		}
		for (int j = 0; j < sll9; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx9[j] && yqua == toa_dovcy9[j])
			{
				tao_qua();
				ve_vc1();
			}
		}
		for (int j = 0; j < sll10; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx10[j] && yqua == toa_dovcy10[j])
			{
				tao_qua();
				ve_vc3();
			}
		}
		for (int j = 0; j < sll11; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx11[j] && yqua == toa_dovcy11[j])
			{
				tao_qua();
				ve_vc3();
			}
		}
		for (int j = 0; j < sll12; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx12[j] && yqua == toa_dovcy12[j])
			{
				tao_qua();
				ve_vc3();
			}
		}
		for (int j = 0; j < sll13; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx13[j] && yqua == toa_dovcy13[j])
			{
				tao_qua();
				ve_vc4();
			}
		}
		for (int j = 0; j < sll14; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx14[j] && yqua == toa_dovcy14[j])
			{
				tao_qua();
				ve_vc4();
			}
		}
		for (int j = 0; j < sll15; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx15[j] && yqua == toa_dovcy15[j])
			{
				tao_qua();
				ve_vc4();
			}
		}
		for (int j = 0; j < sll16; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx16[j] && yqua == toa_dovcy16[j])
			{
				tao_qua();
				ve_vc3();
			}
		}
		for (int j = 0; j < sll17; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx17[j] && yqua == toa_dovcy17[j])
			{
				tao_qua();
				ve_vc3();
			}
		}
		for (int j = 0; j < sll18; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx18[j] && yqua == toa_dovcy18[j])
			{
				tao_qua();
				ve_vc3();
			}
		}
		for (int j = 0; j < sll19; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx19[j] && yqua == toa_dovcy19[j])
			{
				tao_qua();
				ve_vc3();
			}
		}
		for (int j = 0; j < sll20; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx20[j] && yqua == toa_dovcy20[j])
			{
				tao_qua();
				ve_vc3();
			}
		}
		for (int j = 0; j < sll21; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx21[j] && yqua == toa_dovcy21[j])
			{
				tao_qua();
				ve_vc3();
			}
		}
		for (int j = 0; j < sll22; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx22[j] && yqua == toa_dovcy22[j])
			{
				tao_qua();
				ve_vc4();
			}
		}
		for (int j = 0; j < sll23; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx23[j] && yqua == toa_dovcy23[j])
			{
				tao_qua();
				ve_vc4();
			}
		}
		for (int j = 0; j < sll24; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx24[j] && yqua == toa_dovcy24[j])
			{
				tao_qua();
				ve_vc4();
			}
		}
		for (int j = 0; j < sll25; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx25[j] && yqua == toa_dovcy25[j])
			{
				tao_qua();
				ve_vc3();
			}
		}
		for (int j = 0; j < sll26; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx26[j] && yqua == toa_dovcy26[j])
			{
				tao_qua();
				ve_vc3();
			}
		}
		for (int j = 0; j < sll27; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx27[j] && yqua == toa_dovcy27[j])
			{
				tao_qua();
				ve_vc3();
			}
		}
		for (int j = 0; j < sll28; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx28[j] && yqua == toa_dovcy28[j])
			{
				tao_qua();
				ve_vc1();
			}
		}
		for (int j = 0; j < sll29; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx29[j] && yqua == toa_dovcy29[j])
			{
				tao_qua();
				ve_vc1();
			}
		}
		for (int j = 0; j < sll30; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx30[j] && yqua == toa_dovcy30[j])
			{
				tao_qua();
				ve_vc1();
			}
		}
		for (int j = 0; j < sll31; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx31[j] && yqua == toa_dovcy31[j])
			{
				tao_qua();
				ve_vc2();
			}
		}
		for (int j = 0; j < sll32; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx32[j] && yqua == toa_dovcy32[j])
			{
				tao_qua();
				ve_vc2();
			}
		}
		for (int j = 0; j < sll33; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx33[j] && yqua == toa_dovcy33[j])
			{
				tao_qua();
				ve_vc2();
			}
		}
		for (int j = 0; j < sll34; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx34[j] && yqua == toa_dovcy34[j])
			{
				tao_qua();
				ve_vc1();
			}
		}
		for (int j = 0; j < sll35; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx35[j] && yqua == toa_dovcy35[j])
			{
				tao_qua();
				ve_vc1();
			}
		}
		for (int j = 0; j < sll36; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_dovcx36[j] && yqua == toa_dovcy36[j])
			{
				tao_qua();
				ve_vc1();
			}
		}
		
		//=========== khi rắn 1 ăn quả ==================
		if (toado_x[0] == xqua && toado_y[0] == yqua)
		{
			PlaySound(TEXT("eatFood.wav"), NULL, SND_ASYNC);
			SetLevelScore();
			tao_qua();
			Textcolor(Cyan);
			_Common::gotoXY(SIZE * 4 + 38, 14);
			cout << score;
			Textcolor(Cyan);
			_Common::gotoXY(SIZE * 4 + 38, 2);
			cout << level;
			Textcolor(Cyan);
			_Common::gotoXY(SIZE * 4 + 38, 4);
			cout << speed;
			_Common::gotoXY(xcu_speed, ycu_speed);
			cout << "   ";
			xcu_speed = xspeed; ycu_speed = yspeed;
			Textcolor(Cyan);
			_Common::gotoXY(xspeed, yspeed);
			cout << speed;
		}
		else
		{
			xoa();
		}

		// Ăn buff level 2
		if (toado_x[0] == xtang && toado_y[0] == ytang)
		{
			PlaySound(TEXT("eatFood.wav"), NULL, SND_ASYNC);
			speed -= 10;
			_Common::gotoXY(xcu_speed, ycu_speed);
			cout << "   ";
			xcu_speed = xspeed; ycu_speed = yspeed;
			Textcolor(Cyan);
			_Common::gotoXY(xspeed, yspeed);
			cout << speed;

		}
		if (toado_x[0] == xgiam && toado_y[0] == ygiam)
		{
			PlaySound(TEXT("eatFood.wav"), NULL, SND_ASYNC);
			speed += 10;
			_Common::gotoXY(xcu_speed, ycu_speed);
			cout << "   ";
			xcu_speed = xspeed; ycu_speed = yspeed;
			Textcolor(Cyan);
			_Common::gotoXY(xspeed, yspeed);
			cout << speed;
		}
		// Ăn buff level 5
		if (toado_x[0] == xtang1 && toado_y[0] == ytang1)
		{
			PlaySound(TEXT("eatFood.wav"), NULL, SND_ASYNC);
			speed -= 20;
			_Common::gotoXY(xcu_speed, ycu_speed);
			cout << "   ";
			xcu_speed = xspeed; ycu_speed = yspeed;
			Textcolor(Cyan);
			_Common::gotoXY(xspeed, yspeed);
			cout << speed;

		}
		if (toado_x[0] == xgiam1 && toado_y[0] == ygiam1)
		{
			PlaySound(TEXT("eatFood.wav"), NULL, SND_ASYNC);
			speed += 20;
			_Common::gotoXY(xcu_speed, ycu_speed);
			cout << "   ";
			xcu_speed = xspeed; ycu_speed = yspeed;
			Textcolor(Cyan);
			_Common::gotoXY(xspeed, yspeed);
			cout << speed;

		}
		// Ăn buff level 7
		if (toado_x[0] == xtang2 && toado_y[0] == ytang2)
		{
			PlaySound(TEXT("eatFood.wav"), NULL, SND_ASYNC);
			speed -= 30;
			_Common::gotoXY(xcu_speed, ycu_speed);
			cout << "   ";
			xcu_speed = xspeed; ycu_speed = yspeed;
			Textcolor(Cyan);
			_Common::gotoXY(xspeed, yspeed);
			cout << speed;

		}
		if (toado_x[0] == xgiam2 && toado_y[0] == ygiam2)
		{
			PlaySound(TEXT("eatFood.wav"), NULL, SND_ASYNC);
			speed += 30;
			_Common::gotoXY(xcu_speed, ycu_speed);
			cout << "   ";
			xcu_speed = xspeed; ycu_speed = yspeed;
			Textcolor(Cyan);
			_Common::gotoXY(xspeed, yspeed);
			cout << speed;

		}
		Sleep(speed);
	}

}
void Game_2()
{
	sl1 = 3;
	sl2 = 3;
	ve_tuong();
	tao_qua();
	tao_lv1();
	ve_lv1();
	/*Let_Go();*/
	khoi_tao_ran_1();
	khoi_tao_ran_2();
	
	int x1 = 30, y1 = 15;
	int x2 = 30, y2 = 20;
	int check1 = 2; // 0: đi xuống
				   // 1: đi lên
				   // 2: đi qua phải
				   // 3: đi qua trái 
	int check2 = 2; // 0: đi xuống
				   // 1: đi lên
				   // 2: đi qua phải
				   // 3: đi qua trái 
	int checkvt = 0; 
	while (true)
	{
		Xoa_du_lieu_cu_1();
		cap_nhap_du_lieu_cu_1();
		Xoa_du_lieu_cu_2();
		cap_nhap_du_lieu_cu_2();

		//-------B2: vẽ rắn và vật cản---------
		int i = rand() % (15 - 1 + 1) + 1;
		Textcolor(i);
		_Common::gotoXY(xcu_vc, ycu_vc);
		cout << " ";
		xcu_vc = x_vc, ycu_vc = y_vc;
		_Common::gotoXY(x_vc, y_vc);
		cout << char(169);
		if (checkvt == 0)
		{
			y_vc++;
		}
		else if (checkvt == 1)
		{
			y_vc--;
		}
		if (y_vc == 31) // chạm biên dưới và đi lên
		{
			checkvt = 1;

		}
		else if (y_vc == 1) // chạm biên trên và đi xuống
		{
			checkvt = 0;

		}
		ve_ran_1();
		ve_ran_2();
		//========== GamOver rắn 1 ===========
		if (gameOver_1() == true)
		{
			PlaySound(TEXT("win.wav"), NULL, SND_ASYNC);
			system("cls");
			P2WIN();
			while (k)
			{
				if (_kbhit())
				{
					switch (_getch())
					{
					case 'y':
						PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
						system("cls");
						return Menu_2();
						break;
					case 27:
						PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
						system("cls");
						ScreenStartGame(99);
						break;
					}
				}
			}
			break;
		}
		//========== GamOver rắn 1 ===========
		if (gameOver_2() == true)
		{
			PlaySound(TEXT("win.wav"), NULL, SND_ASYNC);
			system("cls");
			P1WIN();
			while (k)
			{
				if (_kbhit())
				{
					switch (_getch())
					{
					case 'y':
						PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
						system("cls");
						return Menu_2();
						break;
					case 27:
						PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
						system("cls");
						ScreenStartGame(99);
						break;
					}
				}
			}
			break;
		}
		//======= Xử lí hướng đi rắn 1 ========
		if (_kbhit() == true)
		{
			char c = _getch();
			if (c == 27) // Exit
			{
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				system("cls");
				ScreenStartGame(99);
				break;
			}
			if (c == 32)
			{
				pause1 = 1;
			}
			if (c == -32)
			{
				c = _getch();
				{
					if (c == 72 && check1 != 0)
					{
						check1 = 1;
					}
					else if (c == 80 && check1 != 1)
					{
						check1 = 0;
					}
					else if (c == 77 && check1 != 3)
					{
						check1 = 2;
					}
					else if (c == 75 && check1 != 2)
					{
						check1 = 3;
					}
				}
			}
			//======= Xử lí hướng đi rắn 2 ========
			if (c == 119 && check2 != 0)
			{
				check2 = 1;
			}
			else if (c == 115 && check2 != 1)
			{
				check2 = 0;
			}
			else if (c == 100 && check2 != 3)
			{
				check2 = 2;
			}
			else if (c == 97 && check2 != 2)
			{
				check2 = 3;
			}
		}	
		if (pause1 == 1)
		{

			Textcolor(Red);
			_Common::gotoXY(x1_pause, y1_pause);
			cout << "Game Pause";
			while (_getch() != 32); //32 mã kí tự phím cách
			pause1++;
			_Common::gotoXY(xcu1_pause, ycu1_pause);
			cout << "          ";
			xcu1_pause = x1_pause, ycu1_pause = y1_pause;
		}
		//=============== Dựa vào hướng xử lí di chuyển rắn 1 ===========
		if (check1 == 0)
		{

			y1++;
		}
		else if (check1 == 1)
		{

			y1--;
		}
		else if (check1 == 2)
		{

			x1++;
		}
		else if (check1 == 3)
		{

			x1--;
		}
		them1(x1, y1);
		//-------------- xu li qua trung vat the 
		for (int j = 0; j < sllv1; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_doxlv1[j] && yqua == toa_doylv1[j])
			{
				tao_qua();
				ve_lv1();
			}
		}
		for (int j = 0; j < sllv2; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_doxlv2[j] && yqua == toa_doylv2[j])
			{
				tao_qua();
				ve_lv1();
			}
		}
		for (int j = 0; j < sllv3; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_doxlv3[j] && yqua == toa_doylv3[j])
			{
				tao_qua();
				ve_lv1();
			}
		}
		for (int j = 0; j < sllv4; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_doxlv4[j] && yqua == toa_doylv4[j])
			{
				tao_qua();
				ve_lv1();
			}
		}
		for (int j = 0; j < sllv5; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_doxlv5[j] && yqua == toa_doylv5[j])
			{
				tao_qua();
				ve_lv1();
			}
		}
		for (int j = 0; j < sllv6; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_doxlv6[j] && yqua == toa_doylv6[j])
			{
				tao_qua();
				ve_lv1();
			}
		}
		for (int j = 0; j < sllv7; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_doxlv7[j] && yqua == toa_doylv7[j])
			{
				tao_qua();
				ve_lv1();
			}
		}
		for (int j = 0; j < sllv8; j++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
		{
			if (xqua == toa_doxlv8[j] && yqua == toa_doylv8[j])
			{
				tao_qua();
				ve_lv1();
			}
		}
		
		//=============== Dựa vào hướng xử lí di chuyển rắn 2 ===========
		if (check2 == 0)
		{
			y2++;
		}
		else if (check2 == 1)
		{
			y2--;
		}
		else if (check2 == 2)
		{
			x2++;
		}
		else if (check2 == 3)
		{
			x2--;
		}
		them2(x2, y2);
		//=========== khi rắn 1 ăn quả ==================
		if (toado_x_1[0] == xqua && toado_y_1[0] == yqua) 
		{
			PlaySound(TEXT("eatFood.wav"), NULL, SND_ASYNC);
			SetLevelScore_1();
			tao_qua();
			Textcolor(DarkBlue);
			_Common::gotoXY(SIZE * 4 + 38, 4);
			cout << level1;
			Textcolor(DarkBlue);
			_Common::gotoXY(SIZE * 4 + 38, 5);
			cout << score1;
			_Common::gotoXY(xcu_speed1, ycu_speed1);
			cout << "   ";
			xcu_speed1 = xspeed1; ycu_speed1 = yspeed1;
			Textcolor(DarkBlue);
			_Common::gotoXY(xspeed1, yspeed1);
			cout << speed1;
		}
		else
		{
			xoa1();
		}
		//=========== khi rắn 2 ăn quả ==================
		if (toado_x_2[0] == xqua && toado_y_2[0] == yqua)
		{
			PlaySound(TEXT("eatFood.wav"), NULL, SND_ASYNC);
			SetLevelScore_2();
			tao_qua();
			Textcolor(Red);
			_Common::gotoXY(SIZE * 4 + 38, 14);
			cout << level2;
			Textcolor(Red);
			_Common::gotoXY(SIZE * 4 + 38, 15);
			cout << score2;
			_Common::gotoXY(xcu_speed2, ycu_speed2);
			cout << "   ";
			xcu_speed2 = xspeed2; ycu_speed2 = yspeed2;
			Textcolor(Red);
			_Common::gotoXY(xspeed2, yspeed2);
			cout << speed2;
		}
		else
		{

			xoa2();
		}
	
		// Ăn buff
		/* if (toado_x_1[0] == xtang && toado_y_1[0] == ytang)
		{
			PlaySound(TEXT("eatFood.wav"), NULL, SND_ASYNC);
			speed2 -= 10;
			_Common::gotoXY(xcu_speed, ycu_speed);
			cout << "   ";
			xcu_speed = xspeed; ycu_speed = yspeed;
			Textcolor(DarkBlue);
			_Common::gotoXY(xspeed, yspeed);
			cout << speed2;
			tao_buff_fast();
		}
		 if (toado_x_1[0] == xgiam && toado_y_1[0] == ygiam)
		 {
			 PlaySound(TEXT("eatFood.wav"), NULL, SND_ASYNC);
			 speed1 += 10;
			 _Common::gotoXY(xcu_speed, ycu_speed);
			 cout << "   ";
			 xcu_speed = xspeed; ycu_speed = yspeed;
			 Textcolor(DarkBlue);
			 _Common::gotoXY(xspeed, yspeed);
			 cout << speed1;
			 tao_buff_slow();
		 }*/

		Sleep(speed1);
	}
}
void khoi_tao_ran()
{
	int x = 30, y = 15;
	for (int i = 0; i < sl; i++)
	{
		toado_x[i] = x;
		toado_y[i] = y;
		x--;// 44 43 42
	}
}

void khoi_tao_ran_1()
{
	int x = 30, y = 15;
	for (int i = 0; i < sl1; i++)
	{
		toado_x_1[i] = x;
		toado_y_1[i] = y;
		x--;
	}
}

void khoi_tao_ran_2()
{
	int x = 30, y = 20;
	for (int i = 0; i < sl2; i++)
	{
		toado_x_2[i] = x;
		toado_y_2[i] = y;
		x--;
	}
}

void ve_ran()
{
	Textcolor(DarkCyan);
	for (int i = 0; i < sl; i++)
	{
		if (i == 0)
		{
			_Common::gotoXY(toado_x[i], toado_y[i]);
			cout << "0";
		}
		else
		{
			_Common::gotoXY(toado_x[i], toado_y[i]);
			cout << "o";
		}
	}
}
void ve_ran_1()
{
	/*int i = rand() % (15 - 1 + 1) + 1;
	Textcolor(i);*/
	Textcolor(DarkCyan);
	for (int i = 0; i < sl1; i++)
	{
		if (i == 0)
		{
			_Common::gotoXY(toado_x_1[i], toado_y_1[i]);
			cout << "0";
		}
		else
		{
			_Common::gotoXY(toado_x_1[i], toado_y_1[i]);
			cout << "o";
		}
	}
}

void ve_ran_2()
{
	Textcolor(Pink);
	for (int i = 0; i < sl2; i++)
	{
		if (i == 0)
		{
			_Common::gotoXY(toado_x_2[i], toado_y_2[i]);
			cout << "0";
		}
		else
		{
			_Common::gotoXY(toado_x_2[i], toado_y_2[i]);
			cout << "o";
		}
	}
}
void them(int x, int y)
{
	for (int i = sl - 1; i >= 0; i--)
	{
		toado_x[i + 1] = toado_x[i];
		toado_y[i + 1] = toado_y[i];
	}
	toado_x[0] = x;
	toado_y[0] = y;
	sl++;
}
void them1(int x, int y)
{
	for (int i = sl1 - 1; i >= 0; i--)
	{
		toado_x_1[i + 1] = toado_x_1[i];
		toado_y_1[i + 1] = toado_y_1[i];
	}
	toado_x_1[0] = x;
	toado_y_1[0] = y;
	sl1++;
}
void them2(int x, int y)
{
	for (int i = sl2 - 1; i >= 0; i--)
	{
		toado_x_2[i + 1] = toado_x_2[i];
		toado_y_2[i + 1] = toado_y_2[i];
	}
	toado_x_2[0] = x;
	toado_y_2[0] = y;
	sl2++;
}
void xoa()
{
	sl--;
}
void xoa1()
{
	sl1--;
}

void xoa2()
{
	sl2--;
}
void khoi_tao_toa_do_cu()
{
	for (int i = 0; i < sl; i++)
	{
		toado_xcu[i] = toado_x[i];
		toado_ycu[i] = toado_y[i];
	}
}
void khoi_tao_toa_do_cu_1()
{
	for (int i = 0; i < sl1; i++)
	{
		toado_xcu_1[i] = toado_x_1[i];
		toado_ycu_1[i] = toado_y_1[i];
	}
}
void khoi_tao_toa_do_cu_2()
{
	for (int i = 0; i < sl2; i++)
	{
		toado_xcu_2[i] = toado_x_2[i];
		toado_ycu_2[i] = toado_y_2[i];
	}
}
void cap_nhap_du_lieu_cu()
{
	for (int i = 0; i < sl; i++)
	{
		toado_xcu[i] = toado_x[i];
		toado_ycu[i] = toado_y[i];
	}
}
void cap_nhap_du_lieu_cu_1()
{
	for (int i = 0; i < sl1; i++)
	{
		toado_xcu_1[i] = toado_x_1[i];
		toado_ycu_1[i] = toado_y_1[i];
	}
}
void cap_nhap_du_lieu_cu_2()
{
	for (int i = 0; i < sl2; i++)
	{
		toado_xcu_2[i] = toado_x_2[i];
		toado_ycu_2[i] = toado_y_2[i];
	}
}
void Xoa_du_lieu_cu()
{
	for (int i = 0; i < sl; i++)
	{
		_Common::gotoXY(toado_xcu[i], toado_ycu[i]);
		cout << " ";
	}
}
void Xoa_du_lieu_cu_1()
{
	for (int i = 0; i < sl1; i++)
	{
		_Common::gotoXY(toado_xcu_1[i], toado_ycu_1[i]);
		cout << " ";
	}
}

void Xoa_du_lieu_cu_2()
{
	for (int i = 0; i < sl2; i++)
	{
		_Common::gotoXY(toado_xcu_2[i], toado_ycu_2[i]);
		cout << " ";
	}
}

void tao_qua()
{
	int i = rand() % (15 - 1 + 1) + 1;
	Textcolor(i);
	//------------- Ramdom ra vị trí quả -----------
	xqua = rand() % (63 - 1 + 1) + 1; // (1,63)
	yqua = rand() % (31 - 1 + 1) + 1; // (1, 31)
	//------------- tạo quả ---------------------
	_Common::gotoXY(xqua, yqua);
	cout << char(164);
	/*int j = rand() % (15 - 1 + 1) + 1;
	Textcolor(j);*/
}

void tao_buff_fast()
{
	Textcolor(Blue);
	//------------- Ramdom ra vị trí buff -----------
	xtang = rand() % (63 - 1 + 1) + 1; // (1,63)
	ytang = rand() % (31 - 1 + 1) + 1; // (1, 31)
	//------------- tạo buff ---------------------
	_Common::gotoXY(xtang, ytang);
	cout << char(187);
}
void tao_buff_fast_1()
{
	Textcolor(Blue);
	//------------- Ramdom ra vị trí buff -----------
	xtang1 = rand() % (63 - 1 + 1) + 1; // (1,63)
	ytang1 = rand() % (31 - 1 + 1) + 1; // (1, 31)
	//------------- tạo buff ---------------------
	_Common::gotoXY(xtang1, ytang1);
	cout << char(187);
}
void tao_buff_fast_2()
{
	Textcolor(Blue);
	//------------- Ramdom ra vị trí buff -----------
	xtang2= rand() % (63 - 1 + 1) + 1; // (1,63)
	ytang2 = rand() % (31 - 1 + 1) + 1; // (1, 31)
	//------------- tạo buff ---------------------
	_Common::gotoXY(xtang2, ytang2);
	cout << char(187);
}
void tao_buff_slow()
{
	Textcolor(Red);
	//------------- Ramdom ra vị trí buff -----------
	xgiam = rand() % (63 - 1 + 1) + 1; // (1,63)
	ygiam = rand() % (31 - 1 + 1) + 1; // (1, 31)
	//------------- tạo buff ---------------------
	_Common::gotoXY(xgiam, ygiam);
	cout << char(171);
}
void tao_buff_slow_1()
{
	Textcolor(Red);
	//------------- Ramdom ra vị trí buff -----------
	xgiam1 = rand() % (63 - 1 + 1) + 1; // (1,63)
	ygiam1 = rand() % (31 - 1 + 1) + 1; // (1, 31)
	//------------- tạo buff ---------------------
	_Common::gotoXY(xgiam1, ygiam1);
	cout << char(171);
}
void tao_buff_slow_2()
{
	Textcolor(Red);
	//------------- Ramdom ra vị trí buff -----------
	xgiam2 = rand() % (63 - 1 + 1) + 1; // (1,63)
	ygiam2 = rand() % (31 - 1 + 1) + 1; // (1, 31)
	//------------- tạo buff ---------------------
	_Common::gotoXY(xgiam2, ygiam2);
	cout << char(171);
}
 // ========== Xử lí thua rắn 1 ==============

void tao_vc1()
{
	int x1 = 6, y1 = 30;
	for (int i = 0; i < sll1; i++)
	{
		toa_dovcx1[i] = x1;
		toa_dovcy1[i] = y1;
		x1++;
	}
	int x2 = 6, y2 = 29;
	for (int i = 0; i < sll2; i++)
	{
		toa_dovcx2[i] = x2;
		toa_dovcy2[i] = y2;
		x2++;
	}

	int x3 = 6, y3 = 28;
	for (int i = 0; i < sll3; i++)
	{
		toa_dovcx3[i] = x3;
		toa_dovcy3[i] = y3;
		x3++;
	}

	
	int x7 = 52, y7 = 30;
	for (int i = 0; i < sll7; i++)
	{
		toa_dovcx7[i] = x7;
		toa_dovcy7[i] = y7;
		x7++;
	}
	int x8 = 52, y8 = 29;
	for (int i = 0; i < sll8; i++)
	{
		toa_dovcx8[i] = x8;
		toa_dovcy8[i] = y8;
		x8++;
	}
	int x9 = 52, y9 = 28;
	for (int i = 0; i < sll9; i++)
	{
		toa_dovcx9[i] = x9;
		toa_dovcy9[i] = y9;
		x9++;
	}
	
	

	int x28 = 6, y28 = 6;
	for (int i = 0; i < sll28; i++)
	{
		toa_dovcx28[i] = x28;
		toa_dovcy28[i] = y28;
		x28++;
	}
	int x29 = 6, y29 = 5;
	for (int i = 0; i < sll29; i++)
	{
		toa_dovcx29[i] = x29;
		toa_dovcy29[i] = y29;
		x29++;
	}
	int x30 = 6, y30 = 4;
	for (int i = 0; i < sll30; i++)
	{
		toa_dovcx30[i] = x30;
		toa_dovcy30[i] = y30;
		x30++;
	}

	
	int x34 = 52, y34 = 6;
	for (int i = 0; i < sll34; i++)
	{
		toa_dovcx34[i] = x34;
		toa_dovcy34[i] = y34;
		x34++;
	}
	int x35 = 52, y35 = 5;
	for (int i = 0; i < sll35; i++)
	{
		toa_dovcx35[i] = x35;
		toa_dovcy35[i] = y35;
		x35++;
	}
	int x36 = 52, y36 = 4;
	for (int i = 0; i < sll36; i++)
	{
		toa_dovcx36[i] = x36;
		toa_dovcy36[i] = y36;
		x36++;
	}
}

void ve_vc1()
{
	Textcolor(176);
	_Common::gotoXY(toa_dovcx1[0], toa_dovcy1[0]);
	cout << "       ";
	Textcolor(176);
	_Common::gotoXY(toa_dovcx2[0], toa_dovcy2[0]);
	cout << "       ";
	Textcolor(176);
	_Common::gotoXY(toa_dovcx3[0], toa_dovcy3[0]);
	cout << "       ";
	Textcolor(176);
	
	_Common::gotoXY(toa_dovcx7[0], toa_dovcy7[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx8[0], toa_dovcy8[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx9[0], toa_dovcy9[0]);
	cout << "       ";
	
	
	_Common::gotoXY(toa_dovcx28[0], toa_dovcy28[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx29[0], toa_dovcy29[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx30[0], toa_dovcy30[0]);
	cout << "       ";

	
	_Common::gotoXY(toa_dovcx34[0], toa_dovcy34[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx35[0], toa_dovcy35[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx36[0], toa_dovcy36[0]);
	cout << "       ";
	Textcolor(7);
}
void tao_vc2()
{
	int x4 = 29, y4 = 30;
	for (int i = 0; i < sll4; i++)
	{
		toa_dovcx4[i] = x4;
		toa_dovcy4[i] = y4;
		x4++;
	}
	int x5 = 29, y5 = 29;
	for (int i = 0; i < sll5; i++)
	{
		toa_dovcx5[i] = x5;
		toa_dovcy5[i] = y5;
		x5++;
	}
	int x6 = 29, y6 = 28;
	for (int i = 0; i < sll6; i++)
	{
		toa_dovcx6[i] = x6;
		toa_dovcy6[i] = y6;
		x6++;
	}
	int x31 = 29, y31 = 6;
	for (int i = 0; i < sll31; i++)
	{
		toa_dovcx31[i] = x31;
		toa_dovcy31[i] = y31;
		x31++;
	}
	int x32 = 29, y32 = 5;
	for (int i = 0; i < sll32; i++)
	{
		toa_dovcx32[i] = x32;
		toa_dovcy32[i] = y32;
		x32++;
	}
	int x33 = 29, y33 = 4;
	for (int i = 0; i < sll33; i++)
	{
		toa_dovcx33[i] = x33;
		toa_dovcy33[i] = y33;
		x33++;
	}
}
void ve_vc2()
{
	Textcolor(176);
	_Common::gotoXY(toa_dovcx4[0], toa_dovcy4[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx5[0], toa_dovcy5[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx6[0], toa_dovcy6[0]);
	cout << "       ";

	_Common::gotoXY(toa_dovcx31[0], toa_dovcy31[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx32[0], toa_dovcy32[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx33[0], toa_dovcy33[0]);
	cout << "       ";
	Textcolor(7);
}
void tao_vc3()
{
	int x10 = 6, y10 = 22;
	for (int i = 0; i < sll10; i++)
	{
		toa_dovcx10[i] = x10;
		toa_dovcy10[i] = y10;
		x10++;
	}
	int x11 = 6, y11 = 21;
	for (int i = 0; i < sll11; i++)
	{
		toa_dovcx11[i] = x11;
		toa_dovcy11[i] = y11;
		x11++;
	}
	int x12 = 6, y12 = 20;
	for (int i = 0; i < sll12; i++)
	{
		toa_dovcx12[i] = x12;
		toa_dovcy12[i] = y12;
		x12++;
	}
	int x16 = 52, y16 = 22;
	for (int i = 0; i < sll16; i++)
	{
		toa_dovcx16[i] = x16;
		toa_dovcy16[i] = y16;
		x16++;
	}
	int x17 = 52, y17 = 21;
	for (int i = 0; i < sll17; i++)
	{
		toa_dovcx17[i] = x17;
		toa_dovcy17[i] = y17;
		x17++;
	}
	int x18 = 52, y18 = 20;
	for (int i = 0; i < sll18; i++)
	{
		toa_dovcx18[i] = x18;
		toa_dovcy18[i] = y18;
		x18++;
	}
	int x19 = 6, y19 = 14;
	for (int i = 0; i < sll19; i++)
	{
		toa_dovcx19[i] = x19;
		toa_dovcy19[i] = y19;
		x19++;
	}
	int x20 = 6, y20 = 13;
	for (int i = 0; i < sll20; i++)
	{
		toa_dovcx20[i] = x20;
		toa_dovcy20[i] = y20;
		x20++;
	}
	int x21 = 6, y21 = 12;
	for (int i = 0; i < sll21; i++)
	{
		toa_dovcx21[i] = x21;
		toa_dovcy21[i] = y21;
		x21++;
	}
	int x25 = 52, y25 = 14;
	for (int i = 0; i < sll25; i++)
	{
		toa_dovcx25[i] = x25;
		toa_dovcy25[i] = y25;
		x25++;
	}
	int x26 = 52, y26 = 13;
	for (int i = 0; i < sll26; i++)
	{
		toa_dovcx26[i] = x26;
		toa_dovcy26[i] = y26;
		x26++;
	}
	int x27 = 52, y27 = 12;
	for (int i = 0; i < sll27; i++)
	{
		toa_dovcx27[i] = x27;
		toa_dovcy27[i] = y27;
		x27++;
	}
}

void ve_vc3()
{
	Textcolor(176);
	_Common::gotoXY(toa_dovcx10[0], toa_dovcy10[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx11[0], toa_dovcy11[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx12[0], toa_dovcy12[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx16[0], toa_dovcy16[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx17[0], toa_dovcy17[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx18[0], toa_dovcy18[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx19[0], toa_dovcy19[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx20[0], toa_dovcy20[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx21[0], toa_dovcy21[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx25[0], toa_dovcy25[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx26[0], toa_dovcy26[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx27[0], toa_dovcy27[0]);
	cout << "       ";
	Textcolor(7);
}
void tao_vc4()
{
	int x13 = 29, y13 = 22;
	for (int i = 0; i < sll13; i++)
	{
		toa_dovcx13[i] = x13;
		toa_dovcy13[i] = y13;
		x13++;
	}
	int x14 = 29, y14 = 21;
	for (int i = 0; i < sll14; i++)
	{
		toa_dovcx14[i] = x14;
		toa_dovcy14[i] = y14;
		x14++;
	}
	int x15 = 29, y15 = 20;
	for (int i = 0; i < sll15; i++)
	{
		toa_dovcx15[i] = x15;
		toa_dovcy15[i] = y15;
		x15++;
	}
	int x22 = 29, y22 = 14;
	for (int i = 0; i < sll22; i++)
	{
		toa_dovcx22[i] = x22;
		toa_dovcy22[i] = y22;
		x22++;
	}
	int x23 = 29, y23 = 13;
	for (int i = 0; i < sll23; i++)
	{
		toa_dovcx23[i] = x23;
		toa_dovcy23[i] = y23;
		x23++;
	}
	int x24 = 29, y24 = 12;
	for (int i = 0; i < sll24; i++)
	{
		toa_dovcx24[i] = x24;
		toa_dovcy24[i] = y24;
		x24++;
	}
}

void ve_vc4()
{
	Textcolor(176);
	_Common::gotoXY(toa_dovcx13[0], toa_dovcy13[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx14[0], toa_dovcy14[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx15[0], toa_dovcy15[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx22[0], toa_dovcy22[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx23[0], toa_dovcy23[0]);
	cout << "       ";
	_Common::gotoXY(toa_dovcx24[0], toa_dovcy24[0]);
	cout << "       ";
	Textcolor(7);
}

void tao_lv1()
{
	int xlv1 = 6, ylv1 = 28;
	for (int i = 0; i < sllv1; i++)
	{
		toa_doxlv1[i] = xlv1;
		toa_doylv1[i] = ylv1;
		xlv1++;
	}
	int xlv2 = 40, ylv2 = 24;
	for (int i = 0; i < sllv2; i++)
	{
		toa_doxlv2[i] = xlv2;
		toa_doylv2[i] = ylv2;
		xlv2++;
	}
	int xlv3 = 6, ylv3 = 21;
	for (int i = 0; i < sllv3; i++)
	{
		toa_doxlv3[i] = xlv3;
		toa_doylv3[i] = ylv3;
		xlv3++;
	}
	int xlv4 = 40, ylv4 = 18;
	for (int i = 0; i < sllv4; i++)
	{
		toa_doxlv4[i] = xlv4;
		toa_doylv4[i] = ylv4;
		xlv4++;
	}
	int xlv5 = 6, ylv5 = 16;
	for (int i = 0; i < sllv5; i++)
	{
		toa_doxlv5[i] = xlv5;
		toa_doylv5[i] = ylv5;
		xlv5++;
	}
	int xlv6 = 40, ylv6 = 12;
	for (int i = 0; i < sllv6; i++)
	{
		toa_doxlv6[i] = xlv6;
		toa_doylv6[i] = ylv6;
		xlv6++;
	}
	int xlv7 = 6, ylv7 = 9 ;
	for (int i = 0; i < sllv7; i++)
	{
		toa_doxlv7[i] = xlv7;
		toa_doylv7[i] = ylv7;
		xlv7++;
	}
	int xlv8 = 40 , ylv8 = 6;
	for (int i = 0; i < sllv8; i++)
	{
		toa_doxlv8[i] = xlv8;
		toa_doylv8[i] = ylv8;
		xlv8++;
	}
	
}

void ve_lv1()
{
	Textcolor(176);
	_Common::gotoXY(toa_doxlv1[0], toa_doylv1[0]);
	cout << "                 ";
	_Common::gotoXY(toa_doxlv2[0], toa_doylv2[0]);
	cout << "                 ";
	_Common::gotoXY(toa_doxlv3[0], toa_doylv3[0]);
	cout << "                 ";
	_Common::gotoXY(toa_doxlv4[0], toa_doylv4[0]);
	cout << "                 ";
	_Common::gotoXY(toa_doxlv5[0], toa_doylv5[0]);
	cout << "                 ";
	_Common::gotoXY(toa_doxlv6[0], toa_doylv6[0]);
	cout << "                 ";
	_Common::gotoXY(toa_doxlv7[0], toa_doylv7[0]);
	cout << "                 ";
	_Common::gotoXY(toa_doxlv8[0], toa_doylv8[0]);
	cout << "                 ";
	Textcolor(7);
}
bool gameOver()
{
	// nếu rắn chạm tường
	if ((toado_x[0] == 0 || toado_x[0] == 64) || (toado_y[0] == 0 || toado_y[0] == 32))
	{
		return true;
	}
	// nếu rắn chạm đuôi
	for (int i = 1; i < sl; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toado_x[i] && toado_y[0] == toado_y[i])
		{
			return true;
		}
	}
	// nếu rắn chạm vật cản 1
	if ((toado_x[0] == xcu_vc) && (toado_y[0] == ycu_vc))
	{
		return true;
	}
	for (int i = 1; i < sl; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (xcu_vc == toado_x[i] && ycu_vc == toado_y[i])
		{
			return true;
		}
	}
	// nếu rắn chạm vật cản 2
	if ((toado_x[0] == xcu_vc_1) && (toado_y[0] == ycu_vc_1))
	{
		return true;
	}
	for (int i = 1; i < sl; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (xcu_vc_1 == toado_x[i] && ycu_vc_1 == toado_y[i])
		{
			return true;
		}
	}
	// vat the 1
	for (int i = 0; i <= sll1; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx1[i] && toado_y[0] == toa_dovcy1[i])
		{
			return true;
		}
	}
	// vat the 2
	for (int i = 0; i <= sll2; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx2[i] && toado_y[0] == toa_dovcy2[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll3; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx3[i] && toado_y[0] == toa_dovcy3[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll4; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx4[i] && toado_y[0] == toa_dovcy4[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll5; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx5[i] && toado_y[0] == toa_dovcy5[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll6; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx6[i] && toado_y[0] == toa_dovcy6[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll7; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx3[i] && toado_y[0] == toa_dovcy3[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll7; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx7[i] && toado_y[0] == toa_dovcy7[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll8; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx8[i] && toado_y[0] == toa_dovcy8[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll9; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx9[i] && toado_y[0] == toa_dovcy9[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll10; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx10[i] && toado_y[0] == toa_dovcy10[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll11; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx11[i] && toado_y[0] == toa_dovcy11[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll12; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx12[i] && toado_y[0] == toa_dovcy12[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll13; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx13[i] && toado_y[0] == toa_dovcy13[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll14; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx14[i] && toado_y[0] == toa_dovcy14[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll15; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx15[i] && toado_y[0] == toa_dovcy15[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll16; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx16[i] && toado_y[0] == toa_dovcy16[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll17; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx17[i] && toado_y[0] == toa_dovcy17[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll18; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx18[i] && toado_y[0] == toa_dovcy18[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll19; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx19[i] && toado_y[0] == toa_dovcy19[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll20; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx20[i] && toado_y[0] == toa_dovcy20[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll21; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx21[i] && toado_y[0] == toa_dovcy21[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll22; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx22[i] && toado_y[0] == toa_dovcy22[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll23; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx23[i] && toado_y[0] == toa_dovcy23[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll24; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx24[i] && toado_y[0] == toa_dovcy24[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll25; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx25[i] && toado_y[0] == toa_dovcy25[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll26; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx26[i] && toado_y[0] == toa_dovcy26[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll27; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx27[i] && toado_y[0] == toa_dovcy27[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll28; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx28[i] && toado_y[0] == toa_dovcy28[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll29; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx29[i] && toado_y[0] == toa_dovcy29[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll30; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx30[i] && toado_y[0] == toa_dovcy30[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll31; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx31[i] && toado_y[0] == toa_dovcy31[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll32; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx32[i] && toado_y[0] == toa_dovcy32[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll33; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx33[i] && toado_y[0] == toa_dovcy33[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll34; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx34[i] && toado_y[0] == toa_dovcy34[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll35; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx35[i] && toado_y[0] == toa_dovcy35[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sll36; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x[0] == toa_dovcx36[i] && toado_y[0] == toa_dovcy36[i])
		{
			return true;
		}
	}
	

}
bool gameOver_1()
{
	// nếu rắn chạm tường
	if ((toado_x_1[0] == 0 || toado_x_1[0] == 64) || (toado_y_1[0] == 0 || toado_y_1[0] == 32))
	{
		return true;
	}
	// nếu rắn chạm đuôi
	for (int i = 1; i < sl1; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x_1[0] == toado_x_1[i] && toado_y_1[0] == toado_y_1[i])
		{
			return true;
		}
	}
	// ----- ran 1 cham ran 2
	for (int i = 0; i < sl2; i++) 
	{
		if ((toado_x_1[0] == toado_x_2[i]) && (toado_y_1[0] == toado_y_2[i])) // nếu rắn 1 chạm rắn 2
		{
			return true;
		}
	}
	//---------- ran 1 cham vt dong -----------
	for (int i = 1; i < sl1; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (xcu_vc == toado_x_1[i] && ycu_vc == toado_y_1[i])
		{
			return true;
		}
	}
	//------------ ran 1 cham vt tinh ----------------
	for (int i = 0; i <= sllv1; i++) 
	{
		if (toado_x_1[0] == toa_doxlv1[i] && toado_y_1[0] == toa_doylv1[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sllv2; i++)
	{
		if (toado_x_1[0] == toa_doxlv2[i] && toado_y_1[0] == toa_doylv2[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sllv3; i++) 
	{
		if (toado_x_1[0] == toa_doxlv3[i] && toado_y_1[0] == toa_doylv3[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sllv4; i++)
	{
		if (toado_x_1[0] == toa_doxlv4[i] && toado_y_1[0] == toa_doylv4[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sllv5; i++)
	{
		if (toado_x_1[0] == toa_doxlv5[i] && toado_y_1[0] == toa_doylv5[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sllv6; i++)
	{
		if (toado_x_1[0] == toa_doxlv6[i] && toado_y_1[0] == toa_doylv6[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sllv7; i++)
	{
		if (toado_x_1[0] == toa_doxlv7[i] && toado_y_1[0] == toa_doylv7[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sllv8; i++)
	{
		if (toado_x_1[0] == toa_doxlv8[i] && toado_y_1[0] == toa_doylv8[i])
		{
			return true;
		}
	}
}
// ========== Xử lí thua rắn 1 ==============
bool gameOver_2()
{
	// nếu rắn chạm tường
	if ((toado_x_2[0] == 0 || toado_x_2[0] == 64) || (toado_y_2[0] == 0 || toado_y_2[0] == 32))
	{
		return true;
	}
	// nếu rắn chạm đuôi
	for (int i = 1; i < sl2; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x_2[0] == toado_x_2[i] && toado_y_2[0] == toado_y_2[i])
		{
			return true;
		}
	}
	// nếu rắn chạm vật cản
	if ((toado_x_2[0] == xcu_vc) && (toado_y_2[0] == ycu_vc))
	{
		return true;
	}
	// ---------- ran 2 cham vt dong -----------
	for (int i = 1; i < sl2; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (xcu_vc == toado_x_2[i] && ycu_vc == toado_y_2[i])
		{
			return true;
		}
	}

	// -------- ran 2 cham ran 1 ----------
	
	for (int i = 0; i < sl1; i++) 
	if ((toado_x_2[0] == toado_x_1[i]) && (toado_y_2[0] == toado_y_1[i])) 
	{
		return true;
	}
	// ---------- ran 2 cham vt tinh ----------
	for (int i = 0; i <= sllv1; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x_2[0] == toa_doxlv1[i] && toado_y_2[0] == toa_doylv1[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sllv2; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x_2[0] == toa_doxlv2[i] && toado_y_2[0] == toa_doylv2[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sllv3; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x_2[0] == toa_doxlv3[i] && toado_y_2[0] == toa_doylv3[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sllv4; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x_2[0] == toa_doxlv4[i] && toado_y_2[0] == toa_doylv4[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sllv5; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x_2[0] == toa_doxlv5[i] && toado_y_2[0] == toa_doylv5[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sllv6; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x_2[0] == toa_doxlv6[i] && toado_y_2[0] == toa_doylv6[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sllv7; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x_2[0] == toa_doxlv7[i] && toado_y_2[0] == toa_doylv7[i])
		{
			return true;
		}
	}
	for (int i = 0; i <= sllv8; i++) // bắt đầu từ vị trí 1, bỏ vị trí đầu ra 
	{
		if (toado_x_2[0] == toa_doxlv8[i] && toado_y_2[0] == toa_doylv8[i])
		{
			return true;
		}
	}
	
}
void SetLevelScore()
{
	score += 10;
	if (score >= 20 && level < 2) // level 2
	{
		level++;
		if (level == 2)  speed -= 20;
		tao_buff_fast();
		tao_buff_slow();
		
		
	}
	else if (score >= 50 && level < 3) // level 3
	{
		level++;
		if (level == 3) speed -= 30;
		tao_vc2();
		ve_vc2();
	}
	else if (score >= 100 && level < 4) // level 4
	{
		level++;
		if (level == 4) speed -= 20;
	}
	else if (score >= 150 && level < 5) // level 5
	{
		level++;
		if (level == 5) speed -= 30;
		tao_buff_fast_1();
		tao_buff_slow_1();
		
	}

	else if (score >= 200 && level < 6) // level 6
	{
		level++;
		if (level == 6) speed -= 20;
		tao_vc3();
		ve_vc3();
	}
	else if (score >= 300 && level < 7) // level 7
	{
		level++;
		if (level == 7) speed -= 30;
		tao_buff_fast_2();
		tao_buff_slow_2();
		tao_vc4();
		ve_vc4();
	}
}
void SetLevelScore_1()
{
	score1 += 10;
	if (score1 >= 20 && level1 < 2) // level 2
	{
		level1++;
		if (level1 == 2)  speed1 -= 20;
	}
	else if (score1 >= 50 && level1 < 3) // level 3
	{
		level1++;
		if (level1 == 3) speed1 -= 30;
		
	}
	else if (score1 >= 100 && level1 < 4) // level 4
	{
		level1++;
		if (level1 == 4) speed1 -= 20;
	}
	else if (score1 >= 150 && level1 < 5) // level 5
	{
		level1++;
		if (level1 == 5) speed1 -= 30;
	}

	else if (score1 >= 200 && level1 < 6) // level 6
	{
		level1++;
		if (level1 == 6) speed1 -= 20;
	}
	else if (score1 >= 250 && level1 < 7) // level 7
	{
		level1++;

		if (level1 == 7) speed1 -= 30;
	}
}

void SetLevelScore_2()
{
	score2 += 10;
	if (score2 >= 20 && level2 < 2) // level 2
	{
		level2++;
		if (level2 == 2)  speed2 -= 20;
	}
	else if (score2 >= 50 && level2 < 3) // level 3
	{
		level2++;
		if (level2 == 3) speed2 -= 30;

	}
	else if (score2 >= 100 && level2 < 4) // level 4
	{
		level2++;
		if (level2 == 4) speed2 -= 20;
	}
	else if (score2 >= 150 && level2 < 5) // level 5
	{
		level2++;
		if (level2 == 5) speed2 -= 30;
	}

	else if (score2 >= 200 && level2 < 6) // level 6
	{
		level2++;
		if (level2 == 6) speed2 -= 20;
	}
	else if (score2 >= 250 && level2 < 7) // level 7
	{
		level2++;

		if (level2 == 7) speed2 -= 30;
	}
}

void Let_Go()
{
	// So 3
	int x = 30, y = 11;
	Textcolor(Green);
	_Common::gotoXY(x, y);		     cout << "#######";
	_Common::gotoXY(x - 1, y + 1);  cout << "##     ##";
	_Common::gotoXY(x + 6, y + 2);         cout << "##";
	_Common::gotoXY(x, y + 3);       cout << "#######";
	_Common::gotoXY(x + 6, y + 4);         cout << "##";
	_Common::gotoXY(x - 1, y + 5);  cout << "##     ##";
	_Common::gotoXY(x, y + 6);       cout << "#######";
	Sleep(1000);
	_Common::gotoXY(x, y);		     cout << "       ";
	_Common::gotoXY(x - 1, y + 1);  cout << "         ";
	_Common::gotoXY(x + 6, y + 2);         cout << "  ";
	_Common::gotoXY(x, y + 3);       cout << "       ";
	_Common::gotoXY(x + 6, y + 4);         cout << "  ";
	_Common::gotoXY(x - 1, y + 5);  cout << "          ";
	_Common::gotoXY(x, y + 6);       cout << "       ";

	// So 2
	Sleep(50);
	Textcolor(Pink);
	_Common::gotoXY(x, y);		     cout << "#######";
	_Common::gotoXY(x - 1, y + 1);  cout << "##     ##";
	_Common::gotoXY(x + 6, y + 2);         cout << "##";
	_Common::gotoXY(x, y + 3);       cout << "#######";
	_Common::gotoXY(x - 1, y + 4);  cout << "##";
	_Common::gotoXY(x - 1, y + 5);  cout << "##";
	_Common::gotoXY(x, y + 6);       cout << "########";

	Sleep(1000);
	_Common::gotoXY(x, y);		     cout << "       ";
	_Common::gotoXY(x - 1, y + 1);  cout << "         ";
	_Common::gotoXY(x + 6, y + 2);         cout << "  ";
	_Common::gotoXY(x, y + 3);       cout << "       ";
	_Common::gotoXY(x - 1, y + 4);         cout << "  ";
	_Common::gotoXY(x - 1, y + 5);  cout << "  ";
	_Common::gotoXY(x, y + 6);       cout << "        ";

	//So 1
	Sleep(50);
	Textcolor(DarkYellow);
	_Common::gotoXY(x + 3, y);		     cout << "##";
	_Common::gotoXY(x + 1, y + 1);	   cout << "####";
	_Common::gotoXY(x + 3, y + 2);       cout << "##";
	_Common::gotoXY(x + 3, y + 3);       cout << "##";
	_Common::gotoXY(x + 3, y + 4);       cout << "##";
	_Common::gotoXY(x + 3, y + 5);       cout << "##";
	_Common::gotoXY(x, y + 6);         cout << "########";

	Sleep(1000);
	_Common::gotoXY(x + 3, y);		     cout << "  ";
	_Common::gotoXY(x + 1, y + 1);  cout << "    ";
	_Common::gotoXY(x + 3, y + 2);         cout << "  ";
	_Common::gotoXY(x + 3, y + 3);       cout << "  ";
	_Common::gotoXY(x + 3, y + 4);         cout << "  ";
	_Common::gotoXY(x + 3, y + 5);  cout << "  ";
	_Common::gotoXY(x, y + 6);       cout << "        ";

	// Chu GO
	Textcolor(Red);
	_Common::gotoXY(x - 4, y);		     cout << "#######";
	_Common::gotoXY(x - 5, y + 1);      cout << "########";
	_Common::gotoXY(x - 6, y + 2);      cout << "###";
	_Common::gotoXY(x - 6, y + 3);      cout << "###    ###";
	_Common::gotoXY(x - 6, y + 4);      cout << "###    ###";
	_Common::gotoXY(x - 5, y + 5);       cout << "########";
	_Common::gotoXY(x - 4, y + 6);        cout << "#######";


	_Common::gotoXY(x + 9, y);		     cout << "#######";
	_Common::gotoXY(x + 8, y + 1);      cout << "#########";
	_Common::gotoXY(x + 7, y + 2);     cout << "###     ###";
	_Common::gotoXY(x + 7, y + 3);     cout << "###     ###";
	_Common::gotoXY(x + 7, y + 4);     cout << "###     ###";
	_Common::gotoXY(x + 8, y + 5);      cout << "#########";
	_Common::gotoXY(x + 9, y + 6);       cout << "#######";
	Sleep(1000);
	_Common::gotoXY(x - 4, y);		     cout << "       ";
	_Common::gotoXY(x - 5, y + 1);      cout << "         ";
	_Common::gotoXY(x - 6, y + 2);      cout << "   ";
	_Common::gotoXY(x - 6, y + 3);      cout << "          ";
	_Common::gotoXY(x - 6, y + 4);      cout << "          ";
	_Common::gotoXY(x - 5, y + 5);       cout << "        ";
	_Common::gotoXY(x - 4, y + 6);        cout << "       ";

	_Common::gotoXY(x + 9, y);		     cout << "       ";
	_Common::gotoXY(x + 8, y + 1);      cout << "         ";
	_Common::gotoXY(x + 7, y + 2);     cout << "           ";
	_Common::gotoXY(x + 7, y + 3);     cout << "           ";
	_Common::gotoXY(x + 7, y + 4);     cout << "           ";
	_Common::gotoXY(x + 8, y + 5);      cout << "         ";
	_Common::gotoXY(x + 9, y + 6);       cout << "       ";
}


