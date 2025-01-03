#include<iostream> //used for input output on console screen.
#include<windows.h> // Used for Random function.
#include<ctime> //Used for time changing.
using namespace std;
string name;
void begin()
{
	cout<<"\t\t\t\t"<<name<<",You can save My life\n\n";
	cout<<"\t\t\t\t___________________________\n";
	cout<<"\t\t\t\t             |             |\n";
	cout<<"\t\t\t\t             O             |\n";
	cout<<"\t\t\t\t            / \\            |          "<<name<<" ,You can save his life\n";
	cout<<"\t\t\t\t             |             |                /\n";
	cout<<"\t\t\t\t           /   \\           |               O\n";
	cout<<"\t\t\t\t        ************       |              / \\\n";
	cout<<"\t\t\t\t        |          |       |         \\     |  \n";
	cout<<"\t\t\t\t        |          |       |       ***** /   \\\n";
	cout<<"\t\t\t\t________|__________|_______________|___|________\n";
}
void release()
{
	cout<<"\t\t\t\t___________________________\n";
	cout<<"\t\t\t\t                           |\n";
	cout<<"\t\t\t\t             O             |\n";
	cout<<"\t\t\t\t            / \\            |          "<<name<<" ,You saved his life. He is free.\n";
	cout<<"\t\t\t\t             |             |                /\n";
	cout<<"\t\t\t\t           /   \\           |               O\n";
	cout<<"\t\t\t\t        ************       |              / \\\n";
	cout<<"\t\t\t\t        |          |       |         |     |  \n";
	cout<<"\t\t\t\t        |          |       |       ***** /   \\\n";
	cout<<"\t\t\t\t________|__________|_______________|___|________\n";
}
void hanged()
{
	cout<<"\t\t\t\t___________________________\n";
	cout<<"\t\t\t\t             |             |\n";
	cout<<"\t\t\t\t             |             |\n";
	cout<<"\t\t\t\t             O             |\n";          
	cout<<"\t\t\t\t            / \\            |     "<<name<<" ,You could not his life. He is dead.\n";           
	cout<<"\t\t\t\t             |             |             O\n";
	cout<<"\t\t\t\t      **** /   \\  ****     |            / \\\n";
	cout<<"\t\t\t\t        |          |       |       /     |  \n";
	cout<<"\t\t\t\t        |          |       |     ***** /   \\\n";
	cout<<"\t\t\t\t________|__________|_____________|___|________\n";
}
void correct()
{
	cout<<"\t\t\t\t___________________________\n";
	cout<<"\t\t\t\t             |             |\n";
	cout<<"\t\t\t\t             O             |\n";
	cout<<"\t\t\t\t            / \\            |          "<<name<<" ,correct guess.\n";
	cout<<"\t\t\t\t             |             |                /\n";
	cout<<"\t\t\t\t           /   \\           |               O\n";
	cout<<"\t\t\t\t        ************       |              / \\\n";
	cout<<"\t\t\t\t        |          |       |         |     |  \n";
	cout<<"\t\t\t\t        |          |       |       ***** /   \\\n";
	cout<<"\t\t\t\t________|__________|_______________|___|________\n";
}
void incorrect()
{
	cout<<"\t\t\t\t___________________________\n";
	cout<<"\t\t\t\t             |             |\n";
	cout<<"\t\t\t\t             O             |\n";
	cout<<"\t\t\t\t            / \\            |    OOPS!"<<name<<" ,Incorrect guess! Try Again.\n";
	cout<<"\t\t\t\t             |             |                /\n";
	cout<<"\t\t\t\t           /   \\           |               O\n";
	cout<<"\t\t\t\t        ************       |              / \\\n";
	cout<<"\t\t\t\t        |          |       |         |     |  \n";
	cout<<"\t\t\t\t        |          |       |       ***** /   \\\n";
	cout<<"\t\t\t\t________|__________|_______________|___|________\n";
	
}
int main()
{
	   system("color 0A");
	string tittle=
	"\t\t\t*       *   *****   *       *****   *****   *      *   *****\n"
	"\t\t\t*       *   *       *       *       *   *   * *  * *   *    \n"
    "\t\t\t*   *   *   *****   *       *       *   *   *   *  *   *****\n"
    "\t\t\t* *   * *   *       *       *       *   *   *      *   *    \n"
	"\t\t\t*       *   *****   *****   *****   *****   *      *   *****\n";
	   for (int l=0;l<tittle.length();l++)
	   {
        Sleep(6);
        cout<<tittle[l];
       }
        start:
        cout<<"Enter Player name : ";
		getline(cin,name);
		int chances=3;
	string array[10]={"horse","camel","tiger","lion","cat","yalk","fox","donkey","bear","monkey"};
	int i;
	srand(time(0));	          
	             
	    int index=rand()%10;         
	             
	    string word=array[index];
		string hide_word(word.length(),'x');
		
		    cout<<"Hidden Word\n";
			cout<<" _______\n";
			cout<<"*-------*\n";
			cout<<"* "<<hide_word<<" *\n";
			cout<<"*-------*\n";
			cout<<"*_______*\n";
			begin();
			while(word.compare(hide_word)!=0)
			{
				cout<<"Hint : It is the name of Animal\n";
				cout<<"chances : "<<chances<<endl;
				
				char key;
				cout<<"\t\t\tGuess "<<name<<" any character :";
				cin>>key;
				 system("cls");
				 
				 for(i=0;i<word.length();i++){
				 	if(word[i]==key){
				 		system("color f0");
				 		hide_word[i]=key;
			cout<<"Hidden Word\n";
			cout<<" _______\n";
			cout<<"*-------*\n";
			cout<<"* "<<hide_word<<" *\n";
			cout<<"*-------*\n";
			cout<<"*_______*\n";
			correct();
			break;
					 }
				 }
				 if(i==word.length()){
				 	system("color e4");
				 	cout<<"Hidden Word\n";
			cout<<" _______\n";
			cout<<"*-------*\n";
			cout<<"* "<<hide_word<<" *\n";
			cout<<"*-------*\n";
			cout<<"*_______*\n";
			incorrect();
			chances--;
				 	
				 }
				 if(chances==0)
				 {
				 	system("color f4");
				 	cout<<"chances : "<<chances<<" !"<<endl;
				 	cout<<"\t\t\t\t\tG A M E O V E R!!!!!!!\n\t\t\t\t\t YOU LOST!!!!\n";
				 	hanged();
				 	break;
				 }
				 if(word.compare(hide_word)==0){
				 	cout<<"\t\t\t\tCongratulations! You won the game........\n";
				 	system("color f2");
				 	release();
				 	break;
				 }
					} 
					string ch;
					cout<<endl;
					cout<<"\t\t\t\t\t Do you want to play game again? : ";
					cin>>ch;
					system("cls");
					if(ch=="yes"|| ch=="Yes")
					{
						goto start;
				    }
					else{
						cout<<"\t\t\t\t\t\t GAME EXITED \n";
					}
					cout<<"\n\n\n\n";
					cout<<"\t\t\t\t\t This game is developed by Affan and Mahnoor\n";
					return 0; 	             
}
