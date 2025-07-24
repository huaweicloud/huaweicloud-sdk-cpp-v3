

#include "huaweicloud/cloudtest/v1/model/AuthInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AuthInfo::AuthInfo()
{
    accessKey_ = "";
    accessKeyIsSet_ = false;
    secretKey_ = "";
    secretKeyIsSet_ = false;
}

AuthInfo::~AuthInfo() = default;

void AuthInfo::validate()
{
}

web::json::value AuthInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessKeyIsSet_) {
        val[utility::conversions::to_string_t("access_key")] = ModelBase::toJson(accessKey_);
    }
    if(secretKeyIsSet_) {
        val[utility::conversions::to_string_t("secret_key")] = ModelBase::toJson(secretKey_);
    }

    return val;
}
bool AuthInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretKey(refVal);
        }
    }
    return ok;
}


std::string AuthInfo::getAccessKey() const
{
    return accessKey_;
}

void AuthInfo::setAccessKey(const std::string& value)
{
    accessKey_ = value;
    accessKeyIsSet_ = true;
}

bool AuthInfo::accessKeyIsSet() const
{
    return accessKeyIsSet_;
}

void AuthInfo::unsetaccessKey()
{
    accessKeyIsSet_ = false;
}

std::string AuthInfo::getSecretKey() const
{
    return secretKey_;
}

void AuthInfo::setSecretKey(const std::string& value)
{
    secretKey_ = value;
    secretKeyIsSet_ = true;
}

bool AuthInfo::secretKeyIsSet() const
{
    return secretKeyIsSet_;
}

void AuthInfo::unsetsecretKey()
{
    secretKeyIsSet_ = false;
}

}
}
}
}
}


