/**
 * @file Student.cpp
 * @brief Implementación de la clase Student.
 */
#include "../include/Student.h"

/**
 * @brief Constructor de la clase Student.
 * @param id ID del estudiante.
 * @param name Nombre del estudiante.
 * @param age Edad del estudiante.
 */
Student::Student(int id, std::string name, int age) 
    : id(id), name(name), age(age) {}

/**
 * @brief Obtiene el ID del estudiante.
 * @return int ID del estudiante.
 */
int Student::getId() const {
    return id;
}

/**
 * @brief Obtiene el nombre del estudiante.
 * @return std::string Nombre del estudiante.
 */
std::string Student::getName() const {
    return name;
}

/**
 * @brief Obtiene la edad del estudiante.
 * @return int Edad del estudiante.
 */
int Student::getAge() const {
    return age;
}