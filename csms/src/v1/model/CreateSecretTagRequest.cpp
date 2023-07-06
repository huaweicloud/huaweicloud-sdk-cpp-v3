

#include "huaweicloud/csms/v1/model/CreateSecretTagRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CreateSecretTagRequest::CreateSecretTagRequest()
{
    secretId_ = "";
    secretIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateSecretTagRequest::~CreateSecretTagRequest() = default;

void CreateSecretTagRequest::validate()
{
}

web::json::value CreateSecretTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretIdIsSet_) {
        val[utility::conversions::to_string_t("secret_id")] = ModelBase::toJson(secretId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateSecretTagRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateSecretTagRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateSecretTagRequest::getSecretId() const
{
    return secretId_;
}

void CreateSecretTagRequest::setSecretId(const std::string& value)
{
    secretId_ = value;
    secretIdIsSet_ = true;
}

bool CreateSecretTagRequest::secretIdIsSet() const
{
    return secretIdIsSet_;
}

void CreateSecretTagRequest::unsetsecretId()
{
    secretIdIsSet_ = false;
}

CreateSecretTagRequestBody CreateSecretTagRequest::getBody() const
{
    return body_;
}

void CreateSecretTagRequest::setBody(const CreateSecretTagRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSecretTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSecretTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


