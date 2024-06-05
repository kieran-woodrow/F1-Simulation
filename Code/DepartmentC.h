
#ifndef DEPARTMENTC_H
#define DEPARTMENTC_H
#include <vector>
#include "Department.h"

class DepartmentC:public Department{
    public:
    DepartmentC();
    vector<Department*> getDepartments();
    void addDepartment(Department* department);
    void removeDepartment(Department* department);
    void print();
    ~DepartmentC();
    private:
    vector<Department*> _l;

};
#endif