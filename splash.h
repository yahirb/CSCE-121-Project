#include "std_lib_facilities_4.h"
#include "GUI.h"
#include "Graph.h"
#include "Window.h"

using namespace Graph_lib;
class Splash_screen : public Graph_lib::Window {

private:
  Button start_button;
  Text game_name, member1, member2, member3, group_number;
  //Text member2;
  //Text member3;

public:
  Splash_screen(Point xy, int w, int h, const string& title);
  void start();

};