#include "explain.h"
#include "splash.h"



        
int main()
try {


 Explanation description{Point{100,100},600,400,"Description"};
 Splash_screen splash{Point{100,100},600,400,"Splash"};
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
