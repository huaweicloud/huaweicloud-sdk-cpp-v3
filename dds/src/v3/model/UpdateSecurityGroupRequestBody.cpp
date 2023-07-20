

#include "huaweicloud/dds/v3/model/UpdateSecurityGroupRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateSecurityGroupRequestBody::UpdateSecurityGroupRequestBody()
{
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
}

UpdateSecurityGroupRequestBody::~UpdateSecurityGroupRequestBody() = default;

void UpdateSecurityGroupRequestBody::validate()
{
}

web::json::value UpdateSecurityGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }

    return val;
}

bool UpdateSecurityGroupRequestBody::fromJson(const web::json::value& val)
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

std::string UpdateSecurityGroupRequestBody::getSecurityGroupId() const
{
    return securityGroupId_;
}

void UpdateSecurityGroupRequestBody::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool UpdateSecurityGroupRequestBody::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void UpdateSecurityGroupRequestBody::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

}
}
}
}
}


