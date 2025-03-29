#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;

int main() {
    // ������������ ��������� Windows-1251 ��� ���������� ����
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ���������� ������
    double x, y, z;

    // �������� ������� � ������ ����� ��� �������
    cout << "������ �������� x: ";
    cin >> x;

    cout << "������ �������� y: ";
    cin >> y;

    cout << "������ �������� z: ";
    cin >> z;

    // ����������
    double term1 = (pow(x, 2) / 2) + (pow(y, 2) / 4) + (3.3 * x * y);
    double term2 = sqrt(exp(-1.2 * x) + pow(cos(pow(x - y, 2) / (x * x + 2)), 2) + M_PI);
    double a = pow(term1, 3) * log(term2);

    double numerator = (7 * x) - abs(y - z) + (3.2 * y * z);
    double denominator = (x * x + 2 * y * y + 8.41 * z * z);
    double inner_term = (pow(x, 2) / 2) + (pow(y, 3) / 3) + log10(3 + abs(y * z));
    double b = tan(numerator / denominator) * pow(inner_term, 1.5);

    // ��������� ���������� � ������ �������
    cout << fixed << setprecision(3);
    cout << "\n����� �������� �� ���������� ���������:";
    cout << "\nI-----------------------------------------------I";
    cout << "\nI ����� ��������:                               I";
    cout << "\nI-----------------------------------------------I";
    cout << "\nI x = " << setw(10) << x << "                             I";
    cout << "\nI y = " << setw(10) << y << "                             I";
    cout << "\nI z = " << setw(10) << z << "                             I";
    cout << "\nI-----------------------------------------------I";
    cout << "\nI ���������� ���������:                         I";
    cout << "\nI-----------------------------------------------I";
    cout << "\nI a = " << setw(10) << a << "                             I";
    cout << "\nI b = " << setw(10) << b << "                             I";
    cout << "\nI-----------------------------------------------I\n";

    _getch(); // �������� ������
    return 0;
}


	

