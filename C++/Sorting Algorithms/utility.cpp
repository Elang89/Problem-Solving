#include <vector>
#include <ctime>
#include <cstdlib>
#include "utility.h"

using std::vector;

vector<int> random_generator(int element_count)
{
    vector<int> random_array(element_count);
    srand(time(NULL));
    for(int i = 0; i < element_count; i++)
    {
        random_array.push_back(rand());
    }
    return random_array;
}
