/**
 * @file Student.h
 * @brief Definición de la clase Student para manejar información de estudiantes.
 */
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

/**
 * @class Student
 * @brief Clase que representa a un estudiante con ID, nombre y edad.
 */
class Student {
private:
    int id;             ///< ID único del estudiante.
    std::string name;   ///< Nombre del estudiante.
    int age;            ///< Edad del estudiante.

public:
    /**
     * @brief Constructor de la clase Student.
     * @param id ID del estudiante.
     * @param name Nombre del estudiante.
     * @param age Edad del estudiante.
     */
    Student(int id, std::string name, int age);

    /**
     * @brief Obtiene el ID del estudiante.
     * @return int ID del estudiante.
     */
    int getId() const;

    /**
     * @brief Obtiene el nombre del estudiante.
     * @return std::string Nombre del estudiante.
     */
    std::string getName() const;

    /**
     * @brief Obtiene la edad del estudiante.
     * @return int Edad del estudiante.
     */
    int getAge() const;
};

#endif // STUDENT_H