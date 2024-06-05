#include "Asia.h"
Asia::Asia(TrackBuilder* t)
{
	name="Continent still Empty";
	trackbuilder = t;

}

Asia::~Asia()
{

	trackbuilder=nullptr;

}

void Asia::construct()
{

	
	int a1[2] = {2,5};
	int a2[2] = {2,7};
	int a3[2] = {2,9};
	int a4[2] = {14,5};
	int a5[2] = {14,7};
	int a6[2] = {14,9};
	int a7[2] = {4,3};
	int a8[2] = {6,3};
	int a9[2] = {8,3};
	int b1[2] = {10,3};
	int b2[2] = {12,3};
	int b3[2] = {4,11};
	int b4[2] = {6,11};
	int b5[2] = {8,11};
	int b6[2] = {10,11};
	int b7[2] = {12,11};
	
	trackbuilder->createStraight(a1);
	trackbuilder->createStraight(a2);
	trackbuilder->createStraight(a3);
	trackbuilder->createStraight(a4);
	trackbuilder->createStraight(a5);
	trackbuilder->createStraight(a6);
	trackbuilder->createStraight(a7);
	trackbuilder->createStraight(a8);
	trackbuilder->createStraight(a9);
	trackbuilder->createStraight(b1);
	trackbuilder->createStraight(b2);
	trackbuilder->createStraight(b3);
	trackbuilder->createStraight(b4);
	trackbuilder->createStraight(b5);
	trackbuilder->createStraight(b6);
	trackbuilder->createStraight(b7);
	
	int c1[2] = {2,3};
	int c2[2] = {14,3};
	int c3[2] = {2,11};
	int c4[2] = {14,11};
	
	trackbuilder->createTopLeftCorner(c1);
	trackbuilder->createTopRightCorner(c2);
	trackbuilder->createBottomLeftCorner(c3);
	trackbuilder->createBottomRightCorner(c4);

	vector<string> v;

	v.push_back("Go straight for 600m");
	v.push_back("prepare for a short left turn");
	v.push_back("Go straight for 1800m");
	v.push_back("prepare for a short left turn");
	v.push_back("Go straight for 600m");
	v.push_back("prepare for a short left turn");
	v.push_back("Go straight for 1800");

	trackbuilder->createDirections(v);
	
	trackbuilder->setNameTrack("Asia Straights");
	trackbuilder->setState("Hard");

}

void Asia::setTrackBuilder(TrackBuilder* builder)
{

	trackbuilder=builder;

}

bool Asia::isEuropean(){
	return false;
}

void Asia::setCountryName(string name){
	this->name=name;
}

string Asia::getcountryName(){
	return name;
}
