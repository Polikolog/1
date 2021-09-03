//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Spawn
//{
//	string Univ;
//	string Spec;
//	string Addr;
//	int Compet;
//	int Schol;
//};
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	const int size = 3;
//	const int currentYear = 2021;
//	int i, b, counter = 0;
//
//	Spawn a[size];
//	for (i = 0; i < size; i++)
//	{
//		cout << "Введите название университета " << i + 1 << "-ого абитуриента " << endl;
//		cin >> a[i].Univ;
//		cout << endl << "Адрес университета: ";
//		cin >> a[i].position;
//		cout << endl << "Год поступления на работу: ";
//		cin >> a[i].year;
//	}
//	cout << endl << "Введите стаж работы ";
//	cin >> b;
//	cout << endl;
//	for (i = 0; i < size; i++)
//	{
//		if (b < currentYear - a[i].year)
//		{
//			cout << a[i].lastName << " ";
//			counter++;
//		}
//		else
//			if (i == size - 1 && counter > 0)
//				cout << "Работников с более высоким стажем нет.";
//	}
//	return 0;
//}



//#include <iostream>                    
//# define str_len 30                               
//# define size 30  
//using namespace std;
//void enter_new();
//void del();
//void change();
//void out();
//struct Student
//{
//	char name[str_len];
//	int year_of_birth;
//	char department[5];
//};
//struct Student list_of_student[size];
//struct Student bad;
//int current_size = 0; int choice;
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	cout << "Введите:" << endl;
//	cout << "1-для ввода новой записи" << endl;
//	cout << "2-для удаления записи" << endl;
//	cout << "3-для изменения записи" << endl;
//	cout << "4-для вывода записи(ей)" << endl;
//	cout << "5-для выхода" << endl;
//	cin >> choice;
//	do
//	{
//		switch (choice)
//		{
//		case 2:  del();	break;
//		case 1:  enter_new();  break;
//		case 3:  change();  break;
//		case 4:  out();	break;
//		}
//	} while (choice != 5);
//}
//void enter_new()
//{
//	cout << "Ввод информации" << endl;
//	if (current_size < size)
//	{
//		cout << "Строка номер ";
//		cout << current_size + 1;
//		cout << endl << "Фамилия " << endl;
//		cin >> list_of_student[current_size].name;
//		cout << "Год рождения " << endl;
//		cin >> list_of_student[current_size].year_of_birth;
//		cout << "Факультет " << endl;
//		cin >> list_of_student[current_size].department;
//		current_size++;
//	}
//	else
//		cout << "Введено максимальное кол-во строк";
//	cout << "Что дальше?" << endl;
//	cin >> choice;
//}
//void del()
//{
//	int d;
//	cout << "\nНомер строки, которую надо удалить (для удаления всех строк нажать 99)" << endl;
//	cin >> d;
//	if (d != 99)
//	{
//		for (int de1 = (d - 1); de1 < current_size; de1++)
//			list_of_student[de1] = list_of_student[de1 + 1];
//		current_size = current_size - 1;
//	}
//	if (d == 99)
//		for (int i = 0; i < size; i++)
//			list_of_student[i] = bad;
//	cout << "Что дальше?" << endl;
//	cin >> choice;
//}
//void change()
//{
//	int n, per;
//	cout << "\nВведите номер строки" << endl; 	cin >> n;
//	do
//	{
//		cout << "Введите: " << endl;
//		cout << "1-для изменения фамилии" << endl;
//		cout << "2-для изменения года рождения" << endl;
//		cout << "3-для изменения факультета" << endl;
//		cout << "4-конец\n";
//		cin >> per;
//		switch (per)
//		{
//		case 1: cout << "Новая фамилия";
//			cin >> list_of_student[n - 1].name;   break;
//		case 2: cout << "Новый год рождения";
//			cin >> list_of_student[n - 1].year_of_birth; break;
//		case 3: cout << "Новый факультет ";
//			cin >> list_of_student[n - 1].department; break;
//		}
//	} while (per != 4);
//	cout << "Что дальше?" << endl;
//	cin >> choice;
//}
//void out()
//{
//	int sw, n;
//	cout << "1-вывод 1 строки" << endl;
//	cout << "2-вывод всех строк" << endl;
//	cin >> sw;
//	if (sw == 1)
//	{
//		cout << "Номер выводимой строки " << endl;   cin >> n;  cout << endl;
//		cout << "Фамилия ";
//		cout << list_of_student[n - 1].name << endl;
//		cout << "Год рождения ";
//		cout << list_of_student[n - 1].year_of_birth << endl;
//		cout << "Факультет ";
//		cout << list_of_student[n - 1].department << endl;
//	}
//	if (sw == 2)
//	{
//		for (int i = 0; i < current_size; i++)
//		{
//			cout << "Фамилия ";
//			cout << list_of_student[i].name << endl;
//			cout << "Год рождения ";
//			cout << list_of_student[i].year_of_birth << endl;
//			cout << "Факультет ";
//			cout << list_of_student[i].department << endl;
//		}
//	}
//	cout << "Что дальше?" << endl;
//	cin >> choice;
//}
//



