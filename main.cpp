#include <iostream>
#include <string>
#include "coin.hpp"
#include "coldWeapon.hpp"
#include "painting.hpp"
#include "statuette.hpp"
#include "photograph.hpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    Coin coin("Монета", 2019, 1.0, 2000, 2020);
    ColdWeapon weapon("Холодное оружие", 1800, "XIX-XX век");
    Painting painting("Картина", 1900, "Пейзаж", "Иван Иванов");
    Statuette statuette("Статуэтка", 1700, "Богиня", "Петр Петров");
    Photograph photograph("Фотография", 2005, "Портрет");

    coin.Print();
    cout << endl;
    weapon.Print();
    cout << endl;
    painting.Print();
    cout << endl;
    statuette.Print();
    cout << endl;
    photograph.Print();

    return 0;
}