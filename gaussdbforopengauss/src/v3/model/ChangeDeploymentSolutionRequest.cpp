

#include "huaweicloud/gaussdbforopengauss/v3/model/ChangeDeploymentSolutionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ChangeDeploymentSolutionRequest::ChangeDeploymentSolutionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeDeploymentSolutionRequest::~ChangeDeploymentSolutionRequest() = default;

void ChangeDeploymentSolutionRequest::validate()
{
}

web::json::value ChangeDeploymentSolutionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ChangeDeploymentSolutionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ChangeDeploymentSolutionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeDeploymentSolutionRequest::getXLanguage() const
{
    return xLanguage_;
}

void ChangeDeploymentSolutionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ChangeDeploymentSolutionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ChangeDeploymentSolutionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ChangeDeploymentSolutionRequest::getInstanceId() const
{
    return instanceId_;
}

void ChangeDeploymentSolutionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ChangeDeploymentSolutionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ChangeDeploymentSolutionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ChangeDeploymentSolutionRequestBody ChangeDeploymentSolutionRequest::getBody() const
{
    return body_;
}

void ChangeDeploymentSolutionRequest::setBody(const ChangeDeploymentSolutionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeDeploymentSolutionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeDeploymentSolutionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