/*#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <windows.h>
using namespace std;
struct Abbt {
    string univ;
    string addr;
    string Spec;
    string comp;
    string pay;
};
int EInfo(Abbt* var) {
    string buffer;
    for (int i = 0; i < 3; i++) {
        cout << endl << "Вуз:" << "\t";
        cin >> var[i].univ;
        cout << endl << "Адрес:" << "\t";
        cin >> var[i].addr;
        cout << endl << "Специальность:" << "\t";
        cin >> var[i].Spec;
        cout << endl << "Конкурс:" << "\t";
        cin >> var[i].comp;
        cout << endl << "Стипеньдия:" << "\t";
        cin >> var[i].pay;
        cout << endl;
    }
    return 0;
}
void SInfo(Abbt* var) {
    for (int i = 0; i < 3; i++) {
        cout << "( " << i + 1 << " )" << endl << "Вуз : " << var[i].univ << endl;
        cout << "Адрес: " << var[i].addr << endl;
        cout << "Специальность: " << var[i].Spec << endl;
        cout << "Конкурс: " << var[i].comp << endl;
        cout << "Степеньдия: " << var[i].pay << endl << endl;
    }
}
void DInfo(Abbt* var) {
    int count;
    cout << "Номер специальности: ";
    cin >> count;
    var[count].univ = "...";
    var[count].addr = "...";
    var[count].Spec = "...";
    var[count].comp = "...";
    var[count].pay = "0";
}
void FInfo(Abbt* var) {
    int k = 3;
    string buff;
    while (k != 0) {
        int i = 0;
        cout << "Выберите параметр для поиска:" << endl;
        cout << "1. ВУЗ" << endl;
        cout << "2. Специальность" << endl;
        cout << "Нажмите 0 чтобы закончить поиск" << endl << endl;
        cin >> k;
        switch (k) {
        case 1:
            cout << endl << "Введите ВУЗ" << endl;
            cin >> buff;
            for (int i = 0; i < 3; i++) {
                if (var[i].univ == buff) {
                    cout << "ВУЗ: " << var[i].univ << endl;
                    cout << "Адрес: " << var[i].addr << endl;
                    cout << "Специальность: " << var[i].Spec << endl;
                    cout << "Конкурс: " << var[i].comp << endl;
                    cout << "Стипеньдия: " << var[i].pay << endl << endl;
                }
            }
            break;
        case 2:
            cout << "Введите Специальность" << endl;
            cin >> buff;
            for (int i = 0; i < 3; i++) {
                if (var[i].Spec == buff) {
                    cout << "ВУЗ: " << var[i].univ << endl;
                    cout << "Адрес: " << var[i].addr << endl;
                    cout << "Специальность: " << var[i].Spec << endl;
                    cout << "Конкурс: " << var[i].comp << endl;
                    cout << "Стипеньдия: " << var[i].pay << endl << endl;
                }
            }
            break;
        default: break;
        }
    }
}
void RInfo(const Abbt* var) {
    ofstream file("Uvin1.txt");
    if (!file.is_open()) {
    cout << "ошибка открытия файла!";
    }
    else {
        for (int i = 0; i < 3; i++) {
            file << "ВУЗ: " << var[i].univ << endl;
            file << "Адрес: " << var[i].addr << endl;
            file << "Специальность: " << var[i].Spec << endl;
            file << "Конкурс: " << var[i].comp << endl;
            file << "Сципеньдия: " << var[i].pay << endl << endl;
        }
        file.close();
    }
}
void TInfo(Abbt* var) {
    string text = "";
    ifstream in("Univ2.txt");
    int num = 0;
    char* buff = new char[20];
    if (!in.is_open()) {
        cout << "ошибка открытия файла!";
    }
    else {
        while (!in.eof()) {
            for (int i = 0; i < 6; i++) {
                getline(in, text);
                for (int a = text.find(":") + 2; a < text.length(); a++)
                    buff[a - text.find(":") - 2] = text[a];
                buff[text.length() - text.find(":") - 2] = '\0';
                switch (i) {
                case 0: var[num].univ = buff; break;
                case 1: var[num].addr = buff; break;
                case 2: var[num].Spec = buff; break;
                case 3: var[num].comp = buff; break;
                case 4: var[num].pay = buff; break;
                case 5: break;
                }
            }
            num++;
        }
        in.close();
    }
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    int k = 0;
    Abbt var[3];
    while (k != 7) {
        cout << "Выберите действие:" << endl;
        cout << "1. Ввод элементов структуры с клавиатуры" << endl;
        cout << "2. Вывод элементов структуры в консольное окно" << endl;
        cout << "3. Удаление заданной структурированной переменной" << endl;
        cout << "4. Поиск информации" << endl;
        cout << "5. Запись информации в файл" << endl;
        cout << "6. Чтение данных из файла" << endl;
        cout << "7. Закончить работу" << endl;
        cin >> k;
        cout << endl;
        switch (k) {
        case(1): {EInfo(var);
            break;
        }
        case(2): {SInfo(var);
            break;
        }
        case(3): {DInfo(var);
            break;
        }
        case(4): {FInfo(var);
            break;
        }
        case(5): {RInfo(var);
            break;
        }
        case(6): {TInfo(var);
            break;
        }
        default: break;
        }
    }
    return 0;
}*/



