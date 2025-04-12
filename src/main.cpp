/**
 * @file main.cpp
 * @brief Ejemplo de uso del sistema de gestión de estudiantes, cursos y matrículas.
 */
#include <iostream>
#include "../include/Student.h"       // Nueva ruta
#include "../include/StudentManager.h"
#include "../include/Course.h"
#include "../include/Enrollment.h"

int main() {
    // Crear estudiantes
    Student student1(1, "Alice", 20);
    Student student2(2, "Bob", 22);

    // Crear cursos
    Course course1(101, "Matemáticas", 4);
    Course course2(102, "Programación en C++", 3);

    // Matricular estudiantes en cursos
    Enrollment enrollment1(student1, course1, "2023-10-01");
    Enrollment enrollment2(student2, course2, "2023-10-02");

    // Mostrar información de matrículas
    std::cout << "Matrícula 1:" << std::endl;
    std::cout << "Estudiante: " << enrollment1.getStudent().getName() 
              << ", Curso: " << enrollment1.getCourse().getName() 
              << ", Fecha: " << enrollment1.getDate() << std::endl;

    std::cout << "\nMatrícula 2:" << std::endl;
    std::cout << "Estudiante: " << enrollment2.getStudent().getName() 
              << ", Curso: " << enrollment2.getCourse().getName() 
              << ", Fecha: " << enrollment2.getDate() << std::endl;

    return 0;
}