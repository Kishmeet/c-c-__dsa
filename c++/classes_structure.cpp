// classes are user-defined data types that represent a blueprint for objects.
#include <iostream>
class Player 
    { //private by default
        public:
            int x,y;
            int speed;
    void movePlayer(int xa, int ya) //pass by reference
    {
        x += xa * speed;
        y += ya * speed;
    }
    };
//structure is similar to class but members are public by default  
// similar like c struct but can have methods and constructors 
struct Vect2 //members are public by default
{
    int x,y;
};
int main()
{ 
Player player; //object of class Player
player.x=0;
player.y=0;
player.speed=5;
player.movePlayer(1,-1); 
std::cout<<"Player position: "<<player.x<<" "<<player.y<<std::endl;
Player *p=&player; //pointer to object of class Player
p->movePlayer(5,5);
std::cout<<"Player position: "<<p->x<<" "<<p->y<<std::endl;
struct Vect2 v; //object of structure Vect2
v.x=10;
v.y=20;
std::cout<<"Vector position: "<<v.x<<" "<<v.y<<std::endl;
struct Vect2 *vp=&v; //pointer to object of structure Vect2
std::cout<<"Vector position: "<<vp->x<<" "<<vp->y<<std::endl;
return 0;
}

