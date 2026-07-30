

#include "huaweicloud/modelarts/v1/model/ShowInferDeploymentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowInferDeploymentRequest::ShowInferDeploymentRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    deploymentId_ = "";
    deploymentIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowInferDeploymentRequest::~ShowInferDeploymentRequest() = default;

void ShowInferDeploymentRequest::validate()
{
}

web::json::value ShowInferDeploymentRequest::toJson() const
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

    return val;
}
bool ShowInferDeploymentRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowInferDeploymentRequest::getServiceId() const
{
    return serviceId_;
}

void ShowInferDeploymentRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ShowInferDeploymentRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ShowInferDeploymentRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ShowInferDeploymentRequest::getDeploymentId() const
{
    return deploymentId_;
}

void ShowInferDeploymentRequest::setDeploymentId(const std::string& value)
{
    deploymentId_ = value;
    deploymentIdIsSet_ = true;
}

bool ShowInferDeploymentRequest::deploymentIdIsSet() const
{
    return deploymentIdIsSet_;
}

void ShowInferDeploymentRequest::unsetdeploymentId()
{
    deploymentIdIsSet_ = false;
}

std::string ShowInferDeploymentRequest::getContentType() const
{
    return contentType_;
}

void ShowInferDeploymentRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowInferDeploymentRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowInferDeploymentRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


