

#include "huaweicloud/csms/v1/model/UpdateSecretStageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UpdateSecretStageRequest::UpdateSecretStageRequest()
{
    secretName_ = "";
    secretNameIsSet_ = false;
    stageName_ = "";
    stageNameIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSecretStageRequest::~UpdateSecretStageRequest() = default;

void UpdateSecretStageRequest::validate()
{
}

web::json::value UpdateSecretStageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }
    if(stageNameIsSet_) {
        val[utility::conversions::to_string_t("stage_name")] = ModelBase::toJson(stageName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateSecretStageRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("stage_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stage_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateSecretStageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateSecretStageRequest::getSecretName() const
{
    return secretName_;
}

void UpdateSecretStageRequest::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool UpdateSecretStageRequest::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void UpdateSecretStageRequest::unsetsecretName()
{
    secretNameIsSet_ = false;
}

std::string UpdateSecretStageRequest::getStageName() const
{
    return stageName_;
}

void UpdateSecretStageRequest::setStageName(const std::string& value)
{
    stageName_ = value;
    stageNameIsSet_ = true;
}

bool UpdateSecretStageRequest::stageNameIsSet() const
{
    return stageNameIsSet_;
}

void UpdateSecretStageRequest::unsetstageName()
{
    stageNameIsSet_ = false;
}

UpdateSecretStageRequestBody UpdateSecretStageRequest::getBody() const
{
    return body_;
}

void UpdateSecretStageRequest::setBody(const UpdateSecretStageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSecretStageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSecretStageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


