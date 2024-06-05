#include "CMediator.h" 


CMediator::CMediator(): nextId(0){}

CMediator::~CMediator(){}

int CMediator::registerMe(Ccolleague* m){
	Participant* p = new Participant();
  	p->colleague = m;
  	p->id = nextId++;
  	participant.push_back(p);
  	return p->id;
}

bool CMediator::talkTo(int id, string m){
	vector<Participant*>::iterator it;
  	bool found = false;

  	it = participant.begin();
  	while ((it != participant.end()) && (!found)) {
	    if ((*it)->id == id) {
	      found = true;
	      (*it)->colleague->receiveMessage(m);
	    } else {
	      it++;
	    }
	}   
	return found;
}

void CMediator::cast(string m, int i){
	vector<Participant*>::iterator it;

  	for (it = participant.begin(); it != participant.end(); ++it) {
  		if((*it)->colleague->getCheck() !=i)
			(*it)->colleague->receiveMessage(m);
	}
}