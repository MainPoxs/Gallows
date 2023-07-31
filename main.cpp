#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>
#include <vector>
#include "Game.h"
#include "FileRead.h"

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	FileRead file;               //������ �����
	file.getReadFile();         //� ����� ����� � ������� rand

	Game game;
	game.hideWord(file);       //�������� �����
	game.checkLetter(file);    //������ ����� ��� �����
	game.Statistics(file);    //���������� ����

	return 0;
}