

#include "huaweicloud/csms/v1/model/ShowSecretStageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ShowSecretStageRequest::ShowSecretStageRequest()
{
    secretName_ = "";
    secretNameIsSet_ = false;
    stageName_ = "";
    stageNameIsSet_ = false;
}

ShowSecretStageRequest::~ShowSecretStageRequest() = default;

void ShowSecretStageRequest::validate()
{
}

web::json::value ShowSecretStageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }
    if(stageNameIsSet_) {
        val[utility::conversions::to_string_t("stage_name")] = ModelBase::toJson(stageName_);
    }

    return val;
}

bool ShowSecretStageRequest::fromJson(const web::json::value& val)
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
    return ok;
}

std::string ShowSecretStageRequest::getSecretName() const
{
    return secretName_;
}

void ShowSecretStageRequest::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool ShowSecretStageRequest::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void ShowSecretStageRequest::unsetsecretName()
{
    secretNameIsSet_ = false;
}

std::string ShowSecretStageRequest::getStageName() const
{
    return stageName_;
}

void ShowSecretStageRequest::setStageName(const std::string& value)
{
    stageName_ = value;
    stageNameIsSet_ = true;
}

bool ShowSecretStageRequest::stageNameIsSet() const
{
    return stageNameIsSet_;
}

void ShowSecretStageRequest::unsetstageName()
{
    stageNameIsSet_ = false;
}

}
}
}
}
}


