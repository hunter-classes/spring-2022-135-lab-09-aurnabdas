#include <iostream>
using namespace std;

// to check it i crashes or not on mac you use the activity monitor
// when i intially ran it i think i waited 3 mins and a.out was using 70 gb of memory


string * createAPoemDynamically() {

    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;

}

int main() {
    while(true) {

        string *p;
        p = createAPoemDynamically();
        delete p;

    }
    return 0;
}
