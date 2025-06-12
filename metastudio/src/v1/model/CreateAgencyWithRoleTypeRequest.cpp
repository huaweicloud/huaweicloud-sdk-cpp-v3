

#include "huaweicloud/metastudio/v1/model/CreateAgencyWithRoleTypeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateAgencyWithRoleTypeRequest::CreateAgencyWithRoleTypeRequest()
{
    roleType_ = "";
    roleTypeIsSet_ = false;
}

CreateAgencyWithRoleTypeRequest::~CreateAgencyWithRoleTypeRequest() = default;

void CreateAgencyWithRoleTypeRequest::validate()
{
}

web::json::value CreateAgencyWithRoleTypeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleTypeIsSet_) {
        val[utility::conversions::to_string_t("role_type")] = ModelBase::toJson(roleType_);
    }

    return val;
}
bool CreateAgencyWithRoleTypeRequest::fromJson(const web::json::value& val)
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


std::string CreateAgencyWithRoleTypeRequest::getRoleType() const
{
    return roleType_;
}

void CreateAgencyWithRoleTypeRequest::setRoleType(const std::string& value)
{
    roleType_ = value;
    roleTypeIsSet_ = true;
}

bool CreateAgencyWithRoleTypeRequest::roleTypeIsSet() const
{
    return roleTypeIsSet_;
}

void CreateAgencyWithRoleTypeRequest::unsetroleType()
{
    roleTypeIsSet_ = false;
}

}
}
}
}
}


