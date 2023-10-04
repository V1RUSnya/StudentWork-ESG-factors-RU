#include<iostream>
#include <cstdlib> //system("cls");
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
		answerA = inputwitchcheck(11);

		cout << "Инвестиции и расходы на охрану окружающей среды: ";
		answerB = inputwitchcheck(11);

		cout << "Выбросы, сбросы, образование отходов и их утилизация: ";
		answerC = inputwitchcheck(11);

		Efactor[0] = answerA;
		Efactor[1] = answerB;
		Efactor[2] = answerC;
	}
	if (pos == 2) {
		cout << "Трудовая практика, занятость: ";
		answerA = inputwitchcheck(5);

		cout << "Здоровье и безопасность труда: ";
		answerB = inputwitchcheck(5);

		cout << "Подготовка и образование кадров: ";
		answerC = inputwitchcheck(5);

		cout << "Гендерный состав работников: ";
		answerD = inputwitchcheck(5);

		cout << "Практика отношений с поставщиками и покупателями: ";
		answerE = inputwitchcheck(5);

		cout << "Взаимоотношения с сообществами: ";
		answerF = inputwitchcheck(5);

		cout << "Ответственность за продукцию/результат: ";
		answerG = inputwitchcheck(5);

		Sfactor[0] = answerA;
		Sfactor[1] = answerB;
		Sfactor[2] = answerC;
		Sfactor[3] = answerD;
		Sfactor[4] = answerE;
		Sfactor[5] = answerF;
		Sfactor[6] = answerG;
	}
	if (pos == 3) {
		cout << "Деловая этика: ";
		answerA = inputwitchcheck(8);

		cout << "Долгосрочная стратегия развития: ";
		answerB = inputwitchcheck(8);

		cout << "Аудит и внутренний контроль: ";
		answerC = inputwitchcheck(8);

		cout << "Риск-менеджмент: ";
		answerC = inputwitchcheck(8);

		Gfactor[0] = answerA;
		Gfactor[1] = answerB;
		Gfactor[2] = answerC;
		Gfactor[3] = answerC;
	}
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
