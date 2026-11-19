

#include "huaweicloud/kms/v2/model/UpdateKeyStoreRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




UpdateKeyStoreRequestBody::UpdateKeyStoreRequestBody()
{
    proxyAccessKeyId_ = "";
    proxyAccessKeyIdIsSet_ = false;
    proxySecretAccessKey_ = "";
    proxySecretAccessKeyIsSet_ = false;
}

UpdateKeyStoreRequestBody::~UpdateKeyStoreRequestBody() = default;

void UpdateKeyStoreRequestBody::validate()
{
}

web::json::value UpdateKeyStoreRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(proxyAccessKeyIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_access_key_id")] = ModelBase::toJson(proxyAccessKeyId_);
    }
    if(proxySecretAccessKeyIsSet_) {
        val[utility::conversions::to_string_t("proxy_secret_access_key")] = ModelBase::toJson(proxySecretAccessKey_);
    }

    return val;
}
bool UpdateKeyStoreRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("proxy_access_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_access_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyAccessKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_secret_access_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_secret_access_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxySecretAccessKey(refVal);
        }
    }
    return ok;
}


std::string UpdateKeyStoreRequestBody::getProxyAccessKeyId() const
{
    return proxyAccessKeyId_;
}

void UpdateKeyStoreRequestBody::setProxyAccessKeyId(const std::string& value)
{
    proxyAccessKeyId_ = value;
    proxyAccessKeyIdIsSet_ = true;
}

bool UpdateKeyStoreRequestBody::proxyAccessKeyIdIsSet() const
{
    return proxyAccessKeyIdIsSet_;
}

void UpdateKeyStoreRequestBody::unsetproxyAccessKeyId()
{
    proxyAccessKeyIdIsSet_ = false;
}

std::string UpdateKeyStoreRequestBody::getProxySecretAccessKey() const
{
    return proxySecretAccessKey_;
}

void UpdateKeyStoreRequestBody::setProxySecretAccessKey(const std::string& value)
{
    proxySecretAccessKey_ = value;
    proxySecretAccessKeyIsSet_ = true;
}

bool UpdateKeyStoreRequestBody::proxySecretAccessKeyIsSet() const
{
    return proxySecretAccessKeyIsSet_;
}

void UpdateKeyStoreRequestBody::unsetproxySecretAccessKey()
{
    proxySecretAccessKeyIsSet_ = false;
}

}
}
}
}
}


