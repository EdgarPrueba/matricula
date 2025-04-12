/**
 * @file StudentManager.h
 * @brief Definición de la clase StudentManager para gestionar estudiantes.
 */
#ifndef STUDENT_MANAGER_H
#define STUDENT_MANAGER_H

#include <vector>
#include "Student.h"

/**
 * @class StudentManager
 * @brief Clase que gestiona una lista de estudiantes.
 */
class StudentManager {
private:
    std::vector<Student> students; ///< Lista de estudiantes.

public:
    /**
     * @brief Agrega un nuevo estudiante a la lista.
     * @param student Objeto Student a agregar.
     */
    void addStudent(const Student &student);

    /**
     * @brief Busca un estudiante por ID.
     * @param id ID del estudiante a buscar.
     * @return Student* Puntero al estudiante si se encuentra, nullptr si no.
     */
    Student* findStudentById(int id);

    /**
     * @brief Obtiene todos los estudiantes.
     * @return std::vector<Student> Lista de estudiantes.
     */
    std::vector<Student> getAllStudents() const;
};

#endif // STUDENT_MANAGER_H