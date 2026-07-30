

#include "huaweicloud/modelarts/v1/model/UpdateInferDeploymentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateInferDeploymentRequest::UpdateInferDeploymentRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    deploymentId_ = "";
    deploymentIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInferDeploymentRequest::~UpdateInferDeploymentRequest() = default;

void UpdateInferDeploymentRequest::validate()
{
}

web::json::value UpdateInferDeploymentRequest::toJson() const
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
bool UpdateInferDeploymentRequest::fromJson(const web::json::value& val)
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
            GroupConfigUpdateRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateInferDeploymentRequest::getServiceId() const
{
    return serviceId_;
}

void UpdateInferDeploymentRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool UpdateInferDeploymentRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void UpdateInferDeploymentRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string UpdateInferDeploymentRequest::getDeploymentId() const
{
    return deploymentId_;
}

void UpdateInferDeploymentRequest::setDeploymentId(const std::string& value)
{
    deploymentId_ = value;
    deploymentIdIsSet_ = true;
}

bool UpdateInferDeploymentRequest::deploymentIdIsSet() const
{
    return deploymentIdIsSet_;
}

void UpdateInferDeploymentRequest::unsetdeploymentId()
{
    deploymentIdIsSet_ = false;
}

std::string UpdateInferDeploymentRequest::getContentType() const
{
    return contentType_;
}

void UpdateInferDeploymentRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateInferDeploymentRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateInferDeploymentRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

GroupConfigUpdateRequest UpdateInferDeploymentRequest::getBody() const
{
    return body_;
}

void UpdateInferDeploymentRequest::setBody(const GroupConfigUpdateRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInferDeploymentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInferDeploymentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


