/**
 * Project OOP3200-Lesson4
 * @author Ryan Clayson
 */

#include "Student.h"
#include <iostream>

 /**
  * Student implementation
  */


  /**
   * @param first_name
   * @param last_name
   * @param age
   * @param student_id
   */
Student::Student(const std::string first_name, const std::string last_name, const float age, std::string student_id):
    Person(first_name, last_name, age), m_studentID(std::move(student_id))
{
}

/**
 * @return std::string
 */
std::string Student::getStudentID() const
{
    return m_studentID;
}

/**
 * @param value
 */
void Student::setStudentID(const std::string value)
{
    m_studentID = value;
}

/**
 * @return void
 */
void Student::Studies() const
{
    std::cout << getFirstName() << " is studying" << std::endl;
}

/**
 * @return std::string
 */
std::string Student::ToString()
{
    std::string output_string;

    output_string += Person::ToString();
    output_string += "-------------------------------------------\n";
    output_string += "Student ID: " + getStudentID() + "\n";
    output_string += "-------------------------------------------\n";

    return output_string;
}