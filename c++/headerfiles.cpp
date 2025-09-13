//headerfiles-use to declare standard input-output stream objects.it stores declarations of functions and objects.
// <>- used to include standard library headers.search in the standard library directories.
// ""- used to include user-defined header files.search in the current directory first, then in the standard library directories.
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>   
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <tuple>
#include <fstream>
#include <sstream>
#include "function.cpp"
using namespace std;
//namespace- a declarative region that provides a scope to the identifiers inside it.
//std is the standard namespace where all the standard c++ library functions and objects are declared.
int a()
{ 
    std::cout << "This is function a from headerfiles.cpp" << std::endl;
    return 0;
    main();
}