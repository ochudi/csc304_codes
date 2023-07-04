x = 1;
y = 3;
z = 5;


def sub1():
    a = 7;
    y = 9;
    z = 11;


    def sub2():
        global x;
        a = 13;
        x = 15;
        w = 17;


        def sub3():
            nonlocal a;
            a = 19;
            b = 21;
            z = 23;
    
# List all the variables, along with the program units where they are declared, that are 
# visible in the bodies of sub1, sub2, and sub3, assuming static scoping is used.