

#include "huaweicloud/csms/v1/model/CreateSecretVersionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CreateSecretVersionRequest::CreateSecretVersionRequest()
{
    secretName_ = "";
    secretNameIsSet_ = false;
    bodyIsSet_ = false;
}

CreateSecretVersionRequest::~CreateSecretVersionRequest() = default;

void CreateSecretVersionRequest::validate()
{
}

web::json::value CreateSecretVersionRequest::toJson() const
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

bool CreateSecretVersionRequest::fromJson(const web::json::value& val)
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
            CreateSecretVersionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateSecretVersionRequest::getSecretName() const
{
    return secretName_;
}

void CreateSecretVersionRequest::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool CreateSecretVersionRequest::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void CreateSecretVersionRequest::unsetsecretName()
{
    secretNameIsSet_ = false;
}

CreateSecretVersionRequestBody CreateSecretVersionRequest::getBody() const
{
    return body_;
}

void CreateSecretVersionRequest::setBody(const CreateSecretVersionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSecretVersionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSecretVersionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


