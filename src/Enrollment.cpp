/**
 * @file Enrollment.cpp
 * @brief Implementación de la clase Enrollment.
 */
#include "../include/Enrollment.h"

Enrollment::Enrollment(const Student &student, const Course &course, std::string date) 
    : student(student), course(course), date(date) {}

Student Enrollment::getStudent() const { return student; }
Course Enrollment::getCourse() const { return course; }
std::string Enrollment::getDate() const { return date; }