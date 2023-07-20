

#include "huaweicloud/gaussdb/v3/model/ModifySecurityGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifySecurityGroupRequest::ModifySecurityGroupRequest()
{
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
}

ModifySecurityGroupRequest::~ModifySecurityGroupRequest() = default;

void ModifySecurityGroupRequest::validate()
{
}

web::json::value ModifySecurityGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }

    return val;
}

bool ModifySecurityGroupRequest::fromJson(const web::json::value& val)
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

std::string ModifySecurityGroupRequest::getSecurityGroupId() const
{
    return securityGroupId_;
}

void ModifySecurityGroupRequest::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool ModifySecurityGroupRequest::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void ModifySecurityGroupRequest::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

}
}
}
}
}


