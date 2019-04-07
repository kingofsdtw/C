


#include <iostream>
#include <vector>

using namespace std;




void bubbleSort( vector <int > &v)
{
    int size = v.size();
    vector <int>::iterator it = v.begin();
    int i,j,tmp;



    for( i = 0 ; i+1 < size ;  i++ ) // ex total 3 nums , need 2 times
    {
        for( j = 0 ; j+1 < (size-i); j++ )
        if( v[ j+1 ] < v[ j])
        {
            tmp = v[ j];
            v[j] = v[j+1];
            v[j+1] = tmp;
        }
    }


}


void bubbleSort2( vector <int > &v)
{
    int size = v.size();
    vector <int>::iterator it = v.begin();
    int i,j,tmp;



    for( i = 0 ; i+1 < size ;  ++i ) // ex total 3 nums , need 2 times
    {
         cout << " i = " << i <<endl;
    }


}


int main(){


  int arry[] = {8,9,1,2,3,4,5,6,7,0};



  vector <int> v (10,0);
  v.assign(arry , arry + 10 );

  bubbleSort2(v);
  for( vector <int>::iterator it = v.begin() ; it < v.end(); it++ )
    cout << *it << " ";
  cout << endl;



return 0;
}
