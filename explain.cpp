#include "explain.h"

void Explanation::start()
{
  
  hide();
}


Explanation::Explanation(Point xy, int w, int h, const string& title)
  :Window{xy,w,h,title},
    start_button{Point{250,300},100,50,"Continue",
      [](Address, Address pw) {reference_to<Explanation>(pw).start();}},
      titled(Point{x_max()-450,y_max()-300},"How to Play"),
      desc_1(Point{15,150},"The object of the game is to rearrange a certain number of tiles "),
      desc_5(Point{15,170},"(each labelled with a digit or an operator) to yield the highest arithmetic value."),
      desc_2(Point{15,190},"For example, the three tiles could be rearranged to 3+5 = 8, 5+3 = 8, or +35 = 35"),
      desc_3(Point{15,210},"Since +53 has the highest value, that is the best move."),
      desc_4(Point{15,230},"If 35+ or 53+ is chosen, the score is zero since that is not a"),
      desc_6(Point{15,250},"“well-formed formula” in arithmetic (in other words, it is an illegal move).")

    { 

      attach(desc_1);
      attach(desc_2);
      attach(desc_3);
      attach(desc_4);
      attach(desc_5);
      attach(desc_6);
      attach(titled);
      attach(start_button);
      titled.set_font_size(50);

    }
        


