#include "DepartmentC.h"
DepartmentC::DepartmentC():Department(), _l()
{

	

}

vector<Department*> DepartmentC::getDepartments()
{

	return _l;

}

void DepartmentC::addDepartment(Department* department)
{

	_l.push_back(department);
	

}

void DepartmentC::removeDepartment(Department* department)
{

	for (vector<Department*>::iterator it=_l.begin(); it!=_l.end(); ++it){
		if((*it)->getName()==department->getName()){
			_l.erase(it);
			delete *it;
		}
	}
	

}

void DepartmentC::print()
{

	cout<<"List of new extra departments added: "<<endl;
	for (vector<Department*>::iterator it=_l.begin(); it!=_l.end(); ++it){
		(*it)->printName();
	}

}

DepartmentC::~DepartmentC()
{

	for(vector<Department*>::iterator it=_l.begin();it!=_l.end(); ++it){
		delete *it;
	}

}
