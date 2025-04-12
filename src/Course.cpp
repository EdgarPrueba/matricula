/**
 * @file Course.cpp
 * @brief Implementación de la clase Course.
 */
#include "../include/Course.h"

Course::Course(int id, std::string name, int credits) 
    : id(id), name(name), credits(credits) {}

int Course::getId() const { return id; }
std::string Course::getName() const { return name; }
int Course::getCredits() const { return credits; }