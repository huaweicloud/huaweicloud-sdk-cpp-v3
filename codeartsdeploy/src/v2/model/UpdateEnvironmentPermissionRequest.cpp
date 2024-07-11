

#include "huaweicloud/codeartsdeploy/v2/model/UpdateEnvironmentPermissionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateEnvironmentPermissionRequest::UpdateEnvironmentPermissionRequest()
{
    applicationId_ = "";
    applicationIdIsSet_ = false;
    environmentId_ = "";
    environmentIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateEnvironmentPermissionRequest::~UpdateEnvironmentPermissionRequest() = default;

void UpdateEnvironmentPermissionRequest::validate()
{
}

web::json::value UpdateEnvironmentPermissionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }
    if(environmentIdIsSet_) {
        val[utility::conversions::to_string_t("environment_id")] = ModelBase::toJson(environmentId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateEnvironmentPermissionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("environment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("environment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvironmentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            EnvironmentPermissionV2Body refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateEnvironmentPermissionRequest::getApplicationId() const
{
    return applicationId_;
}

void UpdateEnvironmentPermissionRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool UpdateEnvironmentPermissionRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void UpdateEnvironmentPermissionRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string UpdateEnvironmentPermissionRequest::getEnvironmentId() const
{
    return environmentId_;
}

void UpdateEnvironmentPermissionRequest::setEnvironmentId(const std::string& value)
{
    environmentId_ = value;
    environmentIdIsSet_ = true;
}

bool UpdateEnvironmentPermissionRequest::environmentIdIsSet() const
{
    return environmentIdIsSet_;
}

void UpdateEnvironmentPermissionRequest::unsetenvironmentId()
{
    environmentIdIsSet_ = false;
}

EnvironmentPermissionV2Body UpdateEnvironmentPermissionRequest::getBody() const
{
    return body_;
}

void UpdateEnvironmentPermissionRequest::setBody(const EnvironmentPermissionV2Body& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateEnvironmentPermissionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateEnvironmentPermissionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


