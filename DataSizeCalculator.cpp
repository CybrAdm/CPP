    #include <iostream>
    using namespace std;

    int main()
    {
        int kilobytes;
    cout << "Enter number of Kilobytes: ";
    cin >> kilobytes;

    int bits = kilobytes * 8000;
    int bytes = kilobytes * 1024;
    int megabytes = kilobytes / 1024;
    int gigabytes = megabytes / 1024;
    int terabytes = gigabytes / 1024;



    cout << "Number Of Terabytes: " << terabytes << " Terabytes.\n";
    cout << "Number Of Gigabytes: " << gigabytes << " Gigabytes.\n";
    cout << "Number Of Megabytes: " << megabytes << " Megabytes.\n";
    cout << "Number of Kilobytes: " << kilobytes << " Kilobytes.\n";
    cout << "Number Of Bytes: " << bytes << " Bytes.\n";
    cout << "Number Of Bits: " << bits << " Bits.";

    return 0;
    }