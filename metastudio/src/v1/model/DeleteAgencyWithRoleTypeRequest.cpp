

#include "huaweicloud/metastudio/v1/model/DeleteAgencyWithRoleTypeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteAgencyWithRoleTypeRequest::DeleteAgencyWithRoleTypeRequest()
{
    roleType_ = "";
    roleTypeIsSet_ = false;
}

DeleteAgencyWithRoleTypeRequest::~DeleteAgencyWithRoleTypeRequest() = default;

void DeleteAgencyWithRoleTypeRequest::validate()
{
}

web::json::value DeleteAgencyWithRoleTypeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleTypeIsSet_) {
        val[utility::conversions::to_string_t("role_type")] = ModelBase::toJson(roleType_);
    }

    return val;
}
bool DeleteAgencyWithRoleTypeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("role_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleType(refVal);
        }
    }
    return ok;
}


std::string DeleteAgencyWithRoleTypeRequest::getRoleType() const
{
    return roleType_;
}

void DeleteAgencyWithRoleTypeRequest::setRoleType(const std::string& value)
{
    roleType_ = value;
    roleTypeIsSet_ = true;
}

bool DeleteAgencyWithRoleTypeRequest::roleTypeIsSet() const
{
    return roleTypeIsSet_;
}

void DeleteAgencyWithRoleTypeRequest::unsetroleType()
{
    roleTypeIsSet_ = false;
}

}
}
}
}
}


