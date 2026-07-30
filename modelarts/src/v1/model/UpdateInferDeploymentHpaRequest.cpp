

#include "huaweicloud/modelarts/v1/model/UpdateInferDeploymentHpaRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateInferDeploymentHpaRequest::UpdateInferDeploymentHpaRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    deploymentId_ = "";
    deploymentIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInferDeploymentHpaRequest::~UpdateInferDeploymentHpaRequest() = default;

void UpdateInferDeploymentHpaRequest::validate()
{
}

web::json::value UpdateInferDeploymentHpaRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(deploymentIdIsSet_) {
        val[utility::conversions::to_string_t("deployment_id")] = ModelBase::toJson(deploymentId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateInferDeploymentHpaRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deployment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deployment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeploymentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateHpaRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateInferDeploymentHpaRequest::getServiceId() const
{
    return serviceId_;
}

void UpdateInferDeploymentHpaRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool UpdateInferDeploymentHpaRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void UpdateInferDeploymentHpaRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string UpdateInferDeploymentHpaRequest::getDeploymentId() const
{
    return deploymentId_;
}

void UpdateInferDeploymentHpaRequest::setDeploymentId(const std::string& value)
{
    deploymentId_ = value;
    deploymentIdIsSet_ = true;
}

bool UpdateInferDeploymentHpaRequest::deploymentIdIsSet() const
{
    return deploymentIdIsSet_;
}

void UpdateInferDeploymentHpaRequest::unsetdeploymentId()
{
    deploymentIdIsSet_ = false;
}

std::string UpdateInferDeploymentHpaRequest::getContentType() const
{
    return contentType_;
}

void UpdateInferDeploymentHpaRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateInferDeploymentHpaRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateInferDeploymentHpaRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

UpdateHpaRequestBody UpdateInferDeploymentHpaRequest::getBody() const
{
    return body_;
}

void UpdateInferDeploymentHpaRequest::setBody(const UpdateHpaRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInferDeploymentHpaRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInferDeploymentHpaRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


