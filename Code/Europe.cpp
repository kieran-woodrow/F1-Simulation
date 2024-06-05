#include "Europe.h"
Europe::Europe(TrackBuilder* t)
{
	name="Continent still Empty";
	trackbuilder = t;

}

Europe::~Europe()
{

	trackbuilder=nullptr;

}

void Europe::construct()
{

	int arr[59][2]= {{1,4}, {1,6}, {1,8}, {1,10}, {1,12}, {1,14}, {1,16}, {1,18}, {1,20}, {1,22}, {1,24}, {1,26}, {1,28}, {1,30}, {3,2}, {5,4}, {5,6}, {5,8}, {5,10}, {5,12}, {5,14}, {5,16}, {5,18}, {5,20}, {7,22}, {9,22}, {11,4}, {11,6}, {11,8}, {11,10}, {11,12}, {11,14}, {11,16}, {11,18}, {11,20}, {13,2}, {15,4}, {15,6}, {15,8}, {15,10}, {15,12}, {15,14}, {15,16}, {15,18}, {15,20}, {15,22}, {15,24}, {15,26}, {15,28}, {15,30}, {15,32}, {15,34}, {7,36}, {9,36}, {11,36}, {13,36}, {5,32}, {5,34}, {3,31}};
	for(int i=0;i<59;i++){
		trackbuilder->createStraight(arr[i]);
	}
	int x[2][2]={{1,2}, {11,2}};
	trackbuilder->createTopLeftCorner(x[0]);
	trackbuilder->createTopLeftCorner(x[1]);
	int y[3][2]={{15,2}, {5,2}, {5,30}};
	trackbuilder->createTopRightCorner(y[0]);
	trackbuilder->createTopRightCorner(y[1]);
	trackbuilder->createTopRightCorner(y[2]);
	
	int z[2][2]={{15,36}, {11,22}};
	trackbuilder->createBottomRightCorner(z[0]);
	trackbuilder->createBottomRightCorner(z[1]);
	// trackbuilder->createBottomRightCorner(z[2]);
	int a[3][2]={{5,22}, {5,36}, {1,32}};
	trackbuilder->createBottomLeftCorner(a[0]);
	trackbuilder->createBottomLeftCorner(a[1]);
	trackbuilder->createBottomLeftCorner(a[2]);


		vector<string> v;

	v.push_back("Go straight for 2200m");
	v.push_back("prepare for a short right turn");
	v.push_back("Go straight for 600m");
	v.push_back("prepare for a long left turn");
	v.push_back("prepare for a short right turn");
	v.push_back("Go straight for 1500m");
	v.push_back("prepare for a short right turn");
	v.push_back("Go straight for 2400m");
	v.push_back("prepare for a short right turn");
	v.push_back("Go straight for 300m");
	v.push_back("prepare for a short right turn");
	v.push_back("Go straight for 1800m");
	v.push_back("prepare for a short left turn");
	v.push_back("Go straight for 600m");
	v.push_back("prepare for a short left turn");
	v.push_back("Go straight for 1800m");
	v.push_back("prepare for a short right turn");
	v.push_back("Go straight for 600m");

	trackbuilder->createDirections(v);


	trackbuilder->setNameTrack("Parise Race Track");
	trackbuilder->setState("Medium");
	

}

void Europe::setTrackBuilder(TrackBuilder* builder)
{

	trackbuilder=builder;

}

bool Europe::isEuropean(){
	return true;
}

void Europe::setCountryName(string name){
	this->name=name;
}

string Europe::getcountryName(){
	return name;
} 

