#ifndef ROLE_BASED_ACCESS_H
#define ROLE_BASED_ACCESS_H

#include <string>

class RoleBasedAccess {
public:
    bool canAccess(
        const std::string& role,
        const std::string& action
    );
};

#endif