#include<iostream>
#include <cstdlib>
using namespace std;

int inputwitchcheck(int max) {
	int number = 0;
	cin >> number;
	while (number < 0 || number > max) {
		cout << endl << "Ошибка значения, повторите: ";
		cin >> number;
	}
	cout << "OK!" << endl << "Ответ: " << number << " засчитан!" << endl;
	return number;
}

void vvod(int pos, int* Efactor, int* Sfactor, int* Gfactor) {
	setlocale(LC_ALL, "Rus");
	int answerA = 0, answerB = 0, answerC = 0, answerD = 0, answerE = 0, answerF = 0, answerG = 0;
	if (pos == 1) {
		cout << "Энергоэффективность и энергосбережение: ";
		Efactor[0] = inputwitchcheck(11);
		cout << "Инвестиции и расходы на охрану окружающей среды: ";
		Efactor[1] = inputwitchcheck(11);
		cout << "Выбросы, сбросы, образование отходов и их утилизация: ";
		Efactor[2] = inputwitchcheck(11);
	}
	if (pos == 2) {
		cout << "Трудовая практика, занятость: ";
		Sfactor[0] = inputwitchcheck(5);
		cout << "Здоровье и безопасность труда: ";
		Sfactor[1] = inputwitchcheck(5);
		cout << "Подготовка и образование кадров: ";
		Sfactor[2] = inputwitchcheck(5);
		cout << "Гендерный состав работников: ";
		Sfactor[3] = inputwitchcheck(5);
		cout << "Практика отношений с поставщиками и покупателями: ";
		Sfactor[4] = inputwitchcheck(5);
		cout << "Взаимоотношения с сообществами: ";
		Sfactor[5] = inputwitchcheck(5);
		cout << "Ответственность за продукцию/результат: ";
		Sfactor[6] = inputwitchcheck(5);
	}
	if (pos == 3) {
		cout << "Деловая этика: ";
		Gfactor[0] = inputwitchcheck(8);
		cout << "Долгосрочная стратегия развития: ";
		Gfactor[1] = inputwitchcheck(8);
		cout << "Аудит и внутренний контроль: ";
		Gfactor[2] = inputwitchcheck(8);
		cout << "Риск-менеджмент: ";
		Gfactor[3] = inputwitchcheck(8);
	}
	system("cls");
}

void vivod(int* arr, int size) {
	for (int i=0; i < size; i++) {
		cout << arr[i] << endl;
	}
}

int main() {
	int Efactor[3]{}, Sfactor[7]{}, Gfactor[4]{};
	cout << "E-фактор (экологические факторы)\n0-11 баллов\n\n";
	vvod(1, Efactor, Sfactor, Gfactor);
	cout << "S-фактор (социальные факторы)\n0-5 баллов\n\n";
	vvod(2, Efactor, Sfactor, Gfactor);
	cout << "G-фактор (управленчиские факторы)\n0-8 баллов\n\n";
	vvod(3, Efactor, Sfactor, Gfactor);

	vivod(Efactor, 3);
	vivod(Sfactor, 7);
	vivod(Gfactor, 4);
	//system("pause");
}
