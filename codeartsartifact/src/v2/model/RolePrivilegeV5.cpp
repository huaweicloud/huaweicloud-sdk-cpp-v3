

#include "huaweicloud/codeartsartifact/v2/model/RolePrivilegeV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




RolePrivilegeV5::RolePrivilegeV5()
{
    privilegesIsSet_ = false;
}

RolePrivilegeV5::~RolePrivilegeV5() = default;

void RolePrivilegeV5::validate()
{
}

web::json::value RolePrivilegeV5::toJson() const
{
    web::json::value val = web::json::value::object();

    if(privilegesIsSet_) {
        val[utility::conversions::to_string_t("privileges")] = ModelBase::toJson(privileges_);
    }

    return val;
}
bool RolePrivilegeV5::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("privileges"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privileges"));
        if(!fieldValue.is_null())
        {
            std::vector<PrivilegeParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivileges(refVal);
        }
    }
    return ok;
}


std::vector<PrivilegeParam>& RolePrivilegeV5::getPrivileges()
{
    return privileges_;
}

void RolePrivilegeV5::setPrivileges(const std::vector<PrivilegeParam>& value)
{
    privileges_ = value;
    privilegesIsSet_ = true;
}

bool RolePrivilegeV5::privilegesIsSet() const
{
    return privilegesIsSet_;
}

void RolePrivilegeV5::unsetprivileges()
{
    privilegesIsSet_ = false;
}

}
}
}
}
}


