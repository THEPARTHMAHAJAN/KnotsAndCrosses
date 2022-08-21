#include<iostream>
#include<ctime>
#include<windows.h>
using namespace std;
char board[9] = {' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' '};
void cleargrid3X3();
void Welcome();
void rule1();
void rule2();
void rule3();
void main_menu();
void Grid();
void know_about_game();
void backspace();
void Grid3X3();
void Grid5X5();
void Grid7X7();
void show_board3X3();
void get_x_player_choice3X3();
void get_o_player_choice3X3();
void get_computer_choice3X3();
int count_board3X3(char symbol);
char check_winner3X3();
void computer_vs_player3X3();
void player_vs_player3X3();
char board5X5[25] = {' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ',' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ',' ' , ' ' , ' ' , ' ' , ' ' , ' ',' '};
void cleargrid5X5();
void show_board5X5();
void get_x_player_choice5X5();
void get_o_player_choice5X5();
void get_computer_choice5X5();
int count_board5X5(char symbol);
char check_winner5X5();
void computer_vs_player5X5(); 
void player_vs_player5X5();
//void changeColor(int desiredColor);
char board7X7[49]= {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
void cleargrid7X7();
void show_board7X7();
void get_x_player_choice7X7();
void get_o_player_choice7X7();
void get_computer_choice7X7();
int count_board7X7(char symbol);
char check_winner7X7();
void computer_vs_player7X7();
void player_vs_player7X7();


ostream& bold_on(ostream& os)
{
return os << "\e[1m";
}
ostream& bold_off(ostream& os)
{
return os << "\e[0m";
}
int main(){
Welcome();
backspace();

  return 0;
}
void backspace(){
    
    int n;
    //changeColor(12);
    system("Color F1");
    cout<<"ENTER 1 TO GO TO MAIN MENU "<<endl;
    cout<<"ENTER 2 TO KNOW MORE ABOUT GAME"<<endl;
    cout<<"ENTER 3 TO EXIT"<<endl;
    cin>>n;
    switch(n){
        case 1: {
            main_menu();
            break;
        }
        case 2:{
            know_about_game();
            break;
        }
        case 3:{
            exit(1);
            break;
        }
        default:{
            cout<<"ERROR SELECT THE VALID NUMBER FROM THE ABOVE LIST"<<endl;
        backspace();}
    }
}
void Welcome(){
    string s;
    cout<<"ENTER THE NAME: "<<endl;
    getline(cin,s);
    cout<<bold_on<<"Welcome!!!\n"<<s<<bold_off<<" HOPE YOU HAVE A REALLY GOOD TIME PLAYING THIS GAME \n\n" ;
    
}
void rule1(){
    system("cls");
    cout<<bold_on<<"THE RULES OF ROUND 1 ARE AS FOLLOWS: "<< bold_off<<endl;
    cout<<"1. IN 3X3 GRID CONNECT THREE "<<bold_on<<"X's"<<bold_off<< "OR THREE"<<bold_on<< "O's"<< bold_off<< "IN A ROW TO WIN THE GAME ."<<endl;
    cout<<"2. BLOCK USED ONCE CANNOT BE RE-USED."<<endl;
    cout<<"3.PLAYER CAN ONLY SELECT ONE SYMBOL."<<endl;
    cout<<"4. 2 PLAYERS CAN ONLY PLAY.\n\n\n"<<endl;
}
void rule2(){
    system("cls");
    cout<<bold_on<<"THE RULES FOR ROUND 2 IS AS FOLLOWS: "<<bold_off<<endl;
    cout<<"1. IN 5X5 GRID CONNECT FOURS"  <<bold_on<<"X's"<<bold_off<< "OR FOURS"<<bold_on<< "O's"<< bold_off<< "IN A ROW TO WIN THE GAME."<<endl;
    cout<<"2. BLOCK USED ONCE CANNOT BE RE-USED. "<<endl;
    cout<<"3. PLAYER CAN ONLY SELECT ONE SYMBOL."<<endl;
    cout<<"4. 2 PLAYERS CAN ONLY PLAY.\n\n\n"<<endl;
}
void rule3(){
    system("cls");
    cout<<bold_on<<"THE RULES FOR ROUND 3 IS AS FOLLOWS: "<<bold_off<<endl;
    cout<<"1. IN 7X7 GRID CONNECT FIVE "<<bold_on<<"X"<<bold_off<< "OR FOURS"<<bold_on<< "O"<< bold_off<< "IN A ROW TO WIN THE GAME."<<endl;
    cout<<"2. BLOCK USED ONCE CANNOT BE RE-USED. "<<endl;
    cout<<"3. PLAYER CAN ONLY SELECT ONE SYMBOL."<<endl;
    cout<<"4. 2 PLAYERS CAN ONLY PLAY.\n\n\n"<<endl;
}
void main_menu(){
    int MainMenu;
    system("cls");
    cout<<"ENTER 1 FOR A NEW GAME"<<endl;
    cout<<"ENTER 2 TO RETURN TO HOME "<<endl;
    cin>>MainMenu;
    switch(MainMenu){
        case 1:{Grid();
             break;
        }
        case 2:{
            backspace();
            break;
        }
        default:{cout<<bold_on<<"ERROR SELECT THE VALID NUMBER FROM THE ABOVELIST"<<bold_off<<endl;
        main_menu();
        }
    }
}
void Grid(){
    int typeOfGrid;
    system("cls");
    cout<<"ENTER 1 FOR  3X3 GRID"<<endl;
    cout<<"ENTER 2 FOR  5X5 GRID"<<endl;
    cout<<"ENTER 3 FOR  7X7 GRID"<<endl;
    cout<<"ENTER 4 TO RETURN TO HOME\n\n\n"<<endl;
    cin>>typeOfGrid;
    switch(typeOfGrid){
        case 1:
        {
            rule1();
            Grid3X3();
            //grid for 3X3
            break;
        }
        case 2:{
            rule2();
            Grid5X5();
            //grid for 5X5
            break;
        }
        case 3:{
            rule3();
            Grid7X7();
            //grid for 7X7
        break;
        }

        case 4:{
            backspace();
        break;}
        default:{cout<<bold_on<<"ERROR SELECT THE VALID NUMBER FROM THE ABOVELIST"<<bold_off<<endl;
        Grid();}
    }
    }
void know_about_game(){
 cout<<"PLACE A" <<bold_on<<"X's"<<bold_off<< "OR"<<bold_on<< "O's"<< bold_off<<" IN A PARTICAL BLOCK OF THE GRID "<<endl;
 cout<<"YOU HAVE TO MAKE A HORIZONTAL, VERTICLE OR A DAIGNOL LINE EDGE TO EDGE TO WIN THE GAME.....\n";
}
void Grid3X3(){ 
    int mode;
    system("cls");
    system("Color F1");
    cout<<"  ENTER YOUR CHOICE"<<endl;
    cout << "1. Computer VS Player." << endl;
    cout << "2. Player VS Player." << endl;
    cout << "Select Game Mode." << endl;
    cin >> mode;
    switch(mode) {
        case 1 :
            computer_vs_player3X3();
            break;
        case 2:
            player_vs_player3X3();
            break;
        default :
            cout << "Please Select Valid Game Mode." << endl;
            break;
    }
    int restart;
    cout<<"ENTER 1 TO EXIT: \n";
    cout<<"ENTER 2 TO RETURN TO MAIN MENU:\n\n\n ";
    cin>>restart;
    switch(restart){
        case 1 :
        exit(1);
            break;
        case 2:
            cleargrid3X3();
            backspace();
            break;

    }

}
void computer_vs_player3X3() {
    string player_name;
    cout << "Enter Your Name: ";
    cin >> player_name;
    while(true) {
        system("cls");
        show_board3X3();
        
        if(count_board3X3('X') == count_board3X3('O')) {
            cout << player_name << "'s Turn." << endl;
            get_x_player_choice3X3();
        }
        else{
            get_computer_choice3X3();
        }
        char winner = check_winner3X3();
        if(winner == 'X') {
            system("cls");
            show_board3X3();
            cout << player_name << " Won The Game." << endl;
            break;
        }
        else if(winner == 'O') {
            system("cls");
            show_board3X3();
            cout << "Computer Won The Game." << endl;
            break;
        }
        else if(winner == 'D') {
            cout << "Game is Draw." << endl;
            break;
        }
    }
}

void get_computer_choice3X3() {
    srand(time(0));
    int choice;
    do{
        choice = rand()%10;
    }while(board[choice] != ' ');
    board[choice] = 'O';
}

void get_x_player_choice3X3() {
    while(true) {
        cout << "Select Your Position (1 - 9): " ;
        int choice;
        //changeColor(07);
        cin >> choice;
        choice--;
        if(choice < 0 || choice > 8) {
            cout << "Please Select Your Choice From (1 - 9)." << endl;
        }
        else if(board[choice] != ' ') {
            cout << "Please Select An Empty Position." << endl;
        }
        else {
            board[choice] = 'X';
            break;
        }
    }
}

void get_o_player_choice3X3() {
    while(true) {
        cout << "Select Your Position (1 - 9): " ;
        int choice;
        cin >> choice;
        choice --;
        if(choice < 0 || choice > 8) {
            cout << "Please Select Your Choice From (1 - 9)." << endl;
        }
        else if(board[choice] != ' ') {
            cout << "Please Select An Empty Position." << endl;
        }
        else {
            board[choice] = 'O';
            break;
        }
    }
}

void player_vs_player3X3() {
    string x_player_name , o_player_name;
    cout << "Enter X Player Name: " ;
    cin >> x_player_name;
    cout << "Enter O Player Name: " ;
    cin >> o_player_name;
    while(true) {
        system("cls");
        show_board3X3();
        if(count_board3X3('X') == count_board3X3('O')) {
            cout << x_player_name << "'s Turn." << endl;
            get_x_player_choice3X3();
        }
        else{
            cout << o_player_name << "'s Turn." << endl;
            get_o_player_choice3X3();
        }
        char winner = check_winner3X3();
        if(winner == 'X') {
            system("cls");
            show_board3X3();
            cout << x_player_name << " Won The Game." << endl;
            break;
        }
        else if(winner == 'O') {
            system("cls");
            show_board3X3();
            cout << o_player_name << " Won The Game." << endl;
            break;
        }
        else if(winner == 'D') {
            cout << "Game is Draw." << endl;
            break;
        }
    }
}
int count_board3X3(char symbol) {
    int total = 0;
    for(int i=0; i<9; i++) {
        if(board[i] == symbol)
            total += 1;
    }
    return total;
}
char check_winner3X3() {
    // checking winner in horizontal/row
    if(board[0] == board[1] && board[1] == board[2] && board[0] != ' ')
        return board[0];
    if(board[3] == board[4] && board[4] == board[5] && board[3] != ' ')
        return board[3];
    if(board[6] == board[7] && board[7] == board[8] && board[6] != ' ')
        return board[6];
    // checking winner in vertical/column
    if(board[0] == board[3] && board[3] == board[6] && board[0] != ' ')
        return board[0];
    if(board[1] == board[4] && board[4] == board[7] && board[1] != ' ')
        return board[1];
    if(board[2] == board[5] && board[5] == board[8] && board[2] != ' ')
        return board[2];
    // checking winner in diagonal
    if(board[0] == board[4] && board[4] == board[8] && board[0] != ' ')
        return board[0];
    if(board[2] == board[4] && board[4] == board[6] && board[2] != ' ')
        return board[2];
    if(count_board3X3('X') + count_board3X3('O') < 9)
        return 'C';
    else
        return 'D';
}
void cleargrid3X3()
{   for(int i=0;i<9;i++)
           board[i]=' ';
}
void show_board3X3(){
    system("Color 04");
    cout<<board[0]<<"  |  "<<board[1]<<" | "<<board[2]<<endl;
    cout<<"-------------"<<endl; 
    cout<<board[3]<<"  |  "<<board[4]<<" | "<<board[5]<<endl;
    cout<<"-------------"<<endl;
    cout<<board[6]<<"  |  "<<board[7]<<" | "<<board[8]<<endl;
}

void Grid5X5(){
int mode;
system("cls");
system("Color F1");
    cout << "1. Computer VS Player." << endl;
    cout << "2. Player VS Player." << endl;
    cout << "Select Game Mode." << endl;
    cin >> mode;
    switch(mode) {
        case 1 :
            computer_vs_player5X5();
            break;
        case 2:
            player_vs_player5X5();
            break;
        default :
            cout << "Please Select Valid Game Mode." << endl;
            break;
    }
    int restart;
    cout<<"ENTER 1 TO EXIT: \n";
    cout<<"ENTER 2 TO RETURN TO MAIN MENU:\n\n\n ";
    cin>>restart;
    switch(restart){
        case 1 :
        exit(1);
            break;
        case 2:
            cleargrid5X5();
            backspace();
            break;

    }

}

void computer_vs_player5X5() {
    string player_name;
    cout << "Enter Your Name: ";
    cin >> player_name;
    while(true) {
        system("cls");
        show_board5X5();
        if(count_board5X5('X') == count_board5X5('O')) {
            cout << player_name << "'s Turn." << endl;
            get_x_player_choice5X5();
        }
        else{
            get_computer_choice5X5();
        }
        char winner = check_winner5X5();
        if(winner == 'X') {
            system("cls");
            show_board5X5();
            cout << player_name << " Won The Game." << endl;
            break;
        }
        else if(winner == 'O') {
            system("cls");
            show_board5X5();
            cout << "Computer Won The Game." << endl;
            break;
        }
        else if(winner == 'D') {
            cout << "Game is Draw." << endl;
            break;
        }
    }
}

void get_computer_choice5X5() {
    srand(time(0));
    int choice;
    do{
        choice = rand()%26;
    }while(board5X5[choice] != ' ');
    board5X5[choice] = 'O';
}

void get_x_player_choice5X5() {
    while(true) {
        cout << "Select Your Position (1 - 25): " ;
        int choice;
        cin >> choice;
        choice--;
        if(choice < 0 || choice > 24) {
            cout << "Please Select Your Choice From (1 - 25)." << endl;
        }
        else if(board5X5[choice] != ' ') {
            cout << "Please Select An Empty Position." << endl;
        }
        else {
            board5X5[choice] = 'X';
            break;
        }
    }
}

void get_o_player_choice5X5() {
    while(true) {
        cout << "Select Your Position (1 - 25): " ;
        int choice;
        cin >> choice;
        choice --;
        if(choice < 0 || choice > 24) {
            cout << "Please Select Your Choice From (1 - 25)." << endl;
        }
        else if(board5X5[choice] != ' ') {
            cout << "Please Select An Empty Position." << endl;
        }
        else {
            board5X5[choice] = 'O';
            break;
        }
    }
}

void player_vs_player5X5() {
    string x_player_name , o_player_name;
    cout << "Enter X Player Name: " ;
    cin >> x_player_name;
    cout << "Enter O Player Name: " ;
    cin >> o_player_name;
    while(true) {
        system("cls");
        show_board5X5();
        if(count_board5X5('X') == count_board5X5('O')) {
            cout << x_player_name << "'s Turn." << endl;
            get_x_player_choice5X5();
        }
        else{
            cout << o_player_name << "'s Turn." << endl;
            get_o_player_choice5X5();
        }
        char winner = check_winner5X5();
        if(winner == 'X') {
            system("cls");
            show_board5X5();
            cout << x_player_name << " Won The Game." << endl;
            break;
        }
        else if(winner == 'O') {
            system("cls");
            show_board5X5();
            cout << o_player_name << " Won The Game." << endl;
            break;
        }
        else if(winner == 'D') {
            cout << "Game is Draw." << endl;
            break;
        }
    }
}

int count_board5X5(char symbol) {
    int total = 0;
    for(int i=0; i<25; i++) {
        if(board5X5[i] == symbol)
            total += 1;
    }
    return total;
}

char check_winner5X5() {
    // checking winner in horizontal/row
   
         for(int i=0;i<25;i++){
    if ((board[i]==board[i+1]&& board[i+1]==board[i+2]&& board[i+2]==board[i+3]&& board[i]!=' ') ){
        return board[i];
    }
}
    // checking winner in vertical/column
   
         for(int i=0;i<25;i++){
    if (board[i]==board[i+5]&& board[i+5]==board[i+10]&& board[i+10]==board[i+15] &&board[i]!=' '){
        return board[i];
    }
}
    // checking winner in diagonal
    if(board5X5[0] == board5X5[6] && board5X5[6] == board5X5[12] && board5X5[12] == board5X5[18]&& board5X5[0] != ' ')
        return board5X5[0];
    if(board5X5[6] == board5X5[12] && board5X5[12] == board5X5[18] && board5X5[18] == board5X5[24]&& board5X5[6] != ' ')
        return board5X5[6];
    if(board5X5[1] == board5X5[7] && board5X5[7] == board5X5[13] && board5X5[13] == board5X5[19]&& board5X5[1] != ' ')
        return board5X5[1];
    if(board5X5[5] == board5X5[11] && board5X5[11] == board5X5[17] && board5X5[17] == board5X5[23]&& board5X5[5] != ' ')
        return board5X5[5];
    if(board5X5[4] == board5X5[8] && board5X5[8] == board5X5[12] && board5X5[12] == board5X5[16]&& board5X5[4] != ' ')
        return board5X5[4];
    if(board5X5[8] == board5X5[12] && board5X5[12] == board5X5[16] && board5X5[16] == board5X5[20]&& board5X5[8] != ' ')
        return board5X5[8];
    if(board5X5[3] == board5X5[7] && board5X5[7] == board5X5[11] && board5X5[11] == board5X5[15]&& board5X5[3] != ' ')
        return board5X5[3];
    if(board5X5[9] == board5X5[13] && board5X5[13] == board5X5[17] && board5X5[17] == board5X5[21]&& board5X5[9] != ' ')
        return board5X5[9];
    if(count_board5X5('X') + count_board5X5('O') < 25)
        return 'C';
    else
        return 'D';
}
void cleargrid5X5()
{   for(int i=0;i<25;i++)
           board5X5[i]=' ';
}

void show_board5X5(){
    system("Color 04");
    cout<<board5X5[0]<<"  |  "<<board5X5[1]<<" | "<<board5X5[2]<<" | "<<board5X5[3]<<" | "<<board5X5[4]<<endl;
    cout<<"-------------------"<<endl;
    cout<<board5X5[5]<<"  |  "<<board5X5[6]<<" | "<<board5X5[7]<<" | "<<board5X5[8]<<" | "<<board5X5[9]<<endl;
    cout<<"-------------------"<<endl;
    cout<<board5X5[10]<<"  |  "<<board5X5[11]<<" | "<<board5X5[12]<<" | "<<board5X5[13]<<" | "<<board5X5[14]<<endl;
    cout<<"-------------------"<<endl;
    cout<<board5X5[15]<<"  |  "<<board5X5[16]<<" | "<<board5X5[17]<<" | "<<board5X5[18]<<" | "<<board5X5[19]<<endl;
    cout<<"-------------------"<<endl;
    cout<<board5X5[20]<<"  |  "<<board5X5[21]<<" | "<<board5X5[22]<<" | "<<board5X5[23]<<" | "<<board5X5[24]<<endl;
}
// void changeColor(int desiredColor){ 
//      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor); 
// } 
void Grid7X7(){
      int mode;
      system("cls");
      system("Color F1");
    cout << "1. Computer VS Player." << endl;
    cout << "2. Player VS Player." << endl;
    cout << "Select Game Mode." << endl;
    cin >> mode;
    switch(mode) {
        case 1 :
            computer_vs_player7X7();
            break;
        case 2:
           player_vs_player7X7();
            break;
        default :
            cout << "Please Select Valid Game Mode." << endl;
            break;
    }
    int restart;
    cout<<"ENTER 1 TO EXIT: \n";
    cout<<"ENTER 2 TO RETURN TO HOME:\n\n\n ";
    cin>>restart;
    switch(restart){
        case 1 :
        exit(1);
            break;
        case 2:
            cleargrid7X7();
            backspace();
            break;

    }
}
void computer_vs_player7X7() {
    string player_name;
    cout << "Enter Your Name: ";
    cin >> player_name;
    while(true) {
        system("cls");
       show_board7X7();
        if(count_board7X7('X') == count_board7X7('O')) {
            cout << player_name << "'s Turn." << endl;
           get_x_player_choice7X7();
        }
        else{
           get_computer_choice7X7();
        }
        char winner = check_winner7X7();
        if(winner == 'X') {
            system("cls");
           show_board7X7();
            cout << player_name << " Won The Game." << endl;
            break;
        }
        else if(winner == 'O') {
            system("cls");
           show_board7X7();
            cout << "Computer Won The Game." << endl;
            break;
        }
        else if(winner == 'D') {
            cout << "Game is Draw." << endl;
            break;
        }
    }
}

void get_computer_choice7X7() {
    srand(time(0));
    int choice;
    do{
        choice = rand()%50;
    }while(board7X7[choice] != ' ');
    board7X7[choice] = 'O';
}

void get_x_player_choice7X7() {
    while(true) {
        cout << "Select Your Position (1 - 49): " ;
        int choice;
        cin >> choice;
        choice--;
        if(choice < 0 || choice > 48) {
            cout << "Please Select Your Choice From (1 - 49)." << endl;
        }
        else if(board7X7[choice] != ' ') {
            cout << "Please Select An Empty Position." << endl;
        }
        else {
            board7X7[choice] = 'X';
            break;
        }
    }
}

void get_o_player_choice7X7() {
    while(true) {
        cout << "Select Your Position (1 - 49): " ;
        int choice;
        cin >> choice;
        choice --;
        if(choice < 0 || choice > 48) {
            cout << "Please Select Your Choice From (1 - 49)." << endl;
        }
        else if(board7X7[choice] != ' ') {
            cout << "Please Select An Empty Position." << endl;
        }
        else {
            board7X7[choice] = 'O';
            break;
        }
    }
}

void player_vs_player7X7() {
    string x_player_name , o_player_name;
    cout << "Enter X Player Name: " ;
    cin >> x_player_name;
    cout << "Enter O Player Name: " ;
    cin >> o_player_name;
    while(true) {
        system("cls");
       show_board7X7();
        if(count_board7X7('X') == count_board7X7('O')) {
            cout << x_player_name << "'s Turn." << endl;
           get_x_player_choice7X7();
        }
        else{
            cout << o_player_name << "'s Turn." << endl;
           get_o_player_choice7X7();
        }
        char winner = check_winner7X7();
        if(winner == 'X') {
            system("cls");
           show_board7X7();
            cout << x_player_name << " Won The Game." << endl;
            break;
        }
        else if(winner == 'O') {
            system("cls");
           show_board7X7();
            cout << o_player_name << " Won The Game." << endl;
            break;
        }
        else if(winner == 'D') {
            cout << "Game is Draw." << endl;
            break;
        }
    }
}

int count_board7X7(char symbol) {
    int total = 0;
    for(int i=0; i<49; i++) {
        if(board7X7[i] == symbol)
            total += 1;
    }
    return total;
}

char check_winner7X7() {
    // checking winner in horizontal/row
   
        for(int i=0;i<49;i++){
    if ((board7X7[i]==board7X7[i+1]&& board7X7[i+1]==board7X7[i+2]&& board7X7[i+2]==board7X7[i+3]&&board7X7[i+3]==board7X7[i+4] && board7X7[i]!=' ') ){
        return board7X7[i];
    }
}
   //for checking in vertical row
         for(int i=0;i<49;i++){
    if (board7X7[i]==board7X7[i+7]&& board7X7[i+7]==board7X7[i+14]&& board7X7[i+14]==board7X7[i+21] && board7X7[i+21]==board7X7[i+28] && board7X7[i]!=' '){
        return board7X7[i];
    }
}
        
    // checking winner in diagonal
    if(board7X7[0] == board7X7[8] && board7X7[8] == board7X7[16] && board7X7[16] == board7X7[24]&& board7X7[24] == board7X7[32] && board7X7[0] != ' ')
        return board7X7[0];
   if(board7X7[1] == board7X7[9] && board7X7[9] == board7X7[17] && board7X7[17] == board7X7[25]&& board7X7[25] == board7X7[33] && board7X7[1] != ' ')
        return board7X7[1];
    if(board7X7[2] == board7X7[10] && board7X7[10] == board7X7[18] && board7X7[18] == board7X7[26]&& board7X7[26] == board7X7[34] && board7X7[2] != ' ')
        return board7X7[2];
   if(board7X7[7] == board7X7[15] && board7X7[15] == board7X7[23] && board7X7[23] == board7X7[31]&& board7X7[31] == board7X7[39] && board7X7[7] != ' ')
        return board7X7[7];
   if(board7X7[14] == board7X7[22] && board7X7[22] == board7X7[30] && board7X7[30] == board7X7[38]&& board7X7[38] == board7X7[46] && board7X7[14] != ' ')
        return board7X7[14];
   if(board7X7[4] == board7X7[10] && board7X7[10] == board7X7[16] && board7X7[16] == board7X7[22]&& board7X7[22] == board7X7[28] && board7X7[4] != ' ')
        return board7X7[4];
    if(board7X7[5] == board7X7[11] && board7X7[11] == board7X7[17] && board7X7[17] == board7X7[23]&& board7X7[23] == board7X7[29] && board7X7[5] != ' ')
        return board7X7[5];
    if(board7X7[6] == board7X7[12] && board7X7[12] == board7X7[18] && board7X7[18] == board7X7[24]&& board7X7[24] == board7X7[30] && board7X7[6] != ' ')
        return board7X7[6];
    if(board7X7[13] == board7X7[19] && board7X7[19] == board7X7[25] && board7X7[25] == board7X7[31]&& board7X7[31] == board7X7[37] && board7X7[13] != ' ')
        return board7X7[13];
    if(board7X7[11] == board7X7[17] && board7X7[17] == board7X7[23] && board7X7[23] == board7X7[29]&& board7X7[29] == board7X7[35] && board7X7[11] != ' ')
        return board7X7[11];
    if(board7X7[18] == board7X7[24] && board7X7[24] == board7X7[30] && board7X7[30] == board7X7[36]&& board7X7[36] == board7X7[42] && board7X7[18] != ' ')
        return board7X7[18];
    if(board7X7[19] == board7X7[25] && board7X7[25] == board7X7[31] && board7X7[31] == board7X7[37]&& board7X7[37] == board7X7[43] && board7X7[19] != ' ')
        return board7X7[19];
    if(board7X7[20] == board7X7[26] && board7X7[26] == board7X7[32] && board7X7[32] == board7X7[38]&& board7X7[38] == board7X7[44] && board7X7[20] != ' ')
        return board7X7[20];
    if(board7X7[8] == board7X7[16] && board7X7[16] == board7X7[24] && board7X7[24] == board7X7[32]&& board7X7[32] == board7X7[40] && board7X7[8] != ' ')
        return board7X7[8];
    if(board7X7[9] == board7X7[17] && board7X7[17] == board7X7[25] && board7X7[25] == board7X7[33]&& board7X7[33] == board7X7[41] && board7X7[9] != ' ')
        return board7X7[9];
    if(board7X7[15] == board7X7[23] && board7X7[23] == board7X7[31] && board7X7[31] == board7X7[39]&& board7X7[39] == board7X7[47] && board7X7[15] != ' ')
        return board7X7[15];
    if(board7X7[16] == board7X7[24] && board7X7[24] == board7X7[32] && board7X7[32] == board7X7[40]&& board7X7[40] == board7X7[48] && board7X7[16] != ' ')
        return board7X7[16];
    if(board7X7[12] == board7X7[18] && board7X7[18] == board7X7[24] && board7X7[24] == board7X7[30]&& board7X7[30] == board7X7[36] && board7X7[12] != ' ')
        return board7X7[12];

    if(count_board7X7('X') + count_board7X7('O') < 49)
        return 'C';
    else
        return 'D';
}
void cleargrid7X7()
{   for(int i=0;i<49;i++)
           board7X7[i]=' ';
}
void show_board7X7(){
    system("Color 04");
    cout<<board7X7[0]<<"  |  "<<board7X7[1]<<" | "<<board7X7[2]<<" | "<<board7X7[3]<<" | "<<board7X7[4]<<" | "<<board7X7[5]<<" | "<<board7X7[6]<<endl;
   cout<<"-----------------------------"<<endl;
   cout<<board7X7[7]<<"  |  "<<board7X7[8]<<" | "<<board7X7[9]<<" | "<<board7X7[10]<<" | "<<board7X7[11]<<" | "<<board7X7[12]<<" | "<<board7X7[13]<<endl;
   cout<<"-----------------------------"<<endl;
    cout<<board7X7[14]<<"  |  "<<board7X7[15]<<" | "<<board7X7[16]<<" | "<<board7X7[17]<<" | "<<board7X7[18]<<" | "<<board7X7[19]<<" | "<<board7X7[20]<<endl;
   cout<<"-----------------------------"<<endl;
    cout<<board7X7[21]<<"  |  "<<board7X7[22]<<" | "<<board7X7[23]<<" | "<<board7X7[24]<<" | "<<board7X7[25]<<" | "<<board7X7[26]<<" | "<<board7X7[27]<<endl;
   cout<<"-----------------------------"<<endl;
    cout<<board7X7[28]<<"  |  "<<board7X7[29]<<" | "<<board7X7[30]<<" | "<<board7X7[31]<<" | "<<board7X7[32]<<" | "<<board7X7[33]<<" | "<<board7X7[34]<<endl;
    cout<<"-----------------------------"<<endl;
      cout<<board7X7[35]<<"  |  "<<board7X7[36]<<" | "<<board7X7[37]<<" | "<<board7X7[38]<<" | "<<board7X7[39]<<" | "<<board7X7[40]<<" | "<<board7X7[41]<<endl;
    cout<<"-----------------------------"<<endl;
      cout<<board7X7[42]<<"  |  "<<board7X7[43]<<" | "<<board7X7[44]<<" | "<<board7X7[45]<<" | "<<board7X7[46]<<" | "<<board7X7[47]<<" | "<<board7X7[48]<<endl;
      
    
}