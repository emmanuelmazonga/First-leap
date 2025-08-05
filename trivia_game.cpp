#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  // Write code here
  srand(time(NULL));
  string ans;
  int score=0;
  cout<<"WELCOME TO THE FIRST LEAP TRIVIA\n";
  cout<<"RULES: GIVE THE NUMBER OF THE ANSWER TO EACH QUESTION\n";
  cout<<"GOOD LUCK!\n";
    cout<<"Q1) What is the name of the world's longest river? 💧\n";
    cout<<"....\n";
    cout<<"1) Missouri River\n";
    cout<<"2) Nile\n";
    cout<<"3) Amazon River\n";
    cout<<"4) Yangtze River\n";
    cin>>ans;
    if(ans=="1"){
      cout<<"CORRECT\n";
      score++;
    }
    else{
      cout<<"INCORRECT\n";
    }
  
    cout<<"Q2) How many bones are in the human body? 🦴\n";
    cout<<"....\n";
    cout<<"1) 92\n";
    cout<<"2) 150\n";
    cout<<"3) 206\n";
    cout<<"4) 10\n";
    cin>>ans;
    if(ans=="3"){
      cout<<"CORRECT\n";
      score++;
    }
    else{
      cout<<"INCORRECT\n";
    }

    cout<<"Q3) What food never spoils? 😷\n";
    cout<<"\n";
    cout<<"Type your answer in capital letters: ";
    cin>>ans;
    if(ans=="HONEY"){
      cout<<"CORRECT\n";
      score++;
    }
    else{
      cout<<"INCORRECT\n";
    }

  cout<<"YOUR FINAL SCORE IS "<<score<<endl;

  if (score == 3) cout << "Excellent!";
else if (score == 2) cout << "Good try!";
else cout << "Better luck next time!";
  return 0;
}
