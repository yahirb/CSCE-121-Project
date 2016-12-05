#include "std_lib_facilities_4.h"
#include "Simple_window.h"
#include "GUI.h"
#include "Graph.h"
#include "Window.h"

#include <utility> // Needed to use pair constructor


using namespace Graph_lib;

class Level_screen: public Graph_lib::Window{
	

private:
	Button L3_button;
	Button L4_button;
	Button L5_button;
	Button L6_button;
	Button L7_button;
	Button next;
	Text Select_level; 
	Text header;
	Text title;
	Text sc_1, sc_2, sc_3, sc_4, sc_5;
	ifstream TopScores_in {"TopScores_in.txt"};
	In_box user_name;
public:
	Level_screen(Point xy, int w, int h, const string& title);
	void level_3();
	void level_4();
	void level_5();
	void level_6();
	void level_7();
	void next1() {hide();}
};





  

