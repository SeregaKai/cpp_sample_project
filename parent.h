#pragma once
#include <string>

/// @brief
class Parent
{
    private:
    /// @brief
    std::string m_name;

    public:
    /// @brief
    /// @param name
    void SetName(std::string name);

    /// @brief
    void PrintPersonal(void);
};