/**
 * @file Course.h
 * @brief Definición de la clase Course para manejar información de cursos.
 */
#ifndef COURSE_H
#define COURSE_H

#include <string>

/**
 * @class Course
 * @brief Clase que representa un curso con ID, nombre y créditos.
 */
class Course {
private:
    int id;               ///< ID único del curso.
    std::string name;     ///< Nombre del curso.
    int credits;          ///< Créditos del curso.

public:
    /**
     * @brief Constructor de la clase Course.
     * @param id ID del curso.
     * @param name Nombre del curso.
     * @param credits Créditos del curso.
     */
    Course(int id, std::string name, int credits);

    // Getters
    int getId() const;
    std::string getName() const;
    int getCredits() const;
};

#endif // COURSE_H