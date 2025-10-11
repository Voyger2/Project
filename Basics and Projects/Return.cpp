#include <iostream>

std::string concatStrings(std::string string1, std::string string2, std::string string3);
int main()
{
    std::string City = "Pune";
    std::string State = "Maharashtra";
    std::string Country = "India";
    std::string Address = concatStrings (City, State, Country);
    std::cout << "Your address is: " << Address;
    
    return 0;

}
std::string concatStrings(std::string string1, std::string string2, std::string string3)
{ return string1 + " " + string2 + " " + string3;
}