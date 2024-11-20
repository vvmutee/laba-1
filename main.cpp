#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  cout << "(1) Переменная - это ячейка в памяти выделяемая под значение различных типов данных(как пример: комната с вещью, коробка с вещью и тд.)\n";
  string data_types = "(2) Тип данных - это класс данных, характеризуемый членами класса и операциями, которые могут быть к ним применены \n"
   "1) Целочисленные\n"
    "char | 1 байт | -128...127\n"
    "short | 2 байта | -32768...32767\n"
    "int | 4 байта | -2^31...2^31-10\n"
    "long long | 8 байт | 0...2^32-1\n"
    "unsigned int | 4 байта | 0...2^32-1\n"
   "2) Символьный\n"
    "char | 1 байт | -128...127\n"
   "3) Вещественный\n"
    "float | 4 байт | точность 6-7 цифр\n"
    "double | 8 байт | точность 15-16 цифр\n"
   "4) Логический\n"
    "bool | тические операции\n";
  cout << data_types << std::endl;
  cout << "+ => char(-109) && short(16400) =" << " " << char(-109) + short(16400) << endl;
  cout << "- => int(-26000000) && long(2000000000) =" << " " << int(-26000000) + long(2000000000) << endl;;
  cout << "* => long long(1000000000) && unsigned int(2) =" << " " << static_cast<long long>(1000000000) * static_cast<unsigned int>(2) << endl;
  cout << "/ => float(9) && double(5) =" << " " << float(9) / double(4) << endl;
  cout << "% => char(12) && int(5) =" << " " << char(12) % int(5) << endl;
  cout << "Всроенные фунции" << endl;
  cout << "pow, sqrt, sin, cos, tan, atan";
  return 0;
}
