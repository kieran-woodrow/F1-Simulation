#include "NorthAmerica.h"
NorthAmerica::NorthAmerica(TrackBuilder* t)
{
	name="Continent still Empty";
	trackbuilder = t;

}

NorthAmerica::~NorthAmerica()
{

	trackbuilder=nullptr;

}

void NorthAmerica::construct()
{

	int arr[16][2]={{12,4}, {12,6}, {12,8}, {12,10}, {12,12}, {12,14}, {12,16}, {12,18}, {12,20}, {12,22}, {12,24}, {12,26}, {12,28}, {12,30}, {12,32}, {12,34}};
	int arr2[16][2]={{4,4}, {4,6}, {4,8}, {4,10}, {4,12}, {4,14}, {4,16}, {4,18}, {4,20}, {4,22}, {4,24}, {4,26}, {4,28}, {4,30}, {4,32}, {4,34}};
	int arr3[6][2]={{6,2}, {8,2}, {10,2}, {6,36}, {8,36}, {10,36}};
	for(int i=0;i<16;i++){
		trackbuilder->createStraight(arr[i]);
	}
	for(int i=0;i<16;i++){
		trackbuilder->createStraight(arr2[i]);
	}
	for(int i=0;i<6;i++){
		trackbuilder->createStraight(arr3[i]);
	}
	int x[2]={4,2};
	trackbuilder->createTopLeftCorner(x);
	int y[2]={4,36};
	trackbuilder->createBottomLeftCorner(y);
	int z[2]={12,36};
	trackbuilder->createBottomRightCorner(z);
	int a[2]={12,2};
	trackbuilder->createTopRightCorner(a);

		vector<string> v;

	v.push_back("Go straight for 200m");
	v.push_back("prepare for a short right turn");
	v.push_back("Go straight for 4200m");
	v.push_back("prepare for a short right turn");
	v.push_back("Go straight for 1600m");
	v.push_back("prepare for a short left turn");
	v.push_back("Go straight for 4200m");
	v.push_back("prepare for a short right turn");
	v.push_back("Go straight for 1400m");


	trackbuilder->createDirections(v);
	
	trackbuilder->setNameTrack("Los Angelos Race Track");
	trackbuilder->setState("Soft");

}

void NorthAmerica::setTrackBuilder(TrackBuilder* builder)
{

	trackbuilder=builder;

}

bool NorthAmerica::isEuropean(){
	return false;
}

void NorthAmerica::setCountryName(string name){
	this->name=name;
}

string NorthAmerica::getcountryName(){
	return name;
} 
