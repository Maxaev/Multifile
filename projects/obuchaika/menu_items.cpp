#pragma once

#include "menu.hpp"

int random_num_gen(int num);

namespace AArshinov {
    const MenuItem* study_math(const MenuItem* current);

    const MenuItem* exit(const MenuItem* current);

    const MenuItem* matan(const MenuItem* current);
    const MenuItem* algebra(const MenuItem* current);
    const MenuItem* study_go_back(const MenuItem* current);

    const MenuItem* diff(const MenuItem* current);
    const MenuItem* integral(const MenuItem* current);
    const MenuItem* matan_go_back(const MenuItem* current);

    const MenuItem* summ(const MenuItem* current);
    const MenuItem* substract(const MenuItem* current);
    const MenuItem* multiply(const MenuItem* current);
    const MenuItem* divide(const MenuItem* current);
    const MenuItem* alg_go_back(const MenuItem* current);
}
