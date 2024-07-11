

#include "huaweicloud/codeartsdeploy/v2/model/UpdateEnvironmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateEnvironmentRequest::UpdateEnvironmentRequest()
{
    applicationId_ = "";
    applicationIdIsSet_ = false;
    environmentId_ = "";
    environmentIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateEnvironmentRequest::~UpdateEnvironmentRequest() = default;

void UpdateEnvironmentRequest::validate()
{
}

web::json::value UpdateEnvironmentRequest::toJson() const
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
bool UpdateEnvironmentRequest::fromJson(const web::json::value& val)
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
            EnvironmentRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateEnvironmentRequest::getApplicationId() const
{
    return applicationId_;
}

void UpdateEnvironmentRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool UpdateEnvironmentRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void UpdateEnvironmentRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string UpdateEnvironmentRequest::getEnvironmentId() const
{
    return environmentId_;
}

void UpdateEnvironmentRequest::setEnvironmentId(const std::string& value)
{
    environmentId_ = value;
    environmentIdIsSet_ = true;
}

bool UpdateEnvironmentRequest::environmentIdIsSet() const
{
    return environmentIdIsSet_;
}

void UpdateEnvironmentRequest::unsetenvironmentId()
{
    environmentIdIsSet_ = false;
}

EnvironmentRequest UpdateEnvironmentRequest::getBody() const
{
    return body_;
}

void UpdateEnvironmentRequest::setBody(const EnvironmentRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateEnvironmentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateEnvironmentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


