
# include <iostream>
using namespace std;
int rectangle_area(int width, int height);
int square_area(int side);
int triangle_area(int base , int height);


  int rectangle_area(int width, int height){
    int area =width*height ;
    return area;
}

int square_area(int side){
    int area;
    area = side*side;
    return area;
}

 int triangle_area(int base , int height){
    int area;

     area = height*(base/2);
 
    return area;
      } 



 int main(){
     // prompt user to select option
    int option ;
do {
    cout <<"select option"<<  endl;
    //cout <<""<<  endl;
    cout <<"======================================================"<<  endl;

    cout <<" 1. rectangle"<<  endl;
    cout <<" 2.square"<< endl;
    cout <<" 3.triangle"<< endl;
    cout <<" 4.quit"<< endl;
    cout <<""<< endl;
    cout <<" Enter Option :"<<  endl;
    cin>>option; 


    if (option <1 || option >4){
        cout <<"Invalid Choice Enter Valid Option"<<  endl;
    }

    else{


        switch(option){

            case 1:
        // area rectangle
                  int width;
                  int length;
                  int area1;
                  cout <<"Enter width:"<<  endl;
                  cin>> width;
                  cout <<"Enter length:"<<  endl;
                  cin>> length;
                  area1 =rectangle_area( width, length);
                  cout <<"The Area Of Rectangle Is:"<<area1<<  endl;
                  break;
            case 2:     
        // area of square
                  int side;
                  int area2;
                  cout <<"Enter side:"<<  endl;
                  cin>> side;
                  area2 =square_area(side );
                  cout <<"The Area Of Square Is:"<<area2<<  endl;
                  break;
     
            case 3:
        // area of triangle    
                  int base;
                  int height;
                  int area3;
                  cout <<"Enter base:"<<  endl;
                  cin>> base;
                  cout <<"Enter height:"<<  endl;
                  cin>> height;
                  area3 =triangle_area( base, height);
                  cout <<"The Area Of Triangle Is:"<<area3<<  endl;
                  break;
        // quitting the program
            case 4:
                 // exit(0);
                  break;

 
            default: 
                    cout <<" Invalid option,please select valid option"<< endl;              
           }
        }

    }
       
while(option!=0);


return 0 ;



}