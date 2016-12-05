#include "std_lib_facilities_4.h"
#include "GUI.h"
#include "Graph.h"
#include "Window.h"
#include "level.h"
#include "scores.h"


using namespace Graph_lib;

// Each level represents a line in the file; Need to implement level in correspondence to line in file 
void Level_screen::level_3() 
{
	scoresList list(3);
	list.readFile();
	ostringstream oss1;
	ostringstream oss2;
	ostringstream oss3;
	ostringstream oss4;
	ostringstream oss5;
	vector<highScore> vec = list.getVector();
	
	//sc_1.set_label("hey hey");

	
	oss1 << "1        " << vec[4];
	sc_1.set_label(oss1.str());
	oss2 << "2        " << vec[3];
	sc_2.set_label(oss2.str());
	oss3 << "3        " << vec[2];
	sc_3.set_label(oss3.str());
	oss4 << "4        " << vec[1];
	sc_4.set_label(oss4.str());
	oss5 << "5        " << vec[0];
	sc_5.set_label(oss5.str());

title.set_font_size(50);


	detach(L3_button);
	detach(L4_button);
	detach(L5_button);
	detach(L6_button);
	detach(L7_button);	
	detach(Select_level);
	attach(sc_1);
	attach(sc_2);
	attach(sc_3);
	attach(sc_4);
	attach(sc_5);
	attach(next);
	attach(user_name);
	attach(header);
	attach(title);
	redraw();
}
void Level_screen::level_4() 
{
	scoresList list(4);
	list.readFile();
	ostringstream oss1;
	ostringstream oss2;
	ostringstream oss3;
	ostringstream oss4;
	ostringstream oss5;
	vector<highScore> vec = list.getVector();
	
	//sc_1.set_label("hey hey");

	
	oss1 << "1        " << vec[4];
	sc_1.set_label(oss1.str());
	oss2 << "2        " << vec[3];
	sc_2.set_label(oss2.str());
	oss3 << "3        " << vec[2];
	sc_3.set_label(oss3.str());
	oss4 << "4        " << vec[1];
	sc_4.set_label(oss4.str());
	oss5 << "5        " << vec[0];
	sc_5.set_label(oss5.str());

title.set_font_size(50);


	detach(L3_button);
	detach(L4_button);
	detach(L5_button);
	detach(L6_button);
	detach(L7_button);	
	detach(Select_level);
	attach(sc_1);
	attach(sc_2);
	attach(sc_3);
	attach(sc_4);
	attach(sc_5);
	attach(next);
	attach(user_name);
	attach(header);
	attach(title);
	redraw();
}
void Level_screen::level_5() 
{
	scoresList list(4);
	list.readFile();
	ostringstream oss1;
	ostringstream oss2;
	ostringstream oss3;
	ostringstream oss4;
	ostringstream oss5;
	vector<highScore> vec = list.getVector();
	
	//sc_1.set_label("hey hey");

	
	oss1 << "1        " << vec[4];
	sc_1.set_label(oss1.str());
	oss2 << "2        " << vec[3];
	sc_2.set_label(oss2.str());
	oss3 << "3        " << vec[2];
	sc_3.set_label(oss3.str());
	oss4 << "4        " << vec[1];
	sc_4.set_label(oss4.str());
	oss5 << "5        " << vec[0];
	sc_5.set_label(oss5.str());

title.set_font_size(50);


	detach(L3_button);
	detach(L4_button);
	detach(L5_button);
	detach(L6_button);
	detach(L7_button);	
	detach(Select_level);
	attach(sc_1);
	attach(sc_2);
	attach(sc_3);
	attach(sc_4);
	attach(sc_5);
	attach(next);
	attach(user_name);
	attach(header);
	attach(title);
	redraw();

}
void Level_screen::level_6() 
{
	scoresList list(4);
	list.readFile();
	ostringstream oss1;
	ostringstream oss2;
	ostringstream oss3;
	ostringstream oss4;
	ostringstream oss5;
	vector<highScore> vec = list.getVector();
	
	//sc_1.set_label("hey hey");

	
	oss1 << "1        " << vec[4];
	sc_1.set_label(oss1.str());
	oss2 << "2        " << vec[3];
	sc_2.set_label(oss2.str());
	oss3 << "3        " << vec[2];
	sc_3.set_label(oss3.str());
	oss4 << "4        " << vec[1];
	sc_4.set_label(oss4.str());
	oss5 << "5        " << vec[0];
	sc_5.set_label(oss5.str());

title.set_font_size(50);


	detach(L3_button);
	detach(L4_button);
	detach(L5_button);
	detach(L6_button);
	detach(L7_button);	
	detach(Select_level);
	attach(sc_1);
	attach(sc_2);
	attach(sc_3);
	attach(sc_4);
	attach(sc_5);
	attach(next);
	attach(user_name);
	attach(header);
	attach(title);
	redraw();
}
void Level_screen::level_7() 
{
	scoresList list(4);
	list.readFile();
	ostringstream oss1;
	ostringstream oss2;
	ostringstream oss3;
	ostringstream oss4;
	ostringstream oss5;
	vector<highScore> vec = list.getVector();
	
	//sc_1.set_label("hey hey");

	
	oss1 << "1        " << vec[4];
	sc_1.set_label(oss1.str());
	oss2 << "2        " << vec[3];
	sc_2.set_label(oss2.str());
	oss3 << "3        " << vec[2];
	sc_3.set_label(oss3.str());
	oss4 << "4        " << vec[1];
	sc_4.set_label(oss4.str());
	oss5 << "5        " << vec[0];
	sc_5.set_label(oss5.str());

title.set_font_size(50);


	detach(L3_button);
	detach(L4_button);
	detach(L5_button);
	detach(L6_button);
	detach(L7_button);	
	detach(Select_level);
	attach(sc_1);
	attach(sc_2);
	attach(sc_3);
	attach(sc_4);
	attach(sc_5);
	attach(next);
	attach(user_name);
	attach(header);
	attach(title);
	redraw();
}


