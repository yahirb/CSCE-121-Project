#include "std_lib_facilities_4.h"
#include "GUI.h"
#include "Graph.h"
#include "Window.h"

using namespace Graph_lib;

class Explanation : public Graph_lib::Window {

private:
  Button start_button;
  Text titled, desc_1, desc_2, desc_3, desc_4, desc_5, desc_6;
  //Text member2;
  //Text member3;

public:
  Explanation(Point xy, int w, int h, const string& title);
  void quit() {hide();}
  void start();

};