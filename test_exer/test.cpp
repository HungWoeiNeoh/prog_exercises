#include <cstdlib>
#include <iostream>

using namespace std;

/*TODO: Fill in this function!
 * This function takes in a long argument and prints out a left justified
 * triangle of height n
 *
 * Example: print_tri1(5) should output:
 *
 * *
 * **
 * ***
 * ****
 * *****
*/
void print_tri1(int n)
{
    (void)n;
}

/* TODO: Fill in this function!
 * This function takes in a long argument and prints out a right justified
 * triangle of height n
 *
 * Example: print_tri2(5) should output:
 *
 *     *
 *    **
 *   ***
 *  ****
 * *****
*/
void print_tri2(int n)
{
    (void)n;
}

/* TODO: Fill in this function!
 * This function takes in a long argument and prints out a centered
 * triangle of height n
 *
 * Example: print_tri3(5) should output:
 *
 *     *
 *    ***
 *   *****
 *  *******
 * *********
*/
void print_tri3(long n)
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

    print_tri1(values[0]);
    print_tri2(values[1]);
    print_tri3(values[2]);

    delete [] values;
    return 0;
}
