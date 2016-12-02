#include "explain.h"
#include "splash.h"
#include "level.h"



        
int main()
try {

	Point t1(100,100);
	Level_screen win(t1,600,400,"Select Level");
	Explanation description{t1,600,400,"Description"};
	Splash_screen splash{t1,600,400,"Splash"};
 //description.show();
 //splash.show();



  return gui_main();



  return 0;
}
catch(exception& e) {
  cerr << "exception: " << e.what() << '\n';
  return 1;
}
catch (...) {
  cerr << "Some exception\n";
  return 2;
}
