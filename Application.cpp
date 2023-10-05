#include<iostream>
#include <cstdlib>
#include <string>
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
void outputArray(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}
}

string emptycheck(int num) {
	string word;
	if (num==0){
		while (true) {
			getline(cin, word);
			if (!word.empty()) {
				break;
			}
			cout << "Вы ввели пустую строку. Попробуйте еще раз." << endl;
		}
	}
	if (num == 1) {
		while (true) {
			getline(cin, word);
			int lenght = word.length();
			if (!word.empty() && lenght==10) {
				break;
			}
			cout << "Ошибка! Попробуйте еще раз." << endl;
		}
	}
	if (num == 2) {
		getline(cin, word);
		if (!word.empty()) {
			word = "-";
		}
	}
	system("cls");
	cout << "Введите данные:\n";
	return word;
}

void inputnum(int pos, int* Efactor, int* Sfactor, int* Gfactor) {
	setlocale(LC_ALL, "Rus");
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

string org() {
	string name, inn, kpp, adres;
	cout << "Введите данные:\nНазвание (обязательно к заполнению): ";
	name = emptycheck(0);
	cout << "Введите ИНН (обязательно к заполнению): ";
	inn = emptycheck(1);
	cout << "Введите КПП: ";
	kpp = emptycheck(2);
	cout << "Введите адрес: ";
	adres = emptycheck(2);
	return name, inn, kpp, adres;
}


int main() {
	setlocale(LC_ALL, "Rus");
	string name, inn, kpp, adres;
	int Efactor[3]{}, Sfactor[7]{}, Gfactor[4]{};

	name, inn, kpp, adres = org();
	cout << "E-фактор (экологические факторы)\n0-11 баллов\n\n";
	inputnum(1, Efactor, Sfactor, Gfactor);
	cout << "S-фактор (социальные факторы)\n0-5 баллов\n\n";
	inputnum(2, Efactor, Sfactor, Gfactor);
	cout << "G-фактор (управленчиские факторы)\n0-8 баллов\n\n";
	inputnum(3, Efactor, Sfactor, Gfactor);

	outputArray(Efactor, 3);
	outputArray(Sfactor, 7);
	outputArray(Gfactor, 4);
	//system("pause"); \t
}
