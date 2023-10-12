

#include "huaweicloud/rds/v3/model/SecurityGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SecurityGroupRequest::SecurityGroupRequest()
{
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
}

SecurityGroupRequest::~SecurityGroupRequest() = default;

void SecurityGroupRequest::validate()
{
}

web::json::value SecurityGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }

    return val;
}
bool SecurityGroupRequest::fromJson(const web::json::value& val)
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


std::string SecurityGroupRequest::getSecurityGroupId() const
{
    return securityGroupId_;
}

void SecurityGroupRequest::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool SecurityGroupRequest::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void SecurityGroupRequest::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

}
}
}
}
}


