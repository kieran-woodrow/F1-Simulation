#include "TrackMaker.h"
TrackMaker::TrackMaker() 
{

}

void TrackMaker::setState(string s)
{

	track.setInfo("compound",s);

}

void TrackMaker::createTopRightCorner(int coords[2])
{

	string p[2][2];
	p[0][0] = "0"; //tl
	p[0][1] = "1"; //tr
	p[1][0] = "0"; //bl
	p[1][1] = "0"; //br
	
	track.setPart(p, coords);
	track.addTurn();

}

void TrackMaker::createBottomRightCorner(int coords[2])
{

	string p[2][2];
	p[0][0] = "1"; //tl
	p[0][1] = "0"; //tr
	p[1][0] = "0"; //bl
	p[1][1] = "0"; //br
	
	track.setPart(p, coords);
	track.addTurn();

}

void TrackMaker::createTopLeftCorner(int coords[2])
{

	string p[2][2];
	p[0][0] = "0"; //tl
	p[0][1] = "0"; //tr
	p[1][0] = "0"; //bl
	p[1][1] = "1"; //br
	
	track.setPart(p, coords);
	track.addTurn();

}

void TrackMaker::createBottomLeftCorner(int coords[2])
{

	string p[2][2];
	p[0][0] = "0"; //tl
	p[0][1] = "0"; //tr
	p[1][0] = "1"; //bl
	p[1][1] = "0"; //br
	
	track.setPart(p, coords);
	track.addTurn();

}

void TrackMaker::createStraight(int coords[2])
{

	string p[2][2];
	p[0][0] = "1"; //tl
	p[0][1] = "1"; //tr
	p[1][0] = "1"; //bl
	p[1][1] = "1"; //br
	
	track.setPart(p, coords);
	track.addStraight();

}

void TrackMaker::setNameTrack(string name)
{

	
	
	
	track.setInfo("name", name);
	
	

}

Track TrackMaker::getTrack()
{

	
	
	
	return track;
	
	

}

