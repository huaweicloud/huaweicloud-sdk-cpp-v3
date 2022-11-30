

#include "huaweicloud/csms/v1/model/DeleteSecretStageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




DeleteSecretStageRequest::DeleteSecretStageRequest()
{
    secretName_ = "";
    secretNameIsSet_ = false;
    stageName_ = "";
    stageNameIsSet_ = false;
}

DeleteSecretStageRequest::~DeleteSecretStageRequest() = default;

void DeleteSecretStageRequest::validate()
{
}

web::json::value DeleteSecretStageRequest::toJson() const
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

bool DeleteSecretStageRequest::fromJson(const web::json::value& val)
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


std::string DeleteSecretStageRequest::getSecretName() const
{
    return secretName_;
}

void DeleteSecretStageRequest::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool DeleteSecretStageRequest::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void DeleteSecretStageRequest::unsetsecretName()
{
    secretNameIsSet_ = false;
}

std::string DeleteSecretStageRequest::getStageName() const
{
    return stageName_;
}

void DeleteSecretStageRequest::setStageName(const std::string& value)
{
    stageName_ = value;
    stageNameIsSet_ = true;
}

bool DeleteSecretStageRequest::stageNameIsSet() const
{
    return stageNameIsSet_;
}

void DeleteSecretStageRequest::unsetstageName()
{
    stageNameIsSet_ = false;
}

}
}
}
}
}


