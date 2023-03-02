#include<iostream>
using namespace std;

int main() {
  /*
  int num;
  cout << "Enter Number of Row : " << endl;
  cin >> num;

  int i = 1;
  while (i <= num) {
    int j = 1;
    while (j <= num) {
      cout << j;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }

  */

  /*
  int num;
  cout << "Enter Number of Row : " << endl;
  cin >> num;

  int i = 1;
  while (i <= num) {
    int j = num;
    while (j >= 1) {
      cout << j;
      j = j - 1;
    }
    cout << endl;
    i = i + 1;
  }
  */
  /*

  int num;
  cout << "Enter Number of Row : " << endl;
  cin >> num;

  int i = 1;
  int trackNumber = 1;

  while (i <= num) {
    int j = 1;
    while (j <= num) {
      cout << trackNumber << " ";
      trackNumber = trackNumber + 1;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }

  */
  /*

  int num;
  cout << "Enter Number of Row : " << endl;
  cin >> num;

  int i = 1;
  while (i <= num) {
    int j = 1;
    while (j <= i) {
      cout << "*";
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
  */

  /*

  int num;
  cout << "Enter Number of Row : " << endl;
  cin >> num;

  int i = 1;
  while (i <= num) {
    int j = 1;
    while (j <= i) {
      cout << i;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }

  */

  // HomeWork Question
  /*
  int num;
  cout << "Enter Number of Row : " << endl;
  cin >> num;

  int i = 1;
  int count = 1;

  while (i <= num) {
    int j = 1;
    while (j <= i) {
      cout << count;
      count = count + 1;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }

  */
  /*
  int num;
  cout << "Enter Number of Row : " << endl;
  cin >> num;

  int i = 1;

  while (i <= num) {
    int j = 1;
    int value = i;

    while (j <= i) {
      cout << value;
      value = value + 1;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
  */

  // HomeWork Questions
  /**/
  /*
  int num;
  cout << "Enter Number of Row : " << endl;
  cin >> num;

  int i = 1;

  while (i <= num) {
    int j = i;
    while (j >= 1) {
      cout << j << " ";
      j = j - 1;
    }
    cout << endl;
    i = i + 1;
  }
  */
  /*
  int num;
  cout << "Enter Number of Row : " << endl;
  cin >> num;

  int i = 1;

  while (i <= num) {
    int j = 1;
    while (j <= num) {
      char ch = 'A' + i - 1;
      cout << ch;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
  */
  /*
  // HomeWork Question
  int num;
  cout << "Enter Number of Row : " << endl;
  cin >> num;

  int i = 1;

  while (i <= num) {
    int j = 1;
    while (j <= num) {
      char ch = 'A' + j - 1;
      cout << ch;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
  */
  /*
  int num;
  cout << "Enter Number of Row : " << endl;
  cin >> num;

  int i = 1;
  char value = 'A';

  while (i <= num) {
    int j = 1;
    while (j <= num) {
      cout << value;
      value = value + 1;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
  */
  /*
  int num;
  cout << "Enter Your Row Number : " << endl;
  cin >> num;

  int i = 1;

  
  while ( i <= num ) {
    int j = 1;
    while ( j <= num ) {
      char value = ('A' + i + j) - 2;
      cout << value;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
  */

  /*
  int num;
  cout << "Enter Number of Row : " << endl;
  cin >> num;

  int i = 1;
  char value = 'A';

  while( i <= num ) {
    int j = 1;
    while( j <= i ) {
      cout << value;
      j = j + 1;
    }
    cout << endl;
    value = value + 1;
    i = i + 1;
  }
  */

 /*
 // Second Implementation
  int num;
  cout << "Enter Your Row Number : " << endl;
  cin >> num;

  int i = 1;

  while( i <= num ) {
    int j = 1;
    while ( j <= i) {
      char value = 'A' + (i - 1);
      cout << value;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
  */

  /*
  int num;
  cout << "Enter Number of Row : " << endl;
  cin >> num;
  
  int i = 1;
  char value = 'A';

  while( i <= num ) {
    int j = 1;
    while ( j <= i ) {
      cout << value;
      value = value + 1;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
  */
  /*
  int num;
  cout << "Enter Number of Row : " << endl;
  cin >> num;
  
  int i = 1;
  while( i <= num) {
    int j = 1;
    while ( j <= i ) {
      char ch = 'A' + ( ( i + j )  - 2);
      cout << ch;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
  */
 /*
  int num;
  cout << "Enter Number of Row : " << endl;
  cin >> num;
  
  int i = 1;
  while( i <= num ) {
    int j = 1;
    while ( j <= i ) {
      char value = 'A' + ( (num - 1) - ( i - j ) );
      cout << value;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
  */
  /*
  int num;
  cout << "Enter Number of Row : " << endl;
  cin >> num;
  
  int i = 1;
  while( i <= num ) {
    int space = num  - i;
    while ( space >= 1 ) {
      cout << " ";
      space = space - 1;
    }
    int j = 1;
    while ( j <= i ) {
      cout << "*";
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
  */
  /*
  int num;
  cout << "Enter Number of Row : " << endl;
  cin >> num;
  
  int i = num;
  while( i >= 1 ) {
    int j = 1;
    while ( j <= i ) {
      cout << "*";
      j = j + 1;
    }
    int space = num  - i;
    while ( space >= 1 ) {
      cout << " ";
      space = space - 1;
    }

    cout << endl;
    i = i - 1;
  }
  */
  /*
  int num;
  cout << "Enter Number of Row : " << endl;
  cin >> num;
  
  int i = num;
  while( i >= 1 ) {
    int space = num  - i;
    while ( space >= 1 ) {
      cout << " ";
      space = space - 1;
    }
    int j = 1;
    while ( j <= i ) {
      cout << "*";
      j = j + 1;
    }
    cout << endl;
    i = i - 1;
  }
  */

  /*
  int num;
  cout << "Enter Your Row Number :  " << endl;
  cin >> num;

  int i = 1;
  
  while ( i <= num ) {
    int space = num - i ;
    while ( space >= 1 ) {
      cout << " ";
      space = space - 1;
    }
    int j = 1;
    while ( j <= i ) {
      cout << j;
      j = j + 1;
    }
    int k = i - 1;
    while ( k >= 1 ) {
      cout << k;
      k = k - 1;
    }
    
    cout << endl;
    i = i + 1;
  }
  */
  /*
  int num;
  cout << "Enter Your Row Number :  " << endl;
  cin >> num;

  int i = 1;
  
  while ( i <= num ) {
    int space = num - i ;
    while ( space >= 1 ) {
      cout << " ";
      space = space - 1;
    }
    int j = 1;
    while ( j <= i ) {
      cout << j;
      j = j + 1;
    }
    int k = i - 1;
    while ( k >= 1 ) {
      cout << k;
      k = k - 1;
    }
    
    cout << endl;
    i = i + 1;
  }
  */
 /*
 // DABANGG Pattern
  int num;
    cout << "Enter Row Number : " << endl;
    cin >> num;

    int i = 1;
    while( i <= num ) {
      int j = 1;
      while ( j <= (num - ( i - 1 ))) {
        cout << j << " ";
        j = j + 1;
      }
      if ( i > 1 ) {
        int k = 1;
        while ( k <= ((i - 1) * 2) ) {
          cout << "*" << " ";
          k = k + 1;
        }
      }
      int l = num - (i - 1);
      while( l >= 1 ) {
        cout << l << " ";
        l = l - 1;
      }
      cout << endl;
      i = i + 1;
    }
 */

}
  

          

          
      
