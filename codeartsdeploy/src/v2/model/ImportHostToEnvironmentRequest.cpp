

#include "huaweicloud/codeartsdeploy/v2/model/ImportHostToEnvironmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ImportHostToEnvironmentRequest::ImportHostToEnvironmentRequest()
{
    applicationId_ = "";
    applicationIdIsSet_ = false;
    environmentId_ = "";
    environmentIdIsSet_ = false;
    bodyIsSet_ = false;
}

ImportHostToEnvironmentRequest::~ImportHostToEnvironmentRequest() = default;

void ImportHostToEnvironmentRequest::validate()
{
}

web::json::value ImportHostToEnvironmentRequest::toJson() const
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
bool ImportHostToEnvironmentRequest::fromJson(const web::json::value& val)
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
            ImportHostToEnvironmentRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ImportHostToEnvironmentRequest::getApplicationId() const
{
    return applicationId_;
}

void ImportHostToEnvironmentRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool ImportHostToEnvironmentRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void ImportHostToEnvironmentRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string ImportHostToEnvironmentRequest::getEnvironmentId() const
{
    return environmentId_;
}

void ImportHostToEnvironmentRequest::setEnvironmentId(const std::string& value)
{
    environmentId_ = value;
    environmentIdIsSet_ = true;
}

bool ImportHostToEnvironmentRequest::environmentIdIsSet() const
{
    return environmentIdIsSet_;
}

void ImportHostToEnvironmentRequest::unsetenvironmentId()
{
    environmentIdIsSet_ = false;
}

ImportHostToEnvironmentRequestBody ImportHostToEnvironmentRequest::getBody() const
{
    return body_;
}

void ImportHostToEnvironmentRequest::setBody(const ImportHostToEnvironmentRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ImportHostToEnvironmentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ImportHostToEnvironmentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


