#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <unistd.h> // For STDIN_FILENO, STDOUT_FILENO, dup, dup2, and close
using namespace std;

void runTest() {
    // Test case 1: Code '1' purchase
    string input1 = "1\n50.00\n";  // Input for code and purchase price
    string expected_output1 = "Service charge: 0.50\n";

    // Create temporary files for input and output redirection
    FILE *input_file = tmpfile();
    FILE *output_file = tmpfile();

    // Write the input to the input file
    fputs(input1.c_str(), input_file);
    rewind(input_file);

    // Redirect stdin to the input file
    int input_fd = fileno(input_file);
    int saved_stdin_fd = dup(STDIN_FILENO);
    dup2(input_fd, STDIN_FILENO);

    // Redirect stdout to the output file
    int output_fd = fileno(output_file);
    int saved_stdout_fd = dup(STDOUT_FILENO);
    dup2(output_fd, STDOUT_FILENO);

    // Call the original program's main function
    int result = system("./lab5-6");

    // Restore stdin and stdout
    dup2(saved_stdin_fd, STDIN_FILENO);
    dup2(saved_stdout_fd, STDOUT_FILENO);
    close(saved_stdin_fd);
    close(saved_stdout_fd);

    // Check if the system call was successful
    if (result != 0) {
        cout << "Test Failed: Program did not run successfully" << endl;
        exit(-1);
    }

    // Read the output from the output file
    rewind(output_file);
    char buffer[256];
    string actual_output;
    while (fgets(buffer, sizeof(buffer), output_file)) {
        actual_output += buffer;
    }

    // Close and remove the temporary files
    fclose(input_file);
    fclose(output_file);

    // Debugging information
    cout << "Expected Output:\n" << expected_output1 << endl;
    cout << "Actual Output:\n" << actual_output << endl;

    // Compare the actual output to the expected output
    if (actual_output != expected_output1) {
        cout << "Test Failed: Output does not match expected output for code '1'" << endl;
        exit(-1);
    }

    // Test case 2: Code '2' purchase
    string input2 = "2\n75.00\n";  // Input for code and purchase price
    string expected_output2 = "Service charge: 5.75\n";

    // Write the input to the input file
    fputs(input2.c_str(), input_file);
    rewind(input_file);

    // Call the original program's main function again
    result = system("./lab5-6");

    // Restore stdin and stdout
    dup2(saved_stdin_fd, STDIN_F
