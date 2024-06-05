#include "Australia.h"
Australia::Australia(TrackBuilder* t)
{
	name="Continent still Empty";
	trackbuilder = t;

}

Australia::~Australia()
{

	trackbuilder=nullptr;

}

void Australia::construct()
{

	
	
	int a[2] = {3,4};
	int b[2] = {3,9};
	int c[2] = {4,8};
	int d[2] = {3,5};
	int e[2] = {4,5};
	int f[2] = {3,26};
	int g[2] = {6,26};
	int h[2] = {7,19};
	int i[2] = {9,18};
	int j[2] = {11,16};
	int k[2] = {14,16};
	int l[2] = {14,17};
	int m[2] = {3,15};
	int n[2] = {17,6};
	int o[2] = {13,7};
	int p[2] = {11,6};
	int q[2] = {8,4};
	int r[2] = {8,5};
	int s[2] = {3,4};
	int t[2] = {4,15};
	
	trackbuilder->createBottomRightCorner(a);
	trackbuilder->createBottomRightCorner(b);
	trackbuilder->createBottomRightCorner(c);
	trackbuilder->createBottomRightCorner(d);
	trackbuilder->createBottomRightCorner(e);
	trackbuilder->createBottomRightCorner(f);
	trackbuilder->createBottomRightCorner(g);
	trackbuilder->createBottomRightCorner(h);
	trackbuilder->createBottomRightCorner(i);
	trackbuilder->createBottomRightCorner(k);
	trackbuilder->createBottomRightCorner(l);
	trackbuilder->createBottomRightCorner(m);
	trackbuilder->createBottomRightCorner(n);
	trackbuilder->createBottomRightCorner(o);
	trackbuilder->createBottomRightCorner(p);
	trackbuilder->createBottomRightCorner(q);
	trackbuilder->createBottomRightCorner(r);
	trackbuilder->createBottomRightCorner(s);
	trackbuilder->createBottomRightCorner(j);
	trackbuilder->createBottomRightCorner(t);
	
	int a1[2] = {4, 3};
	trackbuilder->createStraight(a1);
	int a2[2] = {6, 3};
	trackbuilder->createStraight(a2);
	int a3[2] = {9, 5};
	trackbuilder->createStraight(a3);
	int a4[2] = {11, 7};
	trackbuilder->createStraight(a4);
	int a5[2] = {13, 5};
	trackbuilder->createStraight(a5);
	int a6[2] = {15, 5};
	trackbuilder->createStraight(a6);
	int a7[2] = {17, 7};
	trackbuilder->createStraight(a7);
	int a8[2] = {17, 9};
	trackbuilder->createStraight(a8);
	int a9[2] = {17, 11};
	trackbuilder->createStraight(a9);
	int b1[2] = {17, 13};
	trackbuilder->createStraight(b1);
	int b2[2] = {17, 15};
	trackbuilder->createStraight(b2);
	int b3[2] = {15, 17};
	trackbuilder->createStraight(b3);
	int b4[2] = {12, 15};
	trackbuilder->createStraight(b4);
	int b5[2] = {10, 17};
	trackbuilder->createStraight(b5);
	int b6[2] = {8, 19};
	trackbuilder->createStraight(b6);
	int b7[2] = {6, 20};
	trackbuilder->createStraight(b7);
	int b8[2] = {6, 22};
	trackbuilder->createStraight(b8);
	int b9[2] = {6, 24};
	trackbuilder->createStraight(b9);
	int c1[2] = {4, 26};
	trackbuilder->createStraight(c1);
	int c2[2] = {2, 24};
	trackbuilder->createStraight(c2);
	int c3[2] = {2, 22};
	trackbuilder->createStraight(c3);
	int c4[2] = {2, 20};
	trackbuilder->createStraight(c4);
	int c5[2] = {2, 18};
	trackbuilder->createStraight(c5);
	int cc5[2] = {2, 16};
	trackbuilder->createStraight(cc5);
	int c6[2] = {4, 13};
	trackbuilder->createStraight(c6);
	int c7[2] = {4, 11};
	trackbuilder->createStraight(c7);
	int c8[2] = {4, 9};
	trackbuilder->createStraight(c8);
	int c9[2] = {2, 7};
	trackbuilder->createStraight(c9);
	int c0[2] = {2, 5};
	trackbuilder->createStraight(c0);
	
	
	vector<string> v;

	v.push_back("Go straight for 600m");
	v.push_back("prepare for a short right turn");
	v.push_back("Go straight for 300m");
	v.push_back("prepare for a short right turn");
	v.push_back("Go straight for 600m");
	v.push_back("prepare for a short left turn");
	v.push_back("Go straight for 1200m");
	v.push_back("prepare for a short right turn");
	v.push_back("Go straight for 600m");
	v.push_back("prepare for a short right turn");
	v.push_back("Go straight for 900m");
	v.push_back("prepare for a long left turn");
	v.push_back("Go straight for 300m");
	v.push_back("prepare for a long right turn");
	v.push_back("Go straight for 600m");
	v.push_back("prepare for a short left turn");
	v.push_back("Go straight for 1800m");
	v.push_back("prepare for a short right turn");
	v.push_back("Go straight for 900m");
	v.push_back("prepare for a short right turn");
	v.push_back("Go straight for 600m");
	v.push_back("prepare for a long right turn");
	v.push_back("Go straight for 600m");
	v.push_back("prepare for a short left turn");
	v.push_back("Go straight for 300m");

	trackbuilder->createDirections(v);
	
	
	trackbuilder->setNameTrack("Melbourne Race Track");
	trackbuilder->setState("Medium");

}

void Australia::setTrackBuilder(TrackBuilder* builder)
{

	trackbuilder=builder;

}

bool Australia::isEuropean(){
	return false;
}

void Australia::setCountryName(string name){
	this->name=name;
}

string Australia::getcountryName(){
	return name;
} 
