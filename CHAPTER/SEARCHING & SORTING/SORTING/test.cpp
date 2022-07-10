// class Solution {
// public:
    
//     int charToInt(char c) {
//         switch(c) {
//             case 'B':
//                 return 0;
//             case 'R':
//                 return 1;
//             case 'G':
//                 return 2;
//         }
//         return -1;
//     }
    
//     int countPoints(string rings) {
//         // create one two dimensional array
//         bool arr[10][3]{};
//         int n = rings.size() / 2;
//         for (int i = 0; i < n; i++) {
//             int color = charToInt(rings.at(2 * i));
//             int ring = rings.at(2 * i + 1) - '0';
//             arr[ring][color] = true;
//         }
//         int res = 0;
//         for (int i = 0; i < 10; i++) {
//             int count = 0;
//             for (int j = 0; j < 3; j++) {
//                 if (arr[i][j]) {
//                     count++;
//                 }
//             }
//             if (count == 3) {
//                 res++;
//             }
//         }
//         return res;
//     }
// };





#include <iostream>
using namespace std;
int main()
{
    int arr[][1];
    cout<<&arr[2];

    

    return 0;
}