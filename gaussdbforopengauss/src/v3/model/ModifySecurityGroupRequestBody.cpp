

#include "huaweicloud/gaussdbforopengauss/v3/model/ModifySecurityGroupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ModifySecurityGroupRequestBody::ModifySecurityGroupRequestBody()
{
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
}

ModifySecurityGroupRequestBody::~ModifySecurityGroupRequestBody() = default;

void ModifySecurityGroupRequestBody::validate()
{
}

web::json::value ModifySecurityGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }

    return val;
}
bool ModifySecurityGroupRequestBody::fromJson(const web::json::value& val)
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


std::string ModifySecurityGroupRequestBody::getSecurityGroupId() const
{
    return securityGroupId_;
}

void ModifySecurityGroupRequestBody::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool ModifySecurityGroupRequestBody::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void ModifySecurityGroupRequestBody::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

}
}
}
}
}


