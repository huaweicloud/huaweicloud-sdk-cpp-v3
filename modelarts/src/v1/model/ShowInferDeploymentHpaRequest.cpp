

#include "huaweicloud/modelarts/v1/model/ShowInferDeploymentHpaRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowInferDeploymentHpaRequest::ShowInferDeploymentHpaRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    deploymentId_ = "";
    deploymentIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowInferDeploymentHpaRequest::~ShowInferDeploymentHpaRequest() = default;

void ShowInferDeploymentHpaRequest::validate()
{
}

web::json::value ShowInferDeploymentHpaRequest::toJson() const
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
bool ShowInferDeploymentHpaRequest::fromJson(const web::json::value& val)
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


std::string ShowInferDeploymentHpaRequest::getServiceId() const
{
    return serviceId_;
}

void ShowInferDeploymentHpaRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ShowInferDeploymentHpaRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ShowInferDeploymentHpaRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ShowInferDeploymentHpaRequest::getDeploymentId() const
{
    return deploymentId_;
}

void ShowInferDeploymentHpaRequest::setDeploymentId(const std::string& value)
{
    deploymentId_ = value;
    deploymentIdIsSet_ = true;
}

bool ShowInferDeploymentHpaRequest::deploymentIdIsSet() const
{
    return deploymentIdIsSet_;
}

void ShowInferDeploymentHpaRequest::unsetdeploymentId()
{
    deploymentIdIsSet_ = false;
}

std::string ShowInferDeploymentHpaRequest::getContentType() const
{
    return contentType_;
}

void ShowInferDeploymentHpaRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowInferDeploymentHpaRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowInferDeploymentHpaRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


