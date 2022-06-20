//
// Created by Djordje Stefanovic on 20.6.22..
//

#ifndef CS323_DZ10_BACHELORSTUDENT_H
#define CS323_DZ10_BACHELORSTUDENT_H

#include <string>
using namespace std;

#include "Student.h"

class BachelorStudent : public Student{

private:
    string smer;

public:

    BachelorStudent(const string &ime, const string &prezime, int index, const string &smer);

    BachelorStudent();

    const string &getSmer() const;

    void setSmer(const string &smer);

    virtual ~BachelorStudent();

    void info() override;

};


#endif //CS323_DZ10_BACHELORSTUDENT_H
