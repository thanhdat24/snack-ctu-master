#include"_Game.h"
using namespace std;

void P()
{
	int x = 42, y = 5;
	Textcolor(Red);
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x - 4, y);		     cout << "#######";
	_Common::gotoXY(x - 5, y + 1);      cout << "########";
	_Common::gotoXY(x - 6, y + 2);      cout << "###";
	_Common::gotoXY(x - 6, y + 3);      cout << "###    ###";
	_Common::gotoXY(x - 6, y + 4);      cout << "###    ###";
	_Common::gotoXY(x - 5, y + 5);       cout << "########";
	_Common::gotoXY(x - 4, y + 6);        cout << "#######";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x + 6, y);		     cout << "      ##  ";
	_Common::gotoXY(x + 5, y + 1);      cout << "      ####";
	_Common::gotoXY(x + 4, y + 2);     cout << "      ##  ##";
	_Common::gotoXY(x + 4, y + 3);     cout << "     ##    ##";
	_Common::gotoXY(x + 4, y + 4);     cout << "    ##########";
	_Common::gotoXY(x + 5, y + 5);      cout << "  ##        ##";
	_Common::gotoXY(x + 6, y + 6);       cout << "##          ##";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x + 23, y);		     cout << "##           ##  ";
	_Common::gotoXY(x + 22, y + 1);     cout << " ####       ####";
	_Common::gotoXY(x + 21, y + 2);    cout << "  ##   ##  ##  ##";
	_Common::gotoXY(x + 21, y + 3);    cout << "  ##    ####   ##";
	_Common::gotoXY(x + 21, y + 4);    cout << "  ##     ##    ##";
	_Common::gotoXY(x + 22, y + 5);     cout << " ##           ##";
	_Common::gotoXY(x + 23, y + 6);      cout << "##           ##";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x + 41, y);		     cout << "##########";
	_Common::gotoXY(x + 40, y + 1);     cout << " ##";
	_Common::gotoXY(x + 39, y + 2);    cout << "  ## ";
	_Common::gotoXY(x + 39, y + 3);    cout << "  ##########";
	_Common::gotoXY(x + 39, y + 4);    cout << "  ##";
	_Common::gotoXY(x + 40, y + 5);     cout << " ## ";
	_Common::gotoXY(x + 41, y + 6);      cout << "##########";

	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x - 4, y + 8);		  cout << "#######";
	_Common::gotoXY(x - 5, y + 9 );      cout << "#########";
	_Common::gotoXY(x - 6, y + 10);     cout << "###     ###";
	_Common::gotoXY(x - 6, y + 11);     cout << "###     ###";
	_Common::gotoXY(x - 6, y + 12);     cout << "###     ###";
	_Common::gotoXY(x - 5, y + 13);      cout << "#########";
	_Common::gotoXY(x - 4, y + 14);       cout << "#######";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x + 6, y + 8);		 cout << "##          ##";
	_Common::gotoXY(x + 5, y + 9);      cout << "  ##        ##";
	_Common::gotoXY(x + 5, y + 10);     cout << "   ##      ##";
	_Common::gotoXY(x + 5, y + 11);     cout << "    ##    ##";
	_Common::gotoXY(x + 5, y + 12);     cout << "     ##  ##";
	_Common::gotoXY(x + 6, y + 13);      cout << "     ####";
	_Common::gotoXY(x + 7, y + 14);       cout << "     ## ";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x + 25, y + 8);		  cout << "##########";
	_Common::gotoXY(x + 24, y + 9);      cout << " ##";
	_Common::gotoXY(x + 23, y + 10);    cout << "  ## ";
	_Common::gotoXY(x + 23, y + 11);    cout << "  ##########";
	_Common::gotoXY(x + 23, y + 12);    cout << "  ##";
	_Common::gotoXY(x + 24, y + 13);     cout << " ## ";
	_Common::gotoXY(x + 25, y + 14);      cout << "##########";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x + 41, y + 8);		  cout << "##########";
	_Common::gotoXY(x + 40, y + 9);      cout << " ##       ##";
	_Common::gotoXY(x + 39, y + 10);    cout << "  ##      ##";
	_Common::gotoXY(x + 39, y + 11);    cout << "  #########";
	_Common::gotoXY(x + 39, y + 12);    cout << "  ##      ##";
	_Common::gotoXY(x + 40, y + 13);     cout << " ##       ##";
	_Common::gotoXY(x + 41, y + 14);      cout << "##        ##";
}

