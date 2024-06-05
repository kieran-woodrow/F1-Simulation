#include "Track.h"
Track::Track()
{

	set();

}

void Track::set()
{

	for (int i = 0; i < 20; i++){
		for (int z = 0; z < 40; z++){
			parts[i][z] = "0";
		}
	}

	/*   ~~~~~~~~BORDER:~~~~~~~~

	for (int i = 0; i < 20; i++){
		parts[i][0] = "|";
		parts[i][39] = "|";
		
	}
	for (int i = 0; i < 40; i++){
		parts[0][i] = "-";
		parts[19][i] = "-";
	}
	*/

}

void Track::setInfo(string key, string value)
{

	info[key] = value;

}

void Track::setPart(string part[2][2], int coord[2])
{

	parts[coord[0]][coord[1]] = part[0][0];
	parts[coord[0]+1][coord[1]] = part[1][0];
	parts[coord[0]][coord[1]+1] = part[0][1];
	parts[coord[0]+1][coord[1]+1] = part[1][1];

}

Track* Track::getTrack()
{

	return this;

}

string Track::getInfo(string key)
{

	return info[key];

}

void Track::showTrackMap()
{

	string out = "";
	for (int i = 0; i < 20; i++){
		
		for (int z = 0; z < 40; z++){
			if (parts[i][z] == "1") out += "#";
			else if (parts[i][z] == "0") out += " ";
			else out += parts[i][z];
		}
		out += "\n";
	}
	cout << out;

}

void Track::addStraight(){
	totalStr += 300;
	directions.push_back("straight");
}

void Track::addTurn(){
	totalTurn += 35;
	directions.push_back("turn");
}

void Track::printT(){
	if(!trackD.empty()){
		//cout<<"Track"<<"\t\t\t\t\t\tAdded decorations"<<endl;
		for(int i = 0; i < trackD.size(); i++) {
	        trackD.at(i)->printT();
	        cout<<endl;
	    }
	}
}

void Track::add(TrackD* t){
	trackD.push_back(t);
}
void Track::remove(){
	trackD.pop_back();
}

bool Track::getCommunication(){
	return communication;
}
void Track::setCommunication(bool c){
	communication=c;
}
