

#include "huaweicloud/vpc/model/DeleteSecurityGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




DeleteSecurityGroupRequest::DeleteSecurityGroupRequest()
{
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
}

DeleteSecurityGroupRequest::~DeleteSecurityGroupRequest() = default;

void DeleteSecurityGroupRequest::validate()
{
}

web::json::value DeleteSecurityGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }

    return val;
}

bool DeleteSecurityGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    return ok;
}


std::string DeleteSecurityGroupRequest::getSecurityGroupId() const
{
    return securityGroupId_;
}

void DeleteSecurityGroupRequest::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool DeleteSecurityGroupRequest::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void DeleteSecurityGroupRequest::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

}
}
}
}
}


