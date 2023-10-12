

#include "huaweicloud/gaussdbfornosql/v3/model/ShowInstanceRoleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowInstanceRoleResponse::ShowInstanceRoleResponse()
{
    role_ = "";
    roleIsSet_ = false;
}

ShowInstanceRoleResponse::~ShowInstanceRoleResponse() = default;

void ShowInstanceRoleResponse::validate()
{
}

web::json::value ShowInstanceRoleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }

    return val;
}
bool ShowInstanceRoleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
        }
    }
    return ok;
}


std::string ShowInstanceRoleResponse::getRole() const
{
    return role_;
}

void ShowInstanceRoleResponse::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool ShowInstanceRoleResponse::roleIsSet() const
{
    return roleIsSet_;
}

void ShowInstanceRoleResponse::unsetrole()
{
    roleIsSet_ = false;
}

}
}
}
}
}


