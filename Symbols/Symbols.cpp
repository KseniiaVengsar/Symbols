// Symbols.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Íóæíî ïîñ÷èòàòü, ñêîëüêî ðàç êàæäûé ñèìâîë âñòðå÷àåòñÿ â çàäàííîì òåêñòå, è îòñîðòèðîâàòü ïî óáûâàíèþ ÷àñòîòû.

#include <iostream>
#include <string>
#include <map>
#include <cctype>  // Для функции tolower
#include <locale>

int main() {
    setlocale(LC_ALL, "RU");

    std::map<char, int> Mymap;
    std::string key;

    std::cout << "Введите строку: ";
    std::getline(std::cin, key);

    // Подсчет частоты символов
    for (char c : key) {
        Mymap[std::tolower(c)]++;
    }

    for (const auto& pair : Mymap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