Level_screen::Level_screen(Point xy, int w, int h, const string& title)
: Window{xy, w, h, title},
next{Point{350,300},100,50,"Next",
[](Address, Address pw) {reference_to<Level_screen>(pw).next1();}},
L3_button{Point{150,250},50,50,"Level 3",
[](Address, Address pw) {reference_to<Level_screen>(pw).level_3();}},
L4_button{Point{200,250},50,50,"Level 4",
	[](Address, Address pw) {reference_to<Level_screen>(pw).level_4();}},
L5_button{Point{250,250},50,50,"Level 5",
	[](Address, Address pw) {reference_to<Level_screen>(pw).level_5();}},
L6_button{Point{300,250},50,50,"Level 6",
	[](Address, Address pw) {reference_to<Level_screen>(pw).level_6();}},
L7_button{Point{350,250},50,50,"Level 7",
	[](Address, Address pw) {reference_to<Level_screen>(pw).level_7();}},
Select_level{Point{x_max()-450,y_max()-200},"Select a level"},
sc_1{Point{250,120},"N/A"},
sc_2{Point{250,140},"N/A"},
sc_3{Point{250,160},"N/A"},
sc_4{Point{250,180},"N/A"},
sc_5{Point{250,200},"N/A"},
header{Point{250,100},"Rank  Name  Score"},
user_name{Point{200,300}, 50, 50, "Enter Your Intials Here"},
title(Point{x_max()-400,y_max()-350},"Scores")
{
	attach(L3_button);
	attach(L4_button);
	attach(L5_button);
	attach(L6_button);
	attach(L7_button);	
	attach(Select_level);
	TopScores_in;{TopScores_in;};
	Select_level.set_font_size(40);
}
