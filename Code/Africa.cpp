#include "Africa.h"
Africa::Africa(TrackBuilder* t)
{
	name="Continent still Empty";
	trackbuilder = t;

}

Africa::~Africa()
{

	trackbuilder=nullptr;

}

void Africa::construct()
{

	int a1[2] = {2,5};
	int a2[2] = {2,7};
	int a3[2] = {2,9};
	int z1[2] = {2,11};
	int z2[2] = {2,13};
	int z3[2] = {2,15};
	int z4[2] = {2,17};
	int a4[2] = {14,5};
	int a5[2] = {14,7};
	int a6[2] = {14,9};
	int z5[2] = {14,11};
	int z6[2] = {14,13};
	int z7[2] = {14,15};
	int z8[2] = {14,17};
	int a7[2] = {4,3};
	int a8[2] = {6,3};
	int a9[2] = {8,3};
	int b1[2] = {10,3};
	int b2[2] = {12,3};
	int b3[2] = {4,19};
	int b4[2] = {6,19};
	int b5[2] = {8,19};
	int b6[2] = {10,19};
	int b7[2] = {12,19};
	
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
	trackbuilder->createStraight(z1);
	trackbuilder->createStraight(z2);
	trackbuilder->createStraight(z3);
	trackbuilder->createStraight(z4);
	trackbuilder->createStraight(z5);
	trackbuilder->createStraight(z6);
	trackbuilder->createStraight(z7);
	trackbuilder->createStraight(z8);
	
	int c1[2] = {2,3};
	int c2[2] = {14,3};
	int c3[2] = {2,19};
	int c4[2] = {14,19};
	
	trackbuilder->createTopLeftCorner(c1);
	trackbuilder->createTopRightCorner(c2);
	trackbuilder->createBottomLeftCorner(c3);
	trackbuilder->createBottomRightCorner(c4);



		vector<string> v;

	v.push_back("Go straight for 600m");
	v.push_back("prepare for a short right turn");
	v.push_back("Go straight for 1600m");
	v.push_back("prepare for a short right turn");
	v.push_back("Go straight for 1200m");
	v.push_back("prepare for a short left turn");
	v.push_back("Go straight for 1600m");
	v.push_back("prepare for a short right turn");
	v.push_back("Go straight for 600m");


	trackbuilder->createDirections(v);


	
	trackbuilder->setNameTrack("ZAR Speedtrack");
	trackbuilder->setState("Soft");

}

void Africa::setTrackBuilder(TrackBuilder* builder)
{

	trackbuilder=builder;

}

bool Africa::isEuropean(){
	return false;
}

void Africa::setCountryName(string name){
	this->name=name;
}

string Africa::getcountryName(){
	return name;
}