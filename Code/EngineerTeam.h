
#ifndef ENGINEERTEAM_H
#define ENGINEERTEAM_H
class DepartmentC;
#include "Engine.h"
#include "Aerodynamics.h"
#include "Chassis.h"
#include "Electronics.h"
#include "DepartmentC.h"
#include "Ccolleague.h"
#include "CMediator.h"
#include "Container.h"
class EngineerTeam: public Ccolleague{
   
    public:
        EngineerTeam();
        EngineerTeam(string name, Car* car, Container* con);
        EngineerTeam(string name, Car* car,DepartmentC *c, Container* con);
        Department* getDepartment(string dep);
        void showDepartments();
        void receiveMessage(string);
        void sendMessage(string);
     private:
        vector<Department*> departments;
        string name;
};
#endif