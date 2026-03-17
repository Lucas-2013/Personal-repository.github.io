#include <iostream>
namespace first{
      int age = 7;
}
int main(){
    //integer (whole number)
    int age = 2;
    //double (number including decimal)
    double grade = 6.5;
    double temperature = 5.3;
    double sum2 = grade + temperature;
    //single character
    const char GRADE2 = 'A';
    //string (sequence text)
    std::string name = "Lucas navarro";
    //boolean (true or false)
    bool student = true;
    //output
    std::cout << first::age << std::endl;
    std::cout << "I like pizza" << std::endl;
    std::cout << "I'ts really good" << std::endl;
    std::cout << "I'ts an new student?" << std::endl;
    return 0;
}