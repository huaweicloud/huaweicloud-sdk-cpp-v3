

#include "huaweicloud/codeartsdeploy/v2/model/CreateEnvironmentRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CreateEnvironmentRequest::CreateEnvironmentRequest()
{
    applicationId_ = "";
    applicationIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateEnvironmentRequest::~CreateEnvironmentRequest() = default;

void CreateEnvironmentRequest::validate()
{
}

web::json::value CreateEnvironmentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateEnvironmentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            EnvironmentRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateEnvironmentRequest::getApplicationId() const
{
    return applicationId_;
}

void CreateEnvironmentRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool CreateEnvironmentRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void CreateEnvironmentRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

EnvironmentRequestBody CreateEnvironmentRequest::getBody() const
{
    return body_;
}

void CreateEnvironmentRequest::setBody(const EnvironmentRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateEnvironmentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateEnvironmentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


