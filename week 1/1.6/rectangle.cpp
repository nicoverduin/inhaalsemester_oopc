#include "rectangle.hpp"

rectangle::rectangle( hwlib::window & w, int start_x, int start_y, int end_x, int end_y):
   w( w ),
   left(   w, start_x, start_y, start_x,   end_y + 1 ),
   right(  w, end_x,   start_y, end_x,     end_y + 1 ),
   top(    w, start_x, start_y, end_x + 1, start_y ),
   bottom( w, start_x, end_y,   end_x + 1, end_y ),
   start_x(start_x),
   start_y(start_y),
   end_x(end_x),
   end_y(end_y)
{}

void rectangle::print(){
   left.print();
   right.print();
   top.print();
   bottom.print();
}

void rectangle::fill_print(){
    for(signed int i=start_x ; i < end_x+1 ; i++){
        for(signed int j=start_y ; j < end_y+1 ; j++){        
            w.write( hwlib::xy(i,j) , hwlib::color());
        }
    }   
}

