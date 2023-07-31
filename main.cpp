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

	FileRead file;               //Чтение файла
	file.getReadFile();         //и выбор слова с помощью rand

	Game game;
	game.hideWord(file);       //Скрываем слово
	game.checkLetter(file);    //Вводим букву или слово
	game.Statistics(file);    //Статистика игры

	return 0;
}