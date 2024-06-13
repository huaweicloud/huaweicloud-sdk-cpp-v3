

#include "huaweicloud/vpc/v2/model/ShowSecurityGroupTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowSecurityGroupTagsRequest::ShowSecurityGroupTagsRequest()
{
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
}

ShowSecurityGroupTagsRequest::~ShowSecurityGroupTagsRequest() = default;

void ShowSecurityGroupTagsRequest::validate()
{
}

web::json::value ShowSecurityGroupTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }

    return val;
}
bool ShowSecurityGroupTagsRequest::fromJson(const web::json::value& val)
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


std::string ShowSecurityGroupTagsRequest::getSecurityGroupId() const
{
    return securityGroupId_;
}

void ShowSecurityGroupTagsRequest::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool ShowSecurityGroupTagsRequest::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void ShowSecurityGroupTagsRequest::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

}
}
}
}
}


