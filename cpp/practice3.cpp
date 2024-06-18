#include <iostream>
using namespace std;

void pass(string str[][5], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            cout << str[i][j]<<endl; // Concatenating horizontally with a space
        }
        cout << endl; // Move to the next line after printing each row
    }
}
void pass1(string str[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<str[i]<<endl;
	}
}

int main() {
    string str[2][5] = {
        
		{
            "********    *        ********** *           *  **********   *       *     ",
            "   *        *        *        *  *         *   *            *       *     ",
            "   *        *        *        *    *      *    **********   *       *     ",
            "   *        *        *        *     *    *     *            *       *    ",
            "*******     *******  **********        *       **********   *********     "
        },
        {
        "                 ******* **     *****  ********        ",	
        "                 *     * *  *   *   *     *            ",	            
        "                 ******* *   *  *****     *            ",
		"                 *     * *   *  *    *    *            ",
		"                 *     * * *    *     * ******         "	
		}};
string st[]= {"                   *****      ****                   ",
		     "                   *      * *      *                  ",
		     "                  *        *        *                 ",
		     "                   *               *                  ",
		     "                     *            *                   ",	
	         "                       *         *                    ",
	         "                          *    *                      ",
	         "                            **                        "};
	pass1(st,8);         
    pass(str, 2);
    pass1(st,8);
    return 0;
}

