#include <iostream>
#include <windows.h>
#include <thread>

void generateSound(double frequency, int duration) {
	Beep(frequency, duration);
}

void printText() {
	std::cout << "Ой у лузі червона калина похилилася,\nчогось наша славна Україна зажурилася.\n";
	std::cout << "А ми тую червону калину підіймемо,\nа ми нашу славну Україну, гей, гей, розвеселимо!.\n";
	std::cout << "А ми тую червону калину підіймемо,\nа ми нашу славну Україну, розвеселимо!.\n";
}
void playMusic() {
	generateSound(392, 800);//Соль
	generateSound(392, 800);//Соль
	generateSound(466.16, 1200);//Си-бемоль або Ля-дієз
	generateSound(392, 400);//Соль
	generateSound(440, 400);//Ля
	generateSound(466.16, 400);//Си-бемоль або Ля-дієз
	generateSound(440, 400);//Ля
	generateSound(392, 400);//Соль
	generateSound(369.99, 800);//Фа-дієз
	generateSound(293.66, 800);//Ре
	generateSound(392, 1200);//Соль
	generateSound(440, 400);//Ля
	generateSound(466.16, 800);//Си-бемоль або Ля-дієз
	generateSound(440, 800);//Ля
	generateSound(392, 1600);//Соль
	Sleep(800);
	generateSound(392, 800);//Соль
	generateSound(392, 800);//Соль
	generateSound(523.25, 1200);//До ІІ
	generateSound(392, 400);//Соль
	generateSound(466.16, 400);//Си-бемоль або Ля-дієз
	generateSound(440, 400);//Ля
	generateSound(392, 400);//Соль
	generateSound(369.99, 400);//Фа-дієз
	generateSound(392, 800);//Соль
	generateSound(293.66, 800);//Ре
	generateSound(392, 1200);//Соль
	generateSound(440, 400);//Ля
	generateSound(466.16, 800);//Си-бемоль або Ля-дієз
	generateSound(440, 800);//Ля
	generateSound(392, 800);//Соль
	generateSound(349.23, 800);//Фа
	//2рази
	generateSound(466.16, 800);//Си-бемоль або Ля-дієз
	generateSound(587.32, 800);//Ре ІІ
	generateSound(698.46, 1200);//Фа ІІ
	generateSound(659.26, 400);//Мі ІІ
	generateSound(698.46, 400);//Фа ІІ
	generateSound(784, 400);//Соль ІІ
	generateSound(698.46, 400);//Фа ІІ
	generateSound(622.26, 400);//Мі-бемоль або ре-дієз ІІ
	generateSound(587.32, 400);//Ре ІІ
	generateSound(523.25, 400);//До ІІ
	generateSound(587.32, 400);//Ре ІІ
	generateSound(622.26, 400);//Мі-бемоль або ре-дієз ІІ
	generateSound(587.32, 400);//Ре ІІ
	generateSound(523.25, 400);//До ІІ
	generateSound(466.16, 400);//Си-бемоль або Ля-дієз
	generateSound(440, 400);//Ля
	generateSound(392, 800);//Соль
	generateSound(466.16, 800);//Си-бемоль або Ля-дієз
	generateSound(587.32, 1200);//Ре ІІ
	generateSound(554.36, 400);//До-дієз ІІ
	generateSound(587.32, 400);//Ре ІІ
	generateSound(622.26, 400);//Мі-бемоль або ре-дієз ІІ
	generateSound(587.32, 400);//Ре ІІ
	generateSound(523.25, 400);//До ІІ
	generateSound(466.16, 400);//Си-бемоль або Ля-дієз
	generateSound(440, 400);//Ля
	//за першим повторенням
	generateSound(392, 400);//Соль
	generateSound(466.16, 400);//Си-бемоль або Ля-дієз
	generateSound(587.32, 800);//Ре ІІ
	generateSound(523.25, 800);//До ІІ
	generateSound(466.16, 400);//Си-бемоль або Ля-дієз
	generateSound(440, 400);//Ля
	generateSound(392, 800);//Соль
	generateSound(349.23, 800);//Фа
	//повторення
	generateSound(466.16, 800);//Си-бемоль або Ля-дієз
	generateSound(587.32, 800);//Ре ІІ
	generateSound(698.46, 1200);//Фа ІІ
	generateSound(659.26, 400);//Мі ІІ
	generateSound(698.46, 400);//Фа ІІ
	generateSound(784, 400);//Соль ІІ
	generateSound(698.46, 400);//Фа ІІ
	generateSound(622.26, 400);//Мі-бемоль або ре-дієз ІІ
	generateSound(587.32, 400);//Ре ІІ
	generateSound(523.25, 400);//До ІІ
	generateSound(587.32, 400);//Ре ІІ
	generateSound(622.26, 400);//Мі-бемоль або ре-дієз ІІ
	generateSound(587.32, 400);//Ре ІІ
	generateSound(523.25, 400);//До ІІ
	generateSound(466.16, 400);//Си-бемоль або Ля-дієз
	generateSound(440, 400);//Ля
	generateSound(392, 800);//Соль
	generateSound(466.16, 800);//Си-бемоль або Ля-дієз
	generateSound(587.32, 1200);//Ре ІІ
	generateSound(554.36, 400);//До-дієз ІІ
	generateSound(587.32, 400);//Ре ІІ
	generateSound(622.26, 400);//Мі-бемоль або ре-дієз ІІ
	generateSound(587.32, 400);//Ре ІІ
	generateSound(523.25, 400);//До ІІ
	generateSound(466.16, 400);//Си-бемоль або Ля-дієз
	generateSound(440, 400);//Ля
	//за другим повторенням
	generateSound(587.32, 800);//Ре ІІ
	generateSound(523.25, 800);//До ІІ
	generateSound(466.16, 400);//Си-бемоль або Ля-дієз
	generateSound(440, 400);//Ля
	generateSound(392, 1600);//Соль
	Sleep(800);
}


int main()
{
	system("chcp 1251>nul");
	std::thread text(printText);
	text.join();
	std::thread music(playMusic);
	music.join();
	return 0;
}