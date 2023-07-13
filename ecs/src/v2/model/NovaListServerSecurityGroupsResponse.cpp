

#include "huaweicloud/ecs/v2/model/NovaListServerSecurityGroupsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaListServerSecurityGroupsResponse::NovaListServerSecurityGroupsResponse()
{
    securityGroupsIsSet_ = false;
}

NovaListServerSecurityGroupsResponse::~NovaListServerSecurityGroupsResponse() = default;

void NovaListServerSecurityGroupsResponse::validate()
{
}

web::json::value NovaListServerSecurityGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }

    return val;
}

bool NovaListServerSecurityGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<NovaSecurityGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
        }
    }
    return ok;
}

std::vector<NovaSecurityGroup>& NovaListServerSecurityGroupsResponse::getSecurityGroups()
{
    return securityGroups_;
}

void NovaListServerSecurityGroupsResponse::setSecurityGroups(const std::vector<NovaSecurityGroup>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool NovaListServerSecurityGroupsResponse::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void NovaListServerSecurityGroupsResponse::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

}
}
}
}
}


