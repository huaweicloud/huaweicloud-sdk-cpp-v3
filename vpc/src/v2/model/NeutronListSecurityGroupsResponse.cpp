

#include "huaweicloud/vpc/v2/model/NeutronListSecurityGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronListSecurityGroupsResponse::NeutronListSecurityGroupsResponse()
{
    securityGroupsIsSet_ = false;
    securityGroupsLinksIsSet_ = false;
}

NeutronListSecurityGroupsResponse::~NeutronListSecurityGroupsResponse() = default;

void NeutronListSecurityGroupsResponse::validate()
{
}

web::json::value NeutronListSecurityGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(securityGroupsLinksIsSet_) {
        val[utility::conversions::to_string_t("security_groups_links")] = ModelBase::toJson(securityGroupsLinks_);
    }

    return val;
}
bool NeutronListSecurityGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronSecurityGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_groups_links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups_links"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronPageLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupsLinks(refVal);
        }
    }
    return ok;
}


std::vector<NeutronSecurityGroup>& NeutronListSecurityGroupsResponse::getSecurityGroups()
{
    return securityGroups_;
}

void NeutronListSecurityGroupsResponse::setSecurityGroups(const std::vector<NeutronSecurityGroup>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool NeutronListSecurityGroupsResponse::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void NeutronListSecurityGroupsResponse::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

std::vector<NeutronPageLink>& NeutronListSecurityGroupsResponse::getSecurityGroupsLinks()
{
    return securityGroupsLinks_;
}

void NeutronListSecurityGroupsResponse::setSecurityGroupsLinks(const std::vector<NeutronPageLink>& value)
{
    securityGroupsLinks_ = value;
    securityGroupsLinksIsSet_ = true;
}

bool NeutronListSecurityGroupsResponse::securityGroupsLinksIsSet() const
{
    return securityGroupsLinksIsSet_;
}

void NeutronListSecurityGroupsResponse::unsetsecurityGroupsLinks()
{
    securityGroupsLinksIsSet_ = false;
}

}
}
}
}
}