//1 ДОП

/*#include <iostream>
using namespace std;
void input(int size);
void output();
void find(char lastName[]);
typedef struct Exams
{
	char surname[16];
	char name[16];
	char secondname[16];
	char count[3];
	float mark;
} STUD;
int number, markplus = 0, markminus = 0; float per = 0; FILE* f; errno_t err;

int main()
{
	setlocale(LC_ALL, "Russian");
	int choice; char surname[16];
	do
	{
		cout << "\n1. Ввод данных с клавиатуры и запись в файл\n";
		cout << "2. Вывод данных из файла\n";
		cout << "3. Поиск по фамилии\n";
		cout << "4. Процент учащихся со средним баллом >=4.0\n";
		cout << "0. Выход из программы\n\n";
		cout << "Введите номер операции: ";
		cin >> choice;
		switch (choice)
		{
		case 1: cout << "Введите количество студентов, данные о которых хотите ввести: ";
			cin >> number;
			input(number);
			cout << endl; break;
		case 2: output(); break;
		case 3: {  cout << "Введите фамилию: ";
			cin >> surname;
			find(surname); break;
		}
		case 4: { per = ((float)markplus / (float)markminus) * 100;
			cout << "На данный момент процент учащихся со средним баллов больше или равно 4 - " << per << "%." << endl;
			break;
		}
		case 0: exit(0);  break;
		}
	} while (choice != 0);
}

void input(int size)
{
	STUD buf = { ' ', ' ' };
	if (!fopen_s(&f, "exams.txt", "ab"))
	{
		for (int p = 0; p < size; p++)
		{
			cout << "Фамилия: "; 	cin >> buf.surname;
			cout << "Имя: "; 	cin >> buf.name;
			cout << "Отчество: "; 	cin >> buf.secondname;
			cout << "Количество экзаменов: "; 	cin >> buf.count;
			cout << "Средний балл: "; 	cin >> buf.mark;
			cout << endl;
			if (buf.mark >= 4) { markplus++; }
			else { markminus++; };
			fwrite(&buf, sizeof(buf), 1, f);
		}
		fclose(f);
	}
	else {
		cout << "Ошибка открытия файла";
		return;
	}
}

void output()
{
	STUD buf;
	if (!fopen_s(&f, "exams.txt", "rb"))
	{
		fread(&buf, sizeof(buf), 1, f);
		while (!feof(f))
		{
			cout << "Фамилия: "<<endl<<buf.surname<<endl;
			cout << "Имя: "<<endl<< buf.name<<endl;
			cout << "Отчество: "<<endl<< buf.secondname<<endl;
			cout << "Количество экзаменов: "<<endl<< buf.count<<endl;
			cout << "Средний балл: "<<endl<<buf.mark<<endl;
			fread(&buf, sizeof(buf), 1, f);
		}
		cout << endl;
		fclose(f);
	}
	else
	{
		cout << "Ошибка открытия файла";
		return;
	}
}

void find(char lastName[16])
{
	bool flag = false;  STUD buf;
	if (!fopen_s(&f, "exams.txt", "rb"))
	{
		while (!feof(f))
		{
			fread(&buf, sizeof(buf), 1, f);
			if (strcmp(lastName, buf.surname) == 0)   //сравнение строк
			{
				cout << "Фамилия: " << endl << buf.surname << endl;
				cout << "Имя: " << endl << buf.name << endl;
				cout << "Отчество: " << endl << buf.secondname << endl;
				cout << "Количество экзаменов: " << endl << buf.count << endl;
				cout << "Средний балл: " << endl << buf.mark << endl;
				flag = true; break;
			}
		}
		fclose(f);
		if (!flag) cout << "Ничего не найдено\n";
	}
	else
	{
		cout << "Ошибка открытия файла";
		return;
	}
}*/



