#include "menu_functions.hpp"

#include <ctime>
#include <random>
#include <cstdlib>
#include <iostream>


int random_num_gen(int num = 0) {
    std::mt19937 rnd(time(nullptr) + num);

    num = rnd()%10;
    return abs(num);
}


const RMAHAEV::MenuItem* RMAHAEV::study_math(const MenuItem* current) {
    std::cout << "Обучайка приветствует тебя, мой юный ученик!" << std::endl;
    for (int i = 1; i < current->children_count; i++) {
        std::cout <<current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Обучайка > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;
    return current->children[user_input];
}

const RMAHAEV::MenuItem* RMAHAEV::exit(const MenuItem* current) {
    std::exit(0);
}

const RMAHAEV::MenuItem* RMAHAEV::matan(const MenuItem* current) {
    for (int i = 1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Обучайка > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;
    return current->children[user_input];
}
const RMAHAEV::MenuItem* RMAHAEV::algebra(const MenuItem* current) {
    for (int i = 1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Обучайка > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;
    return current->children[user_input];
}
const RMAHAEV::MenuItem* RMAHAEV::diff(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}
const RMAHAEV::MenuItem* RMAHAEV::integral(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}
const RMAHAEV::MenuItem* RMAHAEV::matan_go_back(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}


const RMAHAEV::MenuItem* RMAHAEV::summ(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    bool initialised = false;
    int a_num;
    int b_num;
    do{
        if (initialised == false) {
            a_num = random_num_gen();
            b_num = random_num_gen(a_num);
            initialised = true;
        }
        std::cout << "Введите ответ:" << std::endl;
        std::cout <<a_num << " + " << b_num << " = ?" << std::endl;
        std::cout << "Чтобы выйти, введите любую  букву" << std::endl;
        std::cout << "> ";
        int user_answer;
        std::cin >> user_answer;
        std::cout << std::endl;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            return current->parent;
        }
        else if (user_answer == a_num + b_num) {
            std::cout << "Верно!" << std::endl;
            initialised = false;
        }
        else {
            std::cout << "Неверно!" << std::endl;
        }
    } while (true);
}
const RMAHAEV::MenuItem* RMAHAEV::substract(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}
const RMAHAEV::MenuItem* RMAHAEV::multiply(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}
const RMAHAEV::MenuItem* RMAHAEV::divide(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}
const RMAHAEV::MenuItem* RMAHAEV::alg_go_back(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}



const RMAHAEV::MenuItem* RMAHAEV::study_go_back(const MenuItem* current) {
    return current->parent->parent;
}
const IBusko::MenuItem* RMAHAEV::study_summ(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const RMAHAEV::MenuItem* RMAHAEV::study_substract(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const RMAHAEV::MenuItem* RMAHAEV::study_multiply(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const RMAHAEV::MenuItem* RMAHAEV::study_divide(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const RMAHAEV::MenuItem* RMAHAEV::study_go_back(const MenuItem* current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}
