#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

class Stopwatch {
    private:
        clock_t starttime;

    public:
        void start(vector<int> n){
            clock_t start = clock();
            /*
            selection sort algorithm to be written here
            */

            for (int j=0; j<n.size()-2; j++){
                int x=j;
                for (int i=j+1; i<n.size()-1; i++){
                    if (n[i] < n[x]){
                        x = i;
                    }
                }

                if (x/=j){
                    n[j] = n[x];
                }
            }

            clock_t end = clock();

            double duration_in_seconds = static_cast<double>(end - start)/CLOCKS_PER_SEC;
        };

        double stop(){
            return static_cast<double>(starttime);
        };

};


int main(){
    vector<int> array = {4, 5, 3, 2, 1};

    Stopwatch obj;
    obj.start(array);
    obj.stop();

    return 0;
}