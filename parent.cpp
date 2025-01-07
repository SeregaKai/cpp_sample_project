#include "parent.h"
#include "utils.h"

void Parent::SetName(std::string name)
{
    m_name = name;
}

void Parent::PrintPersonal(void)
{
    Utils::print(m_name.c_str());
}
