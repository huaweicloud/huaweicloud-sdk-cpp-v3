

#include "huaweicloud/csms/v1/model/UpdateSecretRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UpdateSecretRequest::UpdateSecretRequest()
{
    secretName_ = "";
    secretNameIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSecretRequest::~UpdateSecretRequest() = default;

void UpdateSecretRequest::validate()
{
}

web::json::value UpdateSecretRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateSecretRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secret_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateSecretRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateSecretRequest::getSecretName() const
{
    return secretName_;
}

void UpdateSecretRequest::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool UpdateSecretRequest::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void UpdateSecretRequest::unsetsecretName()
{
    secretNameIsSet_ = false;
}

UpdateSecretRequestBody UpdateSecretRequest::getBody() const
{
    return body_;
}

void UpdateSecretRequest::setBody(const UpdateSecretRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSecretRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSecretRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


