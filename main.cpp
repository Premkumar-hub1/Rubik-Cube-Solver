#include<iostream>
using namespace std;

class RubiksCube{
    public:
    int faces;
    int col;
    int row;

    char cube[6][2][2];

    RubiksCube(){
        faces = 6;
        col = 2;
        row = 2;
    }

    void assignColor(){
        for(int i = 0 ; i < faces ; i++){
            for(int j = 0 ; j < row ; j++){
                for(int k = 0 ; k < col ; k++){
                    if(i==0){
                        cube[i][j][k] = 'W';
                    }
                    else if (i == 1){
                        cube[i][j][k] = 'Y';
                    }
                    else if (i == 2){
                        cube[i][j][k] = 'G';
                    }
                    else if (i == 3){
                        cube[i][j][k] = 'B';
                    }
                    else if (i == 4){
                        cube[i][j][k] = 'O';
                    }
                    else if (i == 5){
                        cube[i][j][k] = 'R';
                    }
                }
            }
        }
    }

    void display() {
        // Up face
        cout << "      "
             << cube[0][0][0] << " " << cube[0][0][1] << endl;

        cout << "      "
             << cube[0][1][0] << " " << cube[0][1][1] << endl;

        cout << endl;

        // Left, Front, Right, Back faces
        for (int j = 0; j < row; j++) {
            cout << cube[4][j][0] << " " << cube[4][j][1] << "   "
                 << cube[2][j][0] << " " << cube[2][j][1] << "   "
                 << cube[5][j][0] << " " << cube[5][j][1] << "   "
                 << cube[3][j][0] << " " << cube[3][j][1]
                 << endl;
        }

        cout << endl;

        // Down face
        cout << "      "
             << cube[1][0][0] << " " << cube[1][0][1] << endl;

        cout << "      "
             << cube[1][1][0] << " " << cube[1][1][1] << endl;
    }
};

int main(){
    RubiksCube cube;
    cube.assignColor();
    cube.display();

return 0;
}