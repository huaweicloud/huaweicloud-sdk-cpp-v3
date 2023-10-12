

#include "huaweicloud/vpc/v2/model/NeutronDeleteSecurityGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronDeleteSecurityGroupRequest::NeutronDeleteSecurityGroupRequest()
{
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
}

NeutronDeleteSecurityGroupRequest::~NeutronDeleteSecurityGroupRequest() = default;

void NeutronDeleteSecurityGroupRequest::validate()
{
}

web::json::value NeutronDeleteSecurityGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }

    return val;
}
bool NeutronDeleteSecurityGroupRequest::fromJson(const web::json::value& val)
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


std::string NeutronDeleteSecurityGroupRequest::getSecurityGroupId() const
{
    return securityGroupId_;
}

void NeutronDeleteSecurityGroupRequest::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool NeutronDeleteSecurityGroupRequest::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void NeutronDeleteSecurityGroupRequest::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

}
}
}
}
}


