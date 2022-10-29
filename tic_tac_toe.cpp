//BY ADITI BACHLEY
#include<iostream>
using namespace std;
void display(char blocks[][3]){
    cout<<"   |   |   "<<endl;
    cout<<" "<<blocks[0][0]<<" | "<<blocks[0][1]<<" | "<<blocks[0][2]<<" "<<endl;
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<" "<<blocks[1][0]<<" | "<<blocks[1][1]<<" | "<<blocks[1][2]<<" "<<endl;
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<" "<<blocks[2][0]<<" | "<<blocks[2][1]<<" | "<<blocks[2][2]<<" "<<endl;
    cout<<"   |   |   "<<endl;
}
bool winner(char blocks[][3],string p1,string p2){
    bool win=false;
    for(int i=0;i<3;i++){                           //check for rows &col
        if((blocks[i][0]==blocks[i][1] && blocks[i][1]==blocks[i][2]) || (blocks[0][i]==blocks[1][i] && blocks[1][i]==blocks[2][i])){ 
            win=true;
                if(blocks[i][0]=='X' || blocks[0][i]=='X'){
                cout<<p1<<" is the winner "<<endl;
                break;
            }
            else{
                cout<<p2<<" is the winner "<<endl; 
                break;
            }
           
        }
    }
    //check for diagonals
    if(blocks[0][0]==blocks[1][1] && blocks[1][1]==blocks[2][2]){
        win=true;
        if(blocks[0][0]=='X'){
                cout<<p1<<" is the winner "<<endl;
             }
            else{
                cout<<p2<<" is the winner "<<endl;  
             }
             return win;
    }
    if(blocks[0][2]==blocks[1][1] && blocks[1][1]==blocks[2][0]){
        win=true;
        if(blocks[1][1]=='X'){
                cout<<p1<<" is the winner "<<endl;   
             }
            else{
                cout<<p2<<" is the winner "<<endl;
             }
             return win;
    }
    return win;
}
int main(){
    char blocks[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    string player1,player2;
    int check=0;
    cout<<"Enter the name of player: ";
    getline(cin,player1);
    cout<<"Enter the name of player: ";
    getline(cin,player2);
    cout<<endl<<"X is for "<<player1<<endl;
    cout<<"0 is for "<<player2<<endl;
    display(blocks);
    
    cout<<player1<<" makes the first move "<<endl;
    int input;
    fflush(stdin);
    for(int i=0;i<9;i++){
        if(i&1)
            cout<<player2<<"'s turn - ";
            else
            cout<<player1<<"'s turn - ";
        cin>>input;
        switch(input){
            case 1:
                if(i&1)
                blocks[0][0]='0';
                else
                blocks[0][0]='X';
                display(blocks);
                break;
            case 2:
                if(i&1)
                blocks[0][1]='0';
                else
                blocks[0][1]='X';
                display(blocks);
                break;
            case 3:
                if(i&1)
                blocks[0][2]='0';
                else
                blocks[0][2]='X';
                display(blocks);
                break;
            case 4:
                if(i&1)
                blocks[1][0]='0';
                else
                blocks[1][0]='X';
                display(blocks);
                break;
            case 5:
                if(i&1)
                blocks[1][1]='0';
                else
                blocks[1][1]='X';
                display(blocks);
                break;
            case 6:
                if(i&1)
                blocks[1][2]='0';
                else
                blocks[1][2]='X';
                display(blocks);
                break;
            case 7:
                if(i&1)
                blocks[2][0]='0';
                else
                blocks[2][0]='X';
                display(blocks);
                break;
            case 8:
                if(i&1)
                blocks[2][1]='0';
                else
                blocks[2][1]='X';
                display(blocks);
                break;
            case 9:
                if(i&1)
                blocks[2][2]='0';
                else
                blocks[2][2]='X';
                display(blocks);
                break;
            default:
                cout<<"Out of range .ENTER  AGAIN"<<endl;
                i--;
                break;
        }
        if(winner(blocks,player1,player2)){
            check=1;
            break;
            
        }
            
    }
    if(check==0)
    cout<<"The match is a draw "<<endl;
    return 0;

}
