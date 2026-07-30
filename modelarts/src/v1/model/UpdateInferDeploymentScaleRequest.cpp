

#include "huaweicloud/modelarts/v1/model/UpdateInferDeploymentScaleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateInferDeploymentScaleRequest::UpdateInferDeploymentScaleRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    deploymentName_ = "";
    deploymentNameIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInferDeploymentScaleRequest::~UpdateInferDeploymentScaleRequest() = default;

void UpdateInferDeploymentScaleRequest::validate()
{
}

web::json::value UpdateInferDeploymentScaleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(deploymentNameIsSet_) {
        val[utility::conversions::to_string_t("deployment_name")] = ModelBase::toJson(deploymentName_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateInferDeploymentScaleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("deployment_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deployment_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeploymentName(refVal);
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
            UpdateInferDeploymentScale refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateInferDeploymentScaleRequest::getServiceId() const
{
    return serviceId_;
}

void UpdateInferDeploymentScaleRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool UpdateInferDeploymentScaleRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void UpdateInferDeploymentScaleRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string UpdateInferDeploymentScaleRequest::getDeploymentName() const
{
    return deploymentName_;
}

void UpdateInferDeploymentScaleRequest::setDeploymentName(const std::string& value)
{
    deploymentName_ = value;
    deploymentNameIsSet_ = true;
}

bool UpdateInferDeploymentScaleRequest::deploymentNameIsSet() const
{
    return deploymentNameIsSet_;
}

void UpdateInferDeploymentScaleRequest::unsetdeploymentName()
{
    deploymentNameIsSet_ = false;
}

std::string UpdateInferDeploymentScaleRequest::getContentType() const
{
    return contentType_;
}

void UpdateInferDeploymentScaleRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateInferDeploymentScaleRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateInferDeploymentScaleRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

UpdateInferDeploymentScale UpdateInferDeploymentScaleRequest::getBody() const
{
    return body_;
}

void UpdateInferDeploymentScaleRequest::setBody(const UpdateInferDeploymentScale& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInferDeploymentScaleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInferDeploymentScaleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


