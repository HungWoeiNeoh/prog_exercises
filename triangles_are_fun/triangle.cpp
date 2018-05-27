#include <cstdlib>
#include <iostream>

using namespace std;

/* TODO: Fill in this function!
 * This function takes in a long argument and prints out a triangle pointing
 * to the right, with length n
 *
 * Example: right_triangle(5) should output:
 *
 * *
 * **
 * ***
 * ****
 * *****
 * ****
 * ***
 * **
 * *
 *
*/
void right_triangle(long n)
{
    (void)n;
}

/* TODO: Fill in this function!
 * This function takes in a long argument and prints out a triangle pointing
 * to the left, with length n
 *
 * Example: left_triangle(5) should output:
 *     *
 *    **
 *   ***
 *  ****
 * *****
 *  ****
 *   ***
 *    **
 *     *
*/
void left_triangle(long n)
{
    (void)n;
}

/* TODO: Fill in this function!
 * This function takes in a long argument and prints out a triangle pointing
 * downwards, with height n
 *
 * Example: down_triangle(5) should output:
 * *********
 *  *******
 *   *****
 *    ***
 *     *
*/
void down_triangle(long n)
{
    (void)n;
}

//Function to convert input arguments into integers (you can read this if you
//want to)
long *convert_input(char **args)
{
    long *values = new long[3];
    values[0] = strtol(args[0], NULL, 10);
    values[1] = strtol(args[1], NULL, 10);
    values[2] = strtol(args[2], NULL, 10);
    return values;
}

//Main function
int main(int argc, char *argv[])
{
    if(argc < 4)
    {
        cout << "Usage: " << argv[0] << " <number> <number> <number>\n";
        return 1;
    }

    long *values = convert_input(argv + 1);

    left_triangle(values[0]);
    right_triangle(values[1]);
    down_triangle(values[2]);

    delete [] values;
    return 0;
}
