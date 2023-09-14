

#include "huaweicloud/csms/v1/model/UpdateVersionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UpdateVersionRequest::UpdateVersionRequest()
{
    secretName_ = "";
    secretNameIsSet_ = false;
    versionId_ = "";
    versionIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateVersionRequest::~UpdateVersionRequest() = default;

void UpdateVersionRequest::validate()
{
}

web::json::value UpdateVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }
    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateVersionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateVersionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateVersionRequest::getSecretName() const
{
    return secretName_;
}

void UpdateVersionRequest::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool UpdateVersionRequest::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void UpdateVersionRequest::unsetsecretName()
{
    secretNameIsSet_ = false;
}

std::string UpdateVersionRequest::getVersionId() const
{
    return versionId_;
}

void UpdateVersionRequest::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool UpdateVersionRequest::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void UpdateVersionRequest::unsetversionId()
{
    versionIdIsSet_ = false;
}

UpdateVersionRequestBody UpdateVersionRequest::getBody() const
{
    return body_;
}

void UpdateVersionRequest::setBody(const UpdateVersionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateVersionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateVersionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