void P_1()
{
	int x = 42, y = 5;
	Textcolor(Blue);
	
	_Common::gotoXY(x - 4, y);		     cout << "#######";
	_Common::gotoXY(x - 5, y + 1);      cout << "########";
	_Common::gotoXY(x - 6, y + 2);      cout << "###";
	_Common::gotoXY(x - 6, y + 3);      cout << "###    ###";
	_Common::gotoXY(x - 6, y + 4);      cout << "###    ###";
	_Common::gotoXY(x - 5, y + 5);       cout << "########";
	_Common::gotoXY(x - 4, y + 6);        cout << "#######";
	Textcolor(Blue);
	_Common::gotoXY(x + 6, y);		     cout << "      ##  ";
	_Common::gotoXY(x + 5, y + 1);      cout << "      ####";
	_Common::gotoXY(x + 4, y + 2);     cout << "      ##  ##";
	_Common::gotoXY(x + 4, y + 3);     cout << "     ##    ##";
	_Common::gotoXY(x + 4, y + 4);     cout << "    ##########";
	_Common::gotoXY(x + 5, y + 5);      cout << "  ##        ##";
	_Common::gotoXY(x + 6, y + 6);       cout << "##          ##";
	Textcolor(Blue);
	_Common::gotoXY(x + 23, y);		     cout << "##           ##  ";
	_Common::gotoXY(x + 22, y + 1);     cout << " ####       ####";
	_Common::gotoXY(x + 21, y + 2);    cout << "  ##   ##  ##  ##";
	_Common::gotoXY(x + 21, y + 3);    cout << "  ##    ####   ##";
	_Common::gotoXY(x + 21, y + 4);    cout << "  ##     ##    ##";
	_Common::gotoXY(x + 22, y + 5);     cout << " ##           ##";
	_Common::gotoXY(x + 23, y + 6);      cout << "##           ##";
	Textcolor(Blue);
	_Common::gotoXY(x + 41, y);		     cout << "##########";
	_Common::gotoXY(x + 40, y + 1);     cout << " ##";
	_Common::gotoXY(x + 39, y + 2);    cout << "  ## ";
	_Common::gotoXY(x + 39, y + 3);    cout << "  ##########";
	_Common::gotoXY(x + 39, y + 4);    cout << "  ##";
	_Common::gotoXY(x + 40, y + 5);     cout << " ## ";
	_Common::gotoXY(x + 41, y + 6);      cout << "##########";
	Textcolor(Red);
	_Common::gotoXY(x - 4, y + 8);		  cout << "#######";
	_Common::gotoXY(x - 5, y + 9);      cout << "#########";
	_Common::gotoXY(x - 6, y + 10);     cout << "###     ###";
	_Common::gotoXY(x - 6, y + 11);     cout << "###     ###";
	_Common::gotoXY(x - 6, y + 12);     cout << "###     ###";
	_Common::gotoXY(x - 5, y + 13);      cout << "#########";
	_Common::gotoXY(x - 4, y + 14);       cout << "#######";
	Textcolor(Red);
	_Common::gotoXY(x + 6, y + 8);		 cout << "##          ##";
	_Common::gotoXY(x + 5, y + 9);      cout << "  ##        ##";
	_Common::gotoXY(x + 5, y + 10);     cout << "   ##      ##";
	_Common::gotoXY(x + 5, y + 11);     cout << "    ##    ##";
	_Common::gotoXY(x + 5, y + 12);     cout << "     ##  ##";
	_Common::gotoXY(x + 6, y + 13);      cout << "     ####";
	_Common::gotoXY(x + 7, y + 14);       cout << "     ## ";
	Textcolor(Red);
	_Common::gotoXY(x + 25, y + 8);		  cout << "##########";
	_Common::gotoXY(x + 24, y + 9);      cout << " ##";
	_Common::gotoXY(x + 23, y + 10);    cout << "  ## ";
	_Common::gotoXY(x + 23, y + 11);    cout << "  ##########";
	_Common::gotoXY(x + 23, y + 12);    cout << "  ##";
	_Common::gotoXY(x + 24, y + 13);     cout << " ## ";
	_Common::gotoXY(x + 25, y + 14);      cout << "##########";
	Textcolor(Red);
	_Common::gotoXY(x + 41, y + 8);		  cout << "##########";
	_Common::gotoXY(x + 40, y + 9);      cout << " ##       ##";
	_Common::gotoXY(x + 39, y + 10);    cout << "  ##      ##";
	_Common::gotoXY(x + 39, y + 11);    cout << "  #########";
	_Common::gotoXY(x + 39, y + 12);    cout << "  ##      ##";
	_Common::gotoXY(x + 40, y + 13);     cout << " ##       ##";
	_Common::gotoXY(x + 41, y + 14);      cout << "##        ##";
}
void P1()
{
	int i = 10, j = 10;
	_Common::gotoXY(i, j);     cout << " .----------------.  .----------------.   .----------------.  .----------------.  .-----------------.";
	_Common::gotoXY(i, j + 1); cout << "| .--------------. || .--------------. | | .--------------. || .--------------. || .--------------. |";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(i, j + 2); cout << "| |   ______     | || |     __       | | | | _____  _____ | || |     _____    | || | ____  _____  | |";
	_Common::gotoXY(i, j + 3); cout << "| |  |_   __ " << char(92) << "   | || |    /  |      | | | ||_   _||_   _|| || |    |_   _|   | || ||_   " << char(92) << "|_   _| | |";
	_Common::gotoXY(i, j + 4); cout << "| |    | |__) |  | || |    `| |      | | | |  | | /" << char(92) << " | |  | || |      | |     | || |  |   " << char(92) << " | |   | |";
	_Common::gotoXY(i, j + 5); cout << "| |    |  ___/   | || |     | |      | | | |  | |/  " << char(92) << "| |  | || |      | |     | || |  | |" << char(92) << " " << char(92) << "| |   | |";
	_Common::gotoXY(i, j + 6); cout << "| |   _| |_      | || |    _| |_     | | | |  |   /" << char(92) << "   |  | || |     _| |_    | || | _| |_" << char(92) << "   |_  | |";
	_Common::gotoXY(i, j + 7); cout << "| |  |_____|     | || |   |_____|    | | | |  |__/  " << char(92) << "__|  | || |    |_____|   | || ||_____|" << char(92) << "____| | |";
	_Common::gotoXY(i, j + 8); cout << "| |              | || |              | | | |              | || |              | || |              | |";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(i, j + 9); cout << "| '--------------' || '--------------' | | '--------------' || '--------------' || '--------------' |";
	_Common::gotoXY(i, j + 10); cout << " '----------------'  '----------------'   '----------------'  '----------------'  '----------------' ";
}

