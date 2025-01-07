#include "parent.h"
#include "utils.h"

class Child : public Parent
{
    private:
    std::string m_surname;
    public:
    void SetSurName(std::string str)
    {
        m_surname = str;
    }
    void PrintPersonal(void)
    {
        this->Parent::PrintPersonal();
        Utils::print(m_surname.c_str());
    }
};

/// @brief
/// @param argc
/// @param argv
/// @return
int main(int argc, char *argv[])
{
    Child A;
    A.SetName("Ivan");
    A.SetSurName("Ivanov");
    A.PrintPersonal();
    return 0;
}