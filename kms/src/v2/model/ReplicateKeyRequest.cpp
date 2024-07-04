

#include "huaweicloud/kms/v2/model/ReplicateKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ReplicateKeyRequest::ReplicateKeyRequest()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    bodyIsSet_ = false;
}

ReplicateKeyRequest::~ReplicateKeyRequest() = default;

void ReplicateKeyRequest::validate()
{
}

web::json::value ReplicateKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ReplicateKeyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ReplicateKeyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ReplicateKeyRequest::getKeyId() const
{
    return keyId_;
}

void ReplicateKeyRequest::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ReplicateKeyRequest::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ReplicateKeyRequest::unsetkeyId()
{
    keyIdIsSet_ = false;
}

ReplicateKeyRequestBody ReplicateKeyRequest::getBody() const
{
    return body_;
}

void ReplicateKeyRequest::setBody(const ReplicateKeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ReplicateKeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ReplicateKeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