//ДОП 2

/*#include <iostream>
using namespace std;
void input(int size);
void output();
void finds(char lastName[]);
void findh(int h, int m);
typedef struct Train
{
	char city[16];
	char num[16];
	int dateh;
	int datem;
} STUD;
int number, adateh = 0, adatem = 0; FILE *f; errno_t err;

int main()
{
	setlocale(LC_ALL, "Russian");
	int choice; char city[16];
	do
	{
		cout << "\n1. Ввод данных с клавиатуры и запись в файл\n";
		cout << "2. Вывод данных из файла\n";
		cout << "3. Поиск по пункту назначения\n";
		cout << "4. Поиск позже определенного времени отправления\n";
		cout << "0. Выход из программы\n\n";
		cout << "Введите номер операции: ";
		cin >> choice;
		switch (choice)
		{
		case 1: cout << "Введите количество рейсов, информацию о которых вы хотите ввести: ";
			cin >> number;
			input(number);
			cout << endl; break;
		case 2: output(); break;
		case 3: {  cout << "Введите пункт назначения: ";
			cin >> city;
			finds(city); break;
		}
		case 4: { cout << "Введите время отправления (часы, 0-23)";
			cin >> adateh;
			cout << "Введите время отправления (минуты, 0-59)";
			cin >> adatem;
			findh(adateh, adatem);
			break;
		}
		case 0: exit(0);  break;
		}
	} while (choice != 0);
}

void input(int size)
{
	STUD buf = { ' ', ' ' };
	if (!fopen_s(&f, "train.txt", "ab"))
	{
		for (int p = 0; p < size; p++)
		{
			cout << "Пункт назначения: "; 	cin >> buf.city;
			cout << "Номер рейса: "; 	cin >> buf.num;
			cout << "Время отправления (часы): "; 	cin >> buf.dateh;
			cout << "Время отправления (минуты): "; 	cin >> buf.datem;
			cout << endl;
			fwrite(&buf, sizeof(buf), 1, f);
		}
		fclose(f);
	}
	else {
		cout << "Ошибка открытия файла";
		return;
	}
}

void output()
{
	STUD buf;
	if (!fopen_s(&f, "train.txt", "rb"))
	{
		fread(&buf, sizeof(buf), 1, f);
		while (!feof(f))
		{
			cout << "\nПункт назначения" << endl << buf.city << endl;
			cout << "Номер рейса" << endl << buf.num << endl;
			cout << "Время отправления" << endl << buf.dateh << ":" << buf.datem << endl;
			fread(&buf, sizeof(buf), 1, f);
		}
		cout << endl;
		fclose(f);
	}
	else
	{
		cout << "Ошибка открытия файла";
		return;
	}
}

void finds(char lastName[16])
{
	bool flag = false;  STUD buf;
	if (!fopen_s(&f, "train.txt", "rb"))
	{
		while (!feof(f))
		{
			fread(&buf, sizeof(buf), 1, f);
			if (strcmp(lastName, buf.city) == 0)  
			{
				cout << "\nПункт назначения" << endl << buf.city << endl;
				cout << "Номер рейса" << endl << buf.num <<endl;
				cout << "Время отправления" << endl << buf.dateh << ":" << buf.datem << endl;
				flag = true; break;
			}
		}
		fclose(f);
		if (!flag) cout << "Ничего не найдено\n";
	}
	else
	{
		cout << "Ошибка открытия файла";
		return;
	}
}

void findh(int h, int m)
{
	bool flag = false;  STUD buf;
	if (!fopen_s(&f, "train.txt", "rb"))
	{
		while (!feof(f))
		{
			fread(&buf, sizeof(buf), 1, f);
			if ((buf.dateh > h) || (h == buf.dateh && buf.datem > m))
			{
				cout << "\nПункт назначения" << endl << buf.city << endl;
				cout << "Номер рейса" << endl << buf.num << endl;
				cout << "Время отправления" << endl << buf.dateh << ":" << buf.datem << endl;
				flag = true; break;
			}
		}
		fclose(f);
		if (!flag) cout << "Ничего не найдено\n";
	}
	else
	{
		cout << "Ошибка открытия файла";
		return;
	}
}*/




