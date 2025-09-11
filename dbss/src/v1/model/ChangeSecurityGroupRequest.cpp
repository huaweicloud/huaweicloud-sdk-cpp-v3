

#include "huaweicloud/dbss/v1/model/ChangeSecurityGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ChangeSecurityGroupRequest::ChangeSecurityGroupRequest()
{
    securityGroupIdsIsSet_ = false;
}

ChangeSecurityGroupRequest::~ChangeSecurityGroupRequest() = default;

void ChangeSecurityGroupRequest::validate()
{
}

web::json::value ChangeSecurityGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIdsIsSet_) {
        val[utility::conversions::to_string_t("security_group_ids")] = ModelBase::toJson(securityGroupIds_);
    }

    return val;
}
bool ChangeSecurityGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_group_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ChangeSecurityGroupRequest::getSecurityGroupIds()
{
    return securityGroupIds_;
}

void ChangeSecurityGroupRequest::setSecurityGroupIds(const std::vector<std::string>& value)
{
    securityGroupIds_ = value;
    securityGroupIdsIsSet_ = true;
}

bool ChangeSecurityGroupRequest::securityGroupIdsIsSet() const
{
    return securityGroupIdsIsSet_;
}

void ChangeSecurityGroupRequest::unsetsecurityGroupIds()
{
    securityGroupIdsIsSet_ = false;
}

}
}
}
}
}


