/**
 * Project OOP3200-Lesson4
 * @author Ryan Clayson
 */


#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include "Person.h"


class Professor: public Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param employee_id
 */
void Professor(string first_name, string last_name, float age, string employee_id);
    
string getEmployeeID();
    
/**
 * @param value
 */
void setEmployeeID(string value);
    
void Teaches();
    
void Operation1();
    
string ToString();
private: 
    string m_employeeID;
};

#endif //_PROFESSOR_H