//3 ДОП

#include <iostream>
using namespace std;
void input(int size);
void output();
void finds(char lastName[]);
void findh(char lastHeal[]);
typedef struct Exams
{
	char name[16];
	char place[16];
	char prof[16];
	int num;
} STUD;
int number; FILE *f; errno_t err;

int main()
{
	setlocale(LC_ALL, "Russian");
	int choice; char name[16], prof[16];
	do
	{
		cout << "\n1. Ввод данных с клавиатуры и запись в файл\n";
		cout << "2. Вывод данных из файла\n";
		cout << "3. Поиск по названию санатория\n";
		cout << "4. Поиск по лечебному профилю\n";
		cout << "0. Выход из программы\n\n";
		cout << "Введите номер операции: ";
		cin >> choice;
		switch (choice)
		{
		case 1: cout << "Введите количество студентов, данные о которых хотите ввести: ";
			cin >> number;
			input(number);
			cout << endl; break;
		case 2: output(); break;
		case 3: {  cout << "Введите название: ";
			cin >> name;
			finds(name); break;
		}
		case 4: { cout << "Введите лечебный профиль: ";
			cin >> prof;
			findh(prof); break;
		}
		case 0: exit(0);  break;
		}
	} while (choice != 0);
}

void input(int size)
{
	STUD buf = { ' ', ' ' };
	if (!fopen_s(&f, "travel.txt", "ab"))
	{
		for (int p = 0; p < size; p++)
		{
			cout << "Название санатория: "; 	cin >> buf.name;
			cout << "Местонахождение: "; 	cin >> buf.place;
			cout << "Лечебный профиль: "; 	cin >> buf.prof;
			cout << "Количество оставшихся путевок: "; 	cin >> buf.num;
			cout << endl;
			fwrite(&buf, sizeof(buf), 1, f);
		}
		fclose(f);
	}
	else {
		cout << "Ошибка открытия файла";
		return;
	}
}

void output()
{
	STUD buf;
	if (!fopen_s(&f, "travel.txt", "rb"))
	{
		fread(&buf, sizeof(buf), 1, f);
		while (!feof(f))
		{
			cout << "Название санатория: " << endl<<  buf.name<<endl;
			cout << "Местонахождение: "<<endl<< buf.place<<endl;
			cout << "Лечебный профиль: "<<endl<<buf.prof<<endl;
			cout << "Количество оставшихся путевок: "<<endl<< buf.num<<endl;
			fread(&buf, sizeof(buf), 1, f);
		}
		cout << endl;
		fclose(f);
	}
	else
	{
		cout << "Ошибка открытия файла";
		return;
	}
}

void finds(char lastName[16])
{
	bool flag = false;  STUD buf;
	if (!fopen_s(&f, "travel.txt", "rb"))
	{
		while (!feof(f))
		{
			fread(&buf, sizeof(buf), 1, f);
			if (strcmp(lastName, buf.name) == 0)   //сравнение строк
			{
				cout << "Название санатория: " << endl << buf.name << endl;
				cout << "Местонахождение: " << endl << buf.place << endl;
				cout << "Лечебный профиль: " << endl << buf.prof << endl;
				cout << "Количество оставшихся путевок: " << endl << buf.num << endl;
				flag = true; break;
			}
		}
		fclose(f);
		if (!flag) cout << "Ничего не найдено\n";
	}
	else
	{
		cout << "Ошибка открытия файла";
		return;
	}
}

void findh(char lastHeal[16])
{
	bool flag = false;  STUD buf;
	if (!fopen_s(&f, "travel.txt", "rb"))
	{
		while (!feof(f))
		{
			fread(&buf, sizeof(buf), 1, f);
			if (strcmp(lastHeal, buf.prof) == 0)   //сравнение строк
			{
				cout << "Название санатория: " << endl << buf.name << endl;
				cout << "Местонахождение: " << endl << buf.place << endl;
				cout << "Лечебный профиль: " << endl << buf.prof << endl;
				cout << "Количество оставшихся путевок: " << endl << buf.num << endl;
				flag = true; break;
			}
		}
		fclose(f);
		if (!flag) cout << "Ничего не найдено\n";
	}
	else
	{
		cout << "Ошибка открытия файла";
		return;
	}
}