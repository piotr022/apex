#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

/*	  
 *	  Program ten jest do ulatwienia korzystania z debiana
 *	  Bedzie zawarte tu wiele przydatnych opci
 *	  bla bla bla bla blaalcskdmamlamflfmm;af
 */
int install();
int update();
int search();
int fix();
int list();
int clear();
int disk();

int main()
{
	cout << "Welcome This is first Version of program :D\n\n";


		int x = 999; //zmienna menu
menu:
	system("clear");
    while(x>7 || x<1)
    {
    cout<<"===============[MENU]===============";
		if (x != 999)			//999 zeruje warosc bledu
			cout << "     [incorrect value]";
		else
			cout << "     [to exit Ctrl+C]";
			cout << endl;
    cout<<"[1] install packagate by name"<<endl;
    cout<<"[2] update packagate list"<<endl;
    cout<<"[3] search packagate by name"<<endl;
    cout<<"[4] try to fix broken depends"<<endl;
    cout<<"[5] list installed packagates"<<endl;
	cout<<"[6] delete old archives"<<endl;
	cout<<"[7] show free disk space"<<endl;
    cout<<"choose: ";
    cin>>x;
		system("clear");
     }
    int y;
    switch (x)
    {
       case 1:
			install();
              break;
       case 2:
			update();
              break;
       case 3:
			search();
              break;
       case 4:             
			fix();
              break;
       case 5:   
			list();
              break; 
	   case 6:   
			clear();
              break;
	   case 7:
			disk();
			break;
           }

system("read");
	x=999;
goto menu;
}

int install(){
	char pakiet[60];
	char komenda[60] = "sudo apt-get install ";
	cout << "packagate name: ";
	
	cin >> pakiet;
	string kom(komenda);
	string pak(pakiet);
	string wynik = kom+pak;
	const char* xxx = wynik.c_str();
	system(xxx);

}

int update(){
	system("sudo apt-get update");
}

int search(){
	char pakiet[60];
	char komenda[60] = "sudo apt-cache search ";
	cout << "packagate name: ";
	
	cin >> pakiet;
	string kom(komenda);
	string pak(pakiet);
	string wynik = kom+pak;
	const char* xxx = wynik.c_str();
	system(xxx);
	int wtf;
	cout << "\n\nwrite 0 to back to menu: ";
	cin >> wtf;
}

int fix(){
	system("sudo apt-get -f install");
}

int list(){
	system("dpkg-query -Wf '${Installed-Size}\t${Package}\n' | sort -n");
	int wtf;
	cout << "\n\nwrite 0 to back to menu: ";
	cin >> wtf;
}

int clear(){
	system("sudo apt-get clean");
}

int disk(){
	system("df");
	int wtf;
	cout << "\n\nwrite 0 to back to menu: ";
	cin >> wtf;
}
