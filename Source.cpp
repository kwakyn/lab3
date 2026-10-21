             //Лабораторна робота #3 Романовича Іллі учня КН11 2026 21.10.2026




//Завдання 1
//Користувач вводить сторони трикутника.Визначити чи можливо побудувати трикутник на таких сторонах.
//Для розв'язування використати тип bool (без IF).


//#include <iostream>
//
//using namespace std;
//int main() {
//    int a, b, c;
//    cout << "Enter the side triangle:" << endl;
//    cin >> a;
//    cin >> b;
//    cin >> c;
//
//    cout << boolalpha;
//    bool can_build = (a + b > c) && (a + c > b) && (b + c > a);
//    cout << "Can build? : " << can_build << endl;
//    return 0;
//    
//}

//Завдання 2
//Використавши тернарну умовну операцію, знайти менше з двох введених чисел.
//#include <iostream>
//using namespace std;
//int main() {
//    int a, b;
//    cout << "Enter a and b digits: " << endl;
//    cout << "A:";cin >> a;
//    cout << "B:";cin >> b;
//
//    cout << ((a > b) ? "A biggest" : "B biggest") << endl;
//    return 0;
//}

//Завдання 3
//Дано номер року.Використавши тернарну умовну операцію, визначити чи рік високосний.
//Рік високосний, якщо число року ділиться націло на 4 і не ділиться на 100
//(наприклад, високосними є 2004, 2016 роки).Серед років, номер яких ділиться на 100, високосними є ті, що діляться на 400
//(наприклад, 1600, 2000 – високосні, а 1700, 1900 – ні).


//#include <iostream>
//using namespace std;
//int main() {
//    int year;
//    cout << "Enter random years:" << endl;
//    cout << "Year:";cin >> year;
//
//    bool vis_year = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//    cout << (vis_year ? "Leap year" : "Not leap year") << endl;
//    return 0;
//}

//Завдання 4
//Дано ціле число.Вивести його рядок - опис виду «від’ємне парне число», «нульове число», «додатне непарне число» і так далі.

//#include <iostream>
//using namespace std;
//int main() {
//    int numbers;
//    cout << "Enter your number:" << endl;
//    cout << "Number:"; cin >> numbers;
//    bool plus_numb = (numbers > 0);
//    bool parn_numb = (numbers % 2 == 0);
//    cout << "Number is:"
//        << (plus_numb ? "Dodatne" : "Vidyimne")
//        << " and "
//        << (parn_numb ? "Parne" : "Neparne")
//        << endl;
//    return 0;
//}

/*Завдання 5
Користувач вводить з клавіатури ціле шестизначне число.Написати програму, яка визначає, чи є введене число щасливим
(щасливим вважається шестизначне число, у якого сума перших 3 цифр дорівнює сумі решти трьох цифр).
Якщо користувач ввів не шестизначне число, вивести повідомлення про помилку*/

//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//    int sixarr;
//    cout << "Enter six letter number:" << endl;
//    cout << "Number:";cin >> sixarr;
//
//    if (sixarr < 100000 || sixarr > 999999) {
//        cout << "Error: enter exactly 6 digits!" << endl;
//    }
//    
//    else {
//        int d1 = sixarr / 100000;
//        int d2 = (sixarr / 10000) % 10;
//        int d3 = (sixarr / 1000) % 10;
//        int d4 = (sixarr / 100) % 10;
//        int d5 = (sixarr / 10) % 10;
//        int d6 = sixarr % 10;
//        bool lucky_numb = (d1 + d2 + d3 == d4 + d5 + d6);
//        cout << (lucky_numb ? "Number is lucky!" : "Number NO lucky!");
//    }
//    return 0;
//}


//*Завдання 6
//Дано оцінку в 100 бальній системі.Вивести оцінку по 5 - бальній шкалі
//(відмінно - [90; 100], добре - [74; 89], задовільно - [60; 73], незадовільно[1; 59]).

#include <iostream>
using namespace std;
int main() {
    int rating;
    cout << "Teacher plise write the grade:" << endl;
    cout << "Grade:"; cin >> rating;
    string result = (rating >= 90 && rating <= 100) ? "Grade is Great! (SS+)" :
        (rating >= 74 && rating <= 89) ? "Grade is Good! (S)" :
        (rating >= 60 && rating <= 73) ? "Grade is Satisfactory! (A)" : "Grade is Unsatisfactory! (D)";
    cout << result << endl;
    return 0;
}
