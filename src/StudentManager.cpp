/**
 * @file StudentManager.cpp
 * @brief Implementación de la clase StudentManager.
 */
#include "../include/StudentManager.h"

/**
 * @brief Agrega un nuevo estudiante a la lista.
 * @param student Objeto Student a agregar.
 */
void StudentManager::addStudent(const Student &student) {
    students.push_back(student);
}

/**
 * @brief Busca un estudiante por ID.
 * @param id ID del estudiante a buscar.
 * @return Student* Puntero al estudiante si se encuentra, nullptr si no.
 */
Student* StudentManager::findStudentById(int id) {
    for (auto &student : students) {
        if (student.getId() == id) {
            return &student;
        }
    }
    return nullptr;
}

/**
 * @brief Obtiene todos los estudiantes.
 * @return std::vector<Student> Lista de estudiantes.
 */
std::vector<Student> StudentManager::getAllStudents() const {
    return students;
}