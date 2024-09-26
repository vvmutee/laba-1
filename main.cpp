#include <iostream>
#include <iomanip>

int main()
{
  std::string text = "1. Переменная - это ячейка в памяти выделяемая под значение какого-либо типа данных(коробка с вещью)\n"
  "2. Типы данных\n"
   "1) Целочисленные\n"
    "- char, 1 байт, -128...127\n"
    "- short, 2 байта, -32768...32767\n"
    "- int, 4 байта, -2^31...2^31-10\n"
    "- long long, 8 байт, 0...2^32-1\n"
    "- unsigned int, 4 байта, 0...2^32-1\n"
   "2) Символьный\n"
    "- char, 1 байт, -128...127\n"
   "3) Вещественный\n"
    "- float, 4 байт, точность 6-7 цифр\n"
    "- double, 8 байт, точность 15-16 цифр\n"
   "4) Логический\n"
    "- bool, 1 байт, True/False\n"
  "Арифметические операции\n";
  std::cout << text << std::endl;
  std::cout << "+ для char(-109) и short(16400) =" << " " << char(-109) + short(16400) << std::endl;
  std::cout << "- для int(-26000000) и long(2000000000) =" << " " << int(-26000000) + long(2000000000) << std::endl;;
  std::cout << "* для long long(1000000000) и unsigned int(2) =" << " " << static_cast<long long>(1000000000) * static_cast<unsigned int>(2) << std::endl;
  std::cout << "/ для float(9) и double(5) =" << " " << float(9) / double(4) << std::endl;
  std::cout << "% для char(12) и int(5) =" << " " << char(12) % int(5) << std::endl;
  std::cout << "Всроенные фунции" << std::endl;
  std::cout << "pow, sqrt, sin, cos, tan, atan";
  return 0;
}