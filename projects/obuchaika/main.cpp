#include <iostream>
#include <clocale>


#include "menu.h"
#include "menu_functions.hpp"
#include "menu_items.hpp"

int main() {
    std::setlocale(LC_ALL, "");

    const AArshinov::MenuItem* current = &AArshinov::MAIN;
    do {
        current = current->func(current);
    } while (true);

    return 0;
}
}