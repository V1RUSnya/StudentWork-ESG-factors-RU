#include<iostream>
#include <cstdlib>
#include <string>
#include <tuple>
#include <cstdlib>
#include <iomanip>
#include <fstream>
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
		if (word.empty()) {
			word = "-";
		}
	}
	system("cls");
	cout << "Введите данные:\n";
	return word;
}

void inputnum(int pos, int* Efactor, int* Sfactor, int* Gfactor) {
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

struct Organization {
	string name;
	string inn;
	string kpp;
	string adres;
};

Organization  org() {
	Organization orgData;
	cout << "Введите данные:\nНазвание (обязательно к заполнению): ";
	orgData.name = emptycheck(0);
	cout << "Введите ИНН (обязательно к заполнению): ";
	orgData.inn = emptycheck(1);
	cout << "Введите КПП: ";
	orgData.kpp = emptycheck(2);
	cout << "Введите адрес: ";
	orgData.adres = emptycheck(2);
	return orgData;
}

void workstage1(string name, string inn, string kpp, string adres, int* Efactor, int* Sfactor, int* Gfactor) {
	int a, b, c, d, e, f, g, summ1,summ2,summ3, table = 70;
	cout << "Название: " << name << "\nИНН: " << inn << "\nКПП: " << kpp << "\nАдрес: " << adres << endl;

	tie(a, b, c) = { Efactor[0], Efactor[1], Efactor[2] };
	summ1 = a + b + c;
	cout << left << setw(table) << "\nE-фактор (экологические факторы)" << right << summ1 << endl;
	cout << left << setw(table) << "  Энергоэффективность и энергосбережение" << right << a << endl;
	cout << left << setw(table) << "  Инвестиции и расходы на охрану окружающей среды" << right << b << endl;
	cout << left << setw(table) << "  Выбросы, сбросы, образование отходов и их утилизация" << right << c << endl;

	tie(a, b, c, d, e, f, g) = { Sfactor[0],Sfactor[1], Sfactor[2], Sfactor[3], Sfactor[4], Sfactor[5], Sfactor[6] };
	summ2 = a + b + c + d + e + f + g;
	cout << left << setw(table) << "\nS-фактор (социальные факторы)" << right << summ2 << endl;
	cout << left << setw(table) << "  Трудовая практика, занятость" << right << a << endl;
	cout << left << setw(table) << "  Здоровье и безопасность труда" << right << b << endl;
	cout << left << setw(table) << "  Подготовка и образование кадров" << right << c << endl;
	cout << left << setw(table) << "  Гендерный состав работников" << right << d << endl;
	cout << left << setw(table) << "  Практика отношений с поставщиками и покупателями" << right << e << endl;
	cout << left << setw(table) << "  Взаимоотношения с сообществами" << right << f << endl;
	cout << left << setw(table) << "  Ответственность за продукцию/результат" << right << g << endl;

	tie(a, b, c, d) = { Gfactor[0],Gfactor[1], Gfactor[2], Gfactor[3] };
	summ3 = a + b + c + d;
	cout << left << setw(table) << "\nG-фактор (управленчиские факторы)" << right << summ3 << endl;
	cout << left << setw(table) << "  Деловая этика" << right << a << endl;
	cout << left << setw(table) << "  Долгосрочная стратегия развития" << right << b << endl;
	cout << left << setw(table) << "  Аудит и внутренний контроль" << right << c << endl;
	cout << left << setw(table) << "  Риск-менеджмент" << right << d << endl;
	cout << "\nИтого: " << summ1 << "+" << summ2 << "+" << summ3 << "=" << summ1 + summ2 + summ3 << "\n\n\n";
}

void workstage2(string name, string inn, string kpp, string adres, int* Efactor, int* Sfactor, int* Gfactor) {
	int a, b, c, d, e, f, g, summ1, summ2, summ3, table = 70;

	ofstream outputFile;
	outputFile.open(name+".txt", ios::out | ios::app);

	outputFile << "Название: " << name << "\nИНН: " << inn << "\nКПП: " << kpp << "\nАдрес: " << adres << endl;

	tie(a, b, c) = { Efactor[0], Efactor[1], Efactor[2] };
	summ1 = a + b + c;
	outputFile << left << setw(table) << "\nE-фактор (экологические факторы)" << right << summ1 << endl;
	outputFile << left << setw(table) << "  Энергоэффективность и энергосбережение" << right << a << endl;
	outputFile << left << setw(table) << "  Инвестиции и расходы на охрану окружающей среды" << right << b << endl;
	outputFile << left << setw(table) << "  Выбросы, сбросы, образование отходов и их утилизация" << right << c << endl;

	tie(a, b, c, d, e, f, g) = { Sfactor[0],Sfactor[1], Sfactor[2], Sfactor[3], Sfactor[4], Sfactor[5], Sfactor[6] };
	summ2 = a + b + c + d + e + f + g;
	outputFile << left << setw(table) << "\nS-фактор (социальные факторы)" << right << summ2 << endl;
	outputFile << left << setw(table) << "  Трудовая практика, занятость" << right << a << endl;
	outputFile << left << setw(table) << "  Здоровье и безопасность труда" << right << b << endl;
	outputFile << left << setw(table) << "  Подготовка и образование кадров" << right << c << endl;
	outputFile << left << setw(table) << "  Гендерный состав работников" << right << d << endl;
	outputFile << left << setw(table) << "  Практика отношений с поставщиками и покупателями" << right << e << endl;
	outputFile << left << setw(table) << "  Взаимоотношения с сообществами" << right << f << endl;
	outputFile << left << setw(table) << "  Ответственность за продукцию/результат" << right << g << endl;

	tie(a, b, c, d) = { Gfactor[0],Gfactor[1], Gfactor[2], Gfactor[3] };
	summ3 = a + b + c + d;
	outputFile << left << setw(table) << "\nG-фактор (управленчиские факторы)" << right << summ3 << endl;
	outputFile << left << setw(table) << "  Деловая этика" << right << a << endl;
	outputFile << left << setw(table) << "  Долгосрочная стратегия развития" << right << b << endl;
	outputFile << left << setw(table) << "  Аудит и внутренний контроль" << right << c << endl;
	outputFile << left << setw(table) << "  Риск-менеджмент" << right << d << endl;
	outputFile << "\nИтого: " << summ1 << "+" << summ2 << "+" << summ3 << "=" << summ1 + summ2 + summ3 << "\n\n\n";
	cout << "Данные успешно записаны в файл " + name + ".txt." << endl;
	outputFile.close();
}

int main() {
	setlocale(LC_ALL, "Rus");
	system("chcp 1251");
	system("cls");
	int Efactor[3]{}, Sfactor[7]{}, Gfactor[4]{};
	Organization organizationData = org();

	cout << "E-фактор (экологические факторы)\n0-11 баллов\n\n";
	inputnum(1, Efactor, Sfactor, Gfactor);
	cout << "S-фактор (социальные факторы)\n0-5 баллов\n\n";
	inputnum(2, Efactor, Sfactor, Gfactor);
	cout << "G-фактор (управленчиские факторы)\n0-8 баллов\n\n";
	inputnum(3, Efactor, Sfactor, Gfactor);

	workstage1(organizationData.name, organizationData.inn, organizationData.kpp, organizationData.adres, Efactor, Sfactor, Gfactor);
	workstage2(organizationData.name, organizationData.inn, organizationData.kpp, organizationData.adres, Efactor, Sfactor, Gfactor);
	system("pause");
}
