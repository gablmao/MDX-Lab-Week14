#include <iostream>
#include <ctime>

using namespace std;

class Stopwatch {
    private:
        clock_t starttime;

    public:
        Stopwatch(int n);
        void start(){
            clock_t start = clock();
            /*
            selection sort algorithm to be written here
            */
            clock_t end = clock();

            double duration_in_seconds = static_cast<double>(end - start)/CLOCKS_PER_SEC;
        };

        double stop(){
            return static_cast<double>(starttime);
        };

}


int main(){
    return 0;
}