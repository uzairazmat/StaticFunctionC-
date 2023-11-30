#include <iostream>
using namespace std;

class Student{

  int id;
  static int number_of_id;
  public:
    int  static create_id();
    int get_id();
    Student();
};

Student :: Student (){
id  = Student :: create_id() ; 
  
}

int Student :: get_id(){

  return id ;
}
int Student ::  create_id(){

  number_of_id++;
  return number_of_id ;

  
}
int Student ::  number_of_id = 0 ;

int main() {

  Student s1 ; 
  Student s2 ;
  Student s3 ; 
  cout<<"s1 id : "<<s1.get_id()<<endl;
  cout<<"s2 id : "<<s2.get_id()<<endl;
  cout<<"s3 id : "<<s3.get_id()<<endl;
  
  
  
}