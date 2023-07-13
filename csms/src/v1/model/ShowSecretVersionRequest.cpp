

#include "huaweicloud/csms/v1/model/ShowSecretVersionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ShowSecretVersionRequest::ShowSecretVersionRequest()
{
    secretName_ = "";
    secretNameIsSet_ = false;
    versionId_ = "";
    versionIdIsSet_ = false;
}

ShowSecretVersionRequest::~ShowSecretVersionRequest() = default;

void ShowSecretVersionRequest::validate()
{
}

web::json::value ShowSecretVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }
    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }

    return val;
}

bool ShowSecretVersionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionId(refVal);
        }
    }
    return ok;
}

std::string ShowSecretVersionRequest::getSecretName() const
{
    return secretName_;
}

void ShowSecretVersionRequest::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool ShowSecretVersionRequest::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void ShowSecretVersionRequest::unsetsecretName()
{
    secretNameIsSet_ = false;
}

std::string ShowSecretVersionRequest::getVersionId() const
{
    return versionId_;
}

void ShowSecretVersionRequest::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool ShowSecretVersionRequest::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void ShowSecretVersionRequest::unsetversionId()
{
    versionIdIsSet_ = false;
}

}
}
}
}
}


