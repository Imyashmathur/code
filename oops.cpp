#include<iostream>
#include<cstring>
using namespace std;
class Hero{
  private:
   int health;
    public:
    char *name;
   char level;
  static int timeToComplete;

   Hero(){
    cout<<"Simple Constructor called"<<endl;
    name = new char[100];
   }

      Hero(int health){
    this->health = health;
   }

   Hero(int health,char level){
   this-> level = level;
    this->health = health;
   }

   Hero(Hero& temp){

   char *ch = new char[strlen(temp.name)+1];
   strcpy(ch,temp.name);
   this->name = ch;


    cout<<"Copy constructor called "<<endl;
     this->health = temp.health;
     this->level = temp.level;
   }

   void print(){
    cout<<endl;
    cout<<"Name: "<<this->name<<" ,";
    cout<<"health: "<<this->health<<" ,";
    cout<<"level: "<<this->level<<endl;
    cout<<endl;
   }
   int getHealth(){
    return health;
   }
   char getLevel(){
    return level;
   }
   void setHealth(int h){
    health = h;
   }
   void setLevel(char ch){
    level = ch;
   }
   void setName(char name[]){
    strcpy(this->name, name);
   }
 static int random(){
    return timeToComplete;
 }


   ~Hero(){
    cout<<"Destructor called"<<endl;
   }
};
 
int Hero::timeToComplete = 5;
int main(){


   // cout<<Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;

// Hero a;
// cout<<a.timeToComplete<<endl;





//    Hero a;

//    Hero *b = new Hero();
//    delete b;

   return 0;
}





// Hero hero1;
// hero1.setHealth(12);
// hero1.setLevel('D');
// char name[7] = "Babbar";
// hero1.setName(name);
// hero1.print();


// Hero hero2(hero1);
// // hero2.print();
// // Hero hero2 = hero1;


// hero1.name[0] = 'G';
// hero1.print();

// hero2.print();

// hero1 = hero2;
// hero1.print();
// hero2.print();









// Hero suresh(70,'C');
// suresh.print();
// Hero ritesh(suresh);
// ritesh.print();





















    
//     Hero ramesh(10);
//    // cout<<"Address of ramesh "<<&ramesh<<endl;
//    // ramesh.getHealth();
//     ramesh.print();

//     Hero *h = new Hero(11);
//     h->print();
//     Hero temp(22,'B');
//     temp.print();

// Hero a;

// a.setHealth(80);
// a.setLevel('B');

// cout<<"level is: "<<a.level<<endl;
// cout<<"health is: "<<a.getHealth()<<endl;

// Hero *b = new Hero;
// b->setLevel('A');
// b->setHealth(70);

// cout<<"level is: "<<(*b).level<<endl;
// cout<<"health is: "<<(*b).getHealth()<<endl;

// cout<<"level is: "<<b->level<<endl;
// cout<<"health is: "<<b->getHealth()<<endl;

//    Hero ramesh;
//    cout<<"Ramesh health is: "<<ramesh.getHealth()<<endl;
//    ramesh.setHealth(70);
//    ramesh.level = 'A';
//    cout<<"health is: "<<ramesh.getHealth()<<endl;
//    cout<<"Level is: "<<ramesh.level<<endl;
    
//     return 0;
// }