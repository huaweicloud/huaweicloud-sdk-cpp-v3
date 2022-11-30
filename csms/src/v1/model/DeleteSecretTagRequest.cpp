

#include "huaweicloud/csms/v1/model/DeleteSecretTagRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




DeleteSecretTagRequest::DeleteSecretTagRequest()
{
    secretId_ = "";
    secretIdIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
}

DeleteSecretTagRequest::~DeleteSecretTagRequest() = default;

void DeleteSecretTagRequest::validate()
{
}

web::json::value DeleteSecretTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretIdIsSet_) {
        val[utility::conversions::to_string_t("secret_id")] = ModelBase::toJson(secretId_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }

    return val;
}

bool DeleteSecretTagRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secret_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    return ok;
}


std::string DeleteSecretTagRequest::getSecretId() const
{
    return secretId_;
}

void DeleteSecretTagRequest::setSecretId(const std::string& value)
{
    secretId_ = value;
    secretIdIsSet_ = true;
}

bool DeleteSecretTagRequest::secretIdIsSet() const
{
    return secretIdIsSet_;
}

void DeleteSecretTagRequest::unsetsecretId()
{
    secretIdIsSet_ = false;
}

std::string DeleteSecretTagRequest::getKey() const
{
    return key_;
}

void DeleteSecretTagRequest::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DeleteSecretTagRequest::keyIsSet() const
{
    return keyIsSet_;
}

void DeleteSecretTagRequest::unsetkey()
{
    keyIsSet_ = false;
}

}
}
}
}
}


