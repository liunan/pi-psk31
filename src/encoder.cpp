
/**
return the psk31 code for input,with zero paddings
*/
unsigned getBlobData(char input,int& len)
{
    switch(input)
    {
        case 'a':
            return 0xB;//1011
        case 'b':
            return 0x5F;//1011111
        case 'c':
            return 0x2F;//101111
        case 'd':
            return 0x2D;//101101
        case 'e'：
            return 0x3;//11
        case 'f':
            return 0x3D;//111101
        case 'g':
            return 0x5B;//1011011
        case 'h':
            return 0x2B;//101011
        case 'i':
            return 0xD;//1101
        case 'j':
            return 0x1EB;//111101011
        case 'k':
            return 0xBF;//10111111
        case 'l':
            return 0x1B;//11011
        case 'm':
            return 0x3B;//111011
        case 'n':
            return 0xF;//1111
        case 'o':
            return 0x7;//111
        case 'p':
            return 0x7F;//1111111
        case 'q':
            return 0x1BF;//110111111
        case 'r':
            return 0x15;//10101
        case 's':
            return 0x17;//10111
        case 't':
            return 0x5;//101
        case 'u':
            return 0x37;//110111
        case 'v':
            return 0x7B;//1111011
        case 'w':
            return 0x6B;//1101011
        case 'x':
            return 0xDF;//11011111
        case 'y':
            return 0x5D;//1011101
        case 'z':
            return 0x1D5;//111010101

        ////////////////////
        case '0':
            return 0xB7;//10110111
        case '1':
            return 0xBD;//10111101
        case '2':
            return 0xED;//11101101
        case '3':
            return 0xFF;//11111111
        case '4':
            return 0x177;//101110111
        case '5'：
            return 0x15B;//101011011
        case '6':
            return 0x16B;//101101011
        case '7':
            return 0x1AD;//110101101
        case '8':
            return 0x1AB;//110101011
        case '9'：
            return 0x1B7;//110110111
        
        //////////////
        // case ',':
        // case '.':
        case ' ':
            return 0x1;//1
        // case '<':
        // case '>':
        // case '\'':
        // case '\"':
        // case '!':
        // case '+':
        // case '-':
    }

    return 0;//return 0 for unknow characters

}