#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string names[10];
string colors[10];
int scores[10];
int count = 0;

void iPut(){
   for (int i = 0;  i < 5; i++){
      cout << "Enter kitten "<< i + 1 << "'s name:" << endl;
      cin >> names[i];
      
      cout << "Enter kitten "<< i + 1 << "'s color:"<< endl;
      cin >> colors[i];
      
      cout <<"Enter kitten "<< i + 1 << "'s cuteness score:"<<endl<<endl;
      cin >> scores[i];
      
      count += 1;
   }
   cout << "ROSTER" << endl;
   for (int x = 0; x <5; x++){
      cout<< "Kitten " << x +1  << " -- " << "Name: " << names[x]
      << ", Color: " << colors[x] << ", Score: " << scores[x] << endl;
   }
   cout<<endl;
}


void addKitten(){
   
   if (count >= 10) {
      cout << "Impossible to add new kitten: roster is full." << endl<<endl;
      return;
   } 
   else {
      cout<<"Enter a new kitten's name:"<<endl;
      cin>> names[count];
      //cout<< names[count]<<endl;
      cout<<"Enter the kittens's color:"<<endl;
      cin>> colors[count];
      //cout<<colors[count]<<endl;
      cout<<"Enter the kittens's cuteness score:"<<endl<<endl;
      cin>>scores[count];
      //cout<<scores[count]<<endl;
      count += 1;
      
   }
}

void removeKitten(){
   string delKitten;
   if(count == 0){
      cout <<"Can not delete from empty roster."<<endl<<endl;
   }
   else{
      cout << "Enter a kitten's name:"<< endl;
      cin >> delKitten;
      int y;
      for(y= 0; y< count; y++){
         if(names[y] == delKitten){
            break;
         }
      }
      if (y == count) {
         cout<< "Error! Kitten " << delKitten << " not found." << endl<<endl;
      }
      else {
         for ( int x = y + 1 ; x < count ; x++){
            names[x-1] = names[x];
            colors[x-1]= colors[x];
            scores[x-1] = scores[x];
         }
         cout<<endl;
         count -= 1;
      }
      
   }
}

void kittenUpd(){
   string nkitten;
   string ncolor;
   int nscore;
  
   cout << "Enter a kitten's name:" << endl;
   cin >> nkitten;
   cout << "Enter a new color for the kitten:"<< endl;
   cin >> ncolor;
   cout << "Enter a new cuteness score for the kitten:"<< endl<<endl;
   cin>> nscore;
   
   for(int y= 0; y< count; y++){
         if(names[y] == nkitten){
            colors[y]=ncolor;
            scores[y] = nscore;
            return;
         }
         else{
            break;
         }
      }
   
   
}


void kittenRating(){
   int rattee;
   cout<< "Enter a rating:" << endl<<endl;
   cin>> rattee;
   cout<<"ABOVE "<<rattee<<endl;
   for (int x = 0 ; x<count; x++){
      if(scores[x] >= rattee){
         cout<< "Kitten " << x +1  << " -- " << "Name: " << names[x] << 
       ", Color: " << colors[x] << ", Score: " << scores[x] << endl;
      }
   
   }
   cout<<endl;      
      
   
   
   
   
}   


void outRost(){
   
   cout << "ROSTER" << endl;
   for (int x = 0; x < count; x++){
      cout<< "Kitten " << x +1 << " -- " << "Name: " << names[x] << 
       ", Color: " << colors[x]   << ", Score: " << scores[x] << endl;
   }
   cout<<endl;
   
   
}
int main() {
   
   iPut();

   string userInput = "";
   while (userInput != "q") {
      cout << "MENU" << endl;
      cout << "a - Add kitten"<<endl;
      cout << "d - Remove kitten" << endl;
      cout << "u - Update kitten color and cuteness score" << endl;
      cout << "r - Output kittens above a rating" << endl;
      cout << "o - Output roster" << endl;
      cout << "q - Quit" << endl<<endl;
      
      cout << "Choose an option:" << endl;
      
      cin >> userInput;
      if (userInput.compare("a") == 0){
         addKitten();
      }
      else if( userInput.compare("d") == 0){
         
         removeKitten();
      }
   
      else if(userInput.compare("u") == 0){
         //cout << "UP" << endl;
         kittenUpd();
      }
      else if(userInput.compare("r") == 0){
         //cout << "rating" << endl;
         kittenRating();
      }
      else if(userInput.compare("o") == 0){
         //cout << "out" << endl;
         outRost();
      }
      
     
   }
   

}
     