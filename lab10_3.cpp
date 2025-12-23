    #include <iostream>
    #include <fstream>
    #include <string>
    #include <cmath>
    #include <iomanip>
    using namespace std;

    int main() {
        string txt;
        ifstream Summ;
        Summ.open("score.txt");
        double sigma = 0;
        int count = 0;
        double sum = 0;
        double sumJ = 0;
        while(getline (Summ,txt)){
            sum += atof(txt.c_str());
            sumJ += pow(atof(txt.c_str()),2);
            count ++;
        }
        double Mean = sum/count;
        sigma += sqrt((sumJ/count) - pow(Mean,2));
        cout << "Number of data = " << count << "\n";
        cout << setprecision(3);
        cout << "Mean = " << Mean << "\n";
        cout << "Standard deviation = " << sigma << "\n";
        Summ.close();
        return 0;
    }