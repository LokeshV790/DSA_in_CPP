// Implementation of 1-D, 2-D & 3-D Array.

// 1-D Array (Comment the code to execute another type to avoid error.)
#include<iostream>

using namespace std;

int main(){
    int arr[5],n,idx;
    cout <<"enter no. of elements: "<< endl;
    cin >> n;
    cout << "Enter the elements : "<<endl;
    for (idx=0; idx < n; idx++){
        cin >> arr[idx];
    };

    cout << "elements in array are: "<<endl;
    for (idx=0; idx<n; idx++){
        cout << arr[idx]<< " ";
    };
    return 0;
}


// 2-D Array (Comment the code to execute another type to avoid error.)  also used as matrices.
// #include<iostream>

// using namespace std;

// int main(){
//     int arr[3][2];
//     cout << "Enter the elements : "<<endl;
//     for (int row = 0; row < 3; row++){
//         for(int col = 0; col < 2; col++){
//             cin >> arr[row][col];
//         }
//     };


//     cout << "Elements of array are: "<<endl;
//     for (int row = 0; row < 3; row++){
//         for(int col = 0; col < 2; col++){
//             cout << arr[row][col] << " ";
//         }
//     };
//     return 0;
// }


// 3-D Array (Comment the code to execute another type to avoid error.)

// #include<iostream>

// using namespace std;

// int main(){
//     int arr[4][3][2];
//     cout << "Enter the elements : "<< endl;
//     for (int i = 0; i < 4; i++){       // i stands for x axis, y stands for y axis, z stands for z axis.
//         for(int j = 0; j < 3; j++){
//             for(int z = 0; z < 2; z++)
//                 cin >> arr[i][j][z];
//         }
//     };


//     cout << "Elements of array are: "<<endl;
//     for (int i = 0; i < 4; i++){
//         for(int j = 0; j < 3; j++){
//             for(int z = 0; z < 2; z++)
//                 cout << arr[i][j][z] << " ";
//         }
//     };
//     return 0;
// }
