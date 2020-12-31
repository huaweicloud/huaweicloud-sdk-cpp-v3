

#include "huaweicloud/vpc/model/ListSecurityGroupsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListSecurityGroupsResponse::ListSecurityGroupsResponse()
{
    securityGroupsIsSet_ = false;
}

ListSecurityGroupsResponse::~ListSecurityGroupsResponse() = default;

void ListSecurityGroupsResponse::validate()
{
}

web::json::value ListSecurityGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }

    return val;
}

bool ListSecurityGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<SecurityGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
        }
    }
    return ok;
}


std::vector<SecurityGroup>& ListSecurityGroupsResponse::getSecurityGroups()
{
    return securityGroups_;
}

void ListSecurityGroupsResponse::setSecurityGroups(const std::vector<SecurityGroup>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool ListSecurityGroupsResponse::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void ListSecurityGroupsResponse::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

}
}
}
}
}


