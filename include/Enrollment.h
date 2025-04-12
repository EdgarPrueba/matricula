/**
 * @file Enrollment.h
 * @brief Definición de la clase Enrollment para manejar matrículas de estudiantes en cursos.
 */
#ifndef ENROLLMENT_H
#define ENROLLMENT_H

#include "Student.h"
#include "Course.h"

/**
 * @class Enrollment
 * @brief Clase que representa una matrícula de un estudiante en un curso.
 */
class Enrollment {
private:
    Student student;      ///< Estudiante matriculado.
    Course course;        ///< Curso matriculado.
    std::string date;     ///< Fecha de matrícula.

public:
    /**
     * @brief Constructor de la clase Enrollment.
     * @param student Estudiante a matricular.
     * @param course Curso en el que se matricula.
     * @param date Fecha de matrícula (formato "YYYY-MM-DD").
     */
    Enrollment(const Student &student, const Course &course, std::string date);

    // Getters
    Student getStudent() const;
    Course getCourse() const;
    std::string getDate() const;
};

#endif // ENROLLMENT_H