void P2()
{
	int i = 10, j = 10;
	_Common::gotoXY(i, j);     cout << " .----------------.  .----------------.   .----------------.  .----------------.  .-----------------.";
	_Common::gotoXY(i, j + 1); cout << "| .--------------. || .--------------. | | .--------------. || .--------------. || .--------------. |";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(i, j + 2); cout << "| |   ______     | || |    _____     | | | | _____  _____ | || |     _____    | || | ____  _____  | |";
	_Common::gotoXY(i, j + 3); cout << "| |  |_   __ " << char(92) << "   | || |   / ___ `.   | | | ||_   _||_   _|| || |    |_   _|   | || ||_   " << char(92) << "|_   _| | |";
	_Common::gotoXY(i, j + 4); cout << "| |    | |__) |  | || |  |_/___) |   | | | |  | | /" << char(92) << " | |  | || |      | |     | || |  |   " << char(92) << " | |   | |";
	_Common::gotoXY(i, j + 5); cout << "| |    |  ___/   | || |   .'____.'   | | | |  | |/  " << char(92) << "| |  | || |      | |     | || |  | |" << char(92) << " " << char(92) << "| |   | |";
	_Common::gotoXY(i, j + 6); cout << "| |   _| |_      | || |  / /____     | | | |  |   /" << char(92) << "   |  | || |     _| |_    | || | _| |_" << char(92) << "   |_  | |";
	_Common::gotoXY(i, j + 7); cout << "| |  |_____|     | || |  |_______|   | | | |  |__/  " << char(92) << "__|  | || |    |_____|   | || ||_____|" << char(92) << "____| | |";
	_Common::gotoXY(i, j + 8); cout << "| |              | || |              | | | |              | || |              | || |              | |";
	Textcolor(rand() % 15 + 1);
	_Common::gotoXY(i, j + 9); cout << "| '--------------' || '--------------' | | '--------------' || '--------------' || '--------------' |";
	_Common::gotoXY(i, j + 10); cout << " '----------------'  '----------------'   '----------------'  '----------------'  '----------------' ";
}

void Box()
{
	int i = 8, j = 8;
	_Common::gotoXY(i, j);
	for (int i = 0; i < 110; i++) {
		Textcolor(rand() % 15 + 1);
		Sleep(1);
		cout << char(178);
	}
	_Common::gotoXY(i, j + 14);
	for (int i = 0; i < 110; i++) {
		Textcolor(rand() % 15 + 1);
		Sleep(1);
		cout << char(178);
	}
	Textcolor(Cyan);
	_Common::gotoXY(50, j + 18);
	cout << "Y   : Play Again";
	_Common::gotoXY(50, j + 19);
	cout << "ESC : BACK";
}

void PWIN()
{
	int i = 8, j = 8;
	AnTroChuot();
	int check = 1;
	//Box();
	Textcolor(Cyan);
	_Common::gotoXY(50, j + 18);
	cout << "Y   : Play Again";
	_Common::gotoXY(50, j + 19);
	cout << "ESC : BACK";
	while (check < 30)
	{
		P();
		Sleep(200);
		check++;
	}
	P_1();
}

void P1WIN()
{
	AnTroChuot();
	int check = 1;
	Box();
	while (check < 30)
	{
		P1();
		Sleep(200);
		check++;
	}
}
void P2WIN()
{
	AnTroChuot();
	int check = 1;
	Box();
	while (check < 30)
	{
		P2();
		Sleep(200);
		check++;
	}
}

