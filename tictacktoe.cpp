#include<iostream>
using namespace std;

string table[10]={"1","2","3","4","5","6","7","8","9"};

void tab(){

    cout<<table[0]<<" | "<<table[1]<<" | "<<table[2]<<endl;
    cout<<"--------"<<endl;
    cout<<table[3]<<" | "<<table[4]<<" | "<<table[5]<<endl;
    cout<<"--------"<<endl;
    cout<<table[6]<<" | "<<table[7]<<" | "<<table[8]<<endl; 
}

void reset(){

    for(int i=0;i<9;i++){
        cin>>table[i];
    }
}

int Win(){

    if(((table[0]==table[1])&&(table[1]==table[2]))){
        return 1;
    }
    else if(((table[3]==table[4])&&(table[4]==table[5]))){
        return 1;
    }
    else if(((table[6]==table[7])&&(table[7]==table[8]))){
        return 1;
    }
    else if(((table[0]==table[3])&&(table[3]==table[6]))){
        return 1;
    }
    else if(((table[1]==table[4])&&(table[4]==table[7]))){
        return 1;
    }
    else if(((table[2]==table[5])&&(table[5]==table[8]))){
        return 1;
    }
    else if(((table[2]==table[4])&&(table[4]==table[6]))){
        return 1;
    }
    else if(((table[0]==table[4])&&(table[4]==table[8]))){
        return 1;
    }
    else{
        return -1;
    }

}

int main(){

        int choice,play,w,player=3;
        char player_1,player_2;

         do{

            reset();
            cout<<"Enter player choice 1/2: "<<endl;
            cin>>choice;

            if(choice==1){
                player_1='X';
            }        
            else if(choice==2){
                player_2='0';
            }
            else{
                cout<<"enter valid choice"; 
                break; 
            }

            cout<<"Player 1 = "<<player_1<<endl;
            cout<<"Player 2 = "<<player_2<<endl;

            cout<<"***********LETS PLAY**********"<<endl<<endl;
           
            do{

                tab();
                char sym;
                int position;

                player=(player%2)?1:2;
                sym=(player%2)?'X':'0';

                cout <<"Player " << player << ", enter box number:  ";
                cin>>position;

                if (position == 1){
                    table[0] = sym;
                    cout<<endl;
                }
                else if (position == 2){
                    table[1] = sym;
                    cout<<endl;
                    
                }
                else if (position == 3){
                    table[2] = sym;
                    cout<<endl;
                }
                else if (position == 4){
                    table[3] = sym;
                    cout<<endl;
                }
                else if (position== 5){
                    table[4] = sym;
                    cout<<endl;
                }
                else if (position == 6){
                    table[5] = sym;
                    cout<<endl;
                }
                else if (position == 7){
                    table[6] = sym;
                    cout<<endl;
                }
                else if (position == 8){

                    table[7] = sym;
                    cout<<endl;
                }
                else if (position == 9){

                    table[8] = sym;
                    cout<<endl;
                }
                else{
                    cout<<"Enter Valid Value";
                }
                 w=Win();
                player++;

            }while(w==-1);

            tab();

            if(w==1){
                cout<<"PLAYER "<<player-1<<" has won the game!!!!"<<endl;
            }
            else{
                cout<<"DRAW!!!"<<endl;
            }

            cout<<"Do you want to play another game? 1 or 0"<<endl;
            cin>>play;

        }while(play);
        
        cout<<"END GAME!!";
}

