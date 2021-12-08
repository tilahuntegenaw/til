/* project title to code Shell Sort Program Using codeblock

STUDENT NAME ID                              ID NO
'Tilahun Tegenaw 'CNCS/UR17772/12
' Lema Bewket    'CNCS/UR15660/12
' Lamesgen Enawgaw'CNCS/UR15659/12
'Asmari Enquanhone 'CNCS/UR14958/12
'Ataklti Solomon  'CNCS/UR14962/12
*/
#include <iostream>
#include<conio.h>
#include<stdlib.h>

#define MAX_SIZE 6

using namespace std;

void shell_sort(int[]);

int main() {
    int arr_sort[MAX_SIZE], i;

    cout << "Simple C++ Shell Sort Example - Functions and Array\n";
    cout << "\nEnter " << MAX_SIZE << " Elements for Sorting : " << endl;
    for (i = 0; i < MAX_SIZE; i++)
        cin >> arr_sort[i];

    cout << "\nYour input Data are:  :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << arr_sort[i];
    }

    shell_sort(arr_sort);
    getch();

}

void shell_sort(int fn_arr[]) {
    int i, j, k, a, t;

    for (i = MAX_SIZE / 2; i > 0; i = i / 2) {
        for (j = i; j < MAX_SIZE; j++) {
            for (k = j - i; k >= 0; k = k - i) {
                if (fn_arr[k + i] >= fn_arr[k])
                    break;
                else {
                    //Swapping Values 
                    t = fn_arr[k];
                    fn_arr[k] = fn_arr[k + i];
                    fn_arr[k + i] = t;
                }
            }

            cout << "\nShell Sort Iteration " << i << " : " << j;
            for (a = 0; a < MAX_SIZE; a++) {
                cout << "\t" << fn_arr[a];
            }
        }

    }

    cout << "\n\nafter interchenging of input data then toshow by shell Sorted Data :\n=";
    cout << "=========================================================================";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << fn_arr[i];
    
    }
   
}
