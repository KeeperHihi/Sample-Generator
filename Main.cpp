#include <bits/stdc++.h>
using namespace std;

const int epoch = 10;

int main() {

    system("g++ Generator.cpp -o ./bin/Generator");
    system("g++ Good.cpp -o ./bin/Good");
	system("rm Samples.zip");
	system("rm Samples/*");
    for (int _ = 0; _ < epoch; _++) {
        string input_path = "./Samples/";
        input_path += to_string(_ + 1);
        input_path += ".in";
        string input_command = "./bin/Generator > ";
        input_command += input_path;
        string output_path = "./Samples/";

        output_path += to_string(_ + 1);
        output_path += ".out";
        string output_command = "./bin/Good < ";
        output_command += input_path;
        output_command += " > ";
        output_command += output_path;
        // cout << input_command << '\n' << output_command << endl;
        
        system(input_command.c_str());
        system(output_command.c_str());
        cout << "Sample " << _ + 1 << " Done!" << endl;
    } 
	system("zip Samples.zip Samples/*");

    return 0;
}
