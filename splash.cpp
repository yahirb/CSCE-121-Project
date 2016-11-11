#include "std_lib_facilities_4.h"
#include "GUI.h"
#include "Graph.h"
#include "Window.h"
#include "splash.h"

using namespace Graph_lib;



void Splash_screen::start()
{
  
  hide();
}


Splash_screen::Splash_screen(Point xy, int w, int h, const string& title)
  :Window{xy,w,h,title},
    start_button{Point{250,250},125,50,"Start",
      [](Address, Address pw) {reference_to<Splash_screen>(pw).start();}},
      game_name(Point{x_max()-450,y_max()-300},"Numberize Me"),
      member1(Point{100,390},"Yahir Bravo"),
      member2(Point{235,390},"Antonio Carreon"),
      member3(Point{375,390},"Adaora Atuegbu"),
      group_number(Point{240,370},"Group 9:")

    { 

      attach(start_button);
      attach(game_name);
      attach(member1);
      attach(member2);
      attach(member3);
      attach(group_number);
      game_name.set_font_size(50);
      member1.set_font_size(15);
      member2.set_font_size(15);
      member3.set_font_size(15);
      group_number.set_font_size(15);

    }
        
