

#include "huaweicloud/vpc/v2/model/DeleteSecurityGroupTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




DeleteSecurityGroupTagRequest::DeleteSecurityGroupTagRequest()
{
    key_ = "";
    keyIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
}

DeleteSecurityGroupTagRequest::~DeleteSecurityGroupTagRequest() = default;

void DeleteSecurityGroupTagRequest::validate()
{
}

web::json::value DeleteSecurityGroupTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }

    return val;
}
bool DeleteSecurityGroupTagRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
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


std::string DeleteSecurityGroupTagRequest::getKey() const
{
    return key_;
}

void DeleteSecurityGroupTagRequest::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DeleteSecurityGroupTagRequest::keyIsSet() const
{
    return keyIsSet_;
}

void DeleteSecurityGroupTagRequest::unsetkey()
{
    keyIsSet_ = false;
}

std::string DeleteSecurityGroupTagRequest::getSecurityGroupId() const
{
    return securityGroupId_;
}

void DeleteSecurityGroupTagRequest::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool DeleteSecurityGroupTagRequest::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void DeleteSecurityGroupTagRequest::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

}
}
}
}
}


