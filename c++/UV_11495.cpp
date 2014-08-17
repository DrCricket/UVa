#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main()
{
   string line;
   vector<vector<int> > all_integers;
   while ( getline( std::cin, line ) ) {
      std::istringstream is( line );
      all_integers.push_back(
            std::vector<int>( std::istream_iterator<int>(is),
                              std::istream_iterator<int>() ) );
   }
    return 0;
}
