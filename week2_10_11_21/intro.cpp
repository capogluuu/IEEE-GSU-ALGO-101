#include <iostream>
#include <vector>
using namespace std;

/*
Oparators   
If/Else   
Logical Expression  
For/While
Continue  
Break
*/
int main() {
    // C++ Operators
    // Source Url : https://www.w3schools.com/cpp/cpp_operators.asp 
    
    // C++ Operators -> Arithmetic Operators
    /*
    * Operator	Name		        Example	
        +	    Addition		    x + y	
        -	    Subtraction		    x - y	
        *	    Multiplication		x * y	
        /	    Division		    x / y	
        %	    Modulus		        x % y	
        ++	    Increment		    ++x	x++
        --	    Decrement	        --x
    */

    // C++ Operators -> Assignment Operators
    /*
    Operator	Example	    Same As	
        =	    x = 5	    x = 5	
        +=	    x += 3	    x = x + 3	
        -=	    x -= 3	    x = x - 3	
        *=	    x *= 3	    x = x * 3	
        /=	    x /= 3	    x = x / 3	
        %=	    x %= 3  	x = x % 3
    */

    // C++ Operators -> Comparison Operators
    /*
    Operator	Name	                    Example	
        ==	    Equal to	                x == y	
        !=	    Not equal	                x != y	
        >	    Greater than	            x > y	
        <	    Less than	                x < y	
        >=	    Greater than or equal to	x >= y	
        <=	    Less than or equal to	    x <= y
    */

    // C++ Operators -> Logical Operators
    /*
    Operator	Name	                    Description	                                    Example	
        && 	    Logical and	    Returns true if both statements are true	            x < 5 &&  x < 10	
        || 	    Logical or	    Returns true if one of the statements is true	        x < 5 || x < 4	
        !	    Logical not	    Reverse the result, returns false if the result is true	!(x < 5 && x < 10)
    */
    //C++ Conditions and If Statements
    cout<< "C++ Conditions and If Statements"<<endl;
    vector<int> numbers = { 2,12,-123 };

    if (numbers[0] <= numbers[1] && numbers[0] >= numbers[2]) {
        cout << "First Condition" << endl;
    }
    else if (numbers[1] <= numbers[2] && numbers[0] >= numbers[2]) {
        cout << "Second Condition" << endl;
    }
    else{ 
        cout << "Last Condition" << endl;
    }

    //C++ While Loop
    cout << "C++ While Loop" << endl;
    int i1 = 0;
    while (i1 < 5) {
        cout << i1 << endl;
        i1++;
    }

    //C++ For Loop
    cout << "C++ For Loop" << endl;
    cout << "First For Loop" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i << endl;
    }
    cout << "Second For Loop" << endl;
    for (int i = 0; i <= 10; i = i + 2) {
        cout << i << endl;
    }

    //C++ Break
    cout << "C++ Break" << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << endl;
    }

    //C++ Continue
    cout << "C++ Continue" << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << endl;
    }

    //Break and Continue in While Loop
    cout << "Break and Continue in While Loop" << endl;
    int i2 = 0;
    while (i2 < 10) {
        cout << i2 << endl;
        i2++;
        if (i2 == 3) {
            continue;
        }
        if (i2 == 4) {
            break;
        }
    }
    return 0;
}
