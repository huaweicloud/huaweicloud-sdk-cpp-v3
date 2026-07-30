

#include "huaweicloud/modelarts/v1/model/ShowInferDeploymentVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowInferDeploymentVersionRequest::ShowInferDeploymentVersionRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    deploymentId_ = "";
    deploymentIdIsSet_ = false;
}

ShowInferDeploymentVersionRequest::~ShowInferDeploymentVersionRequest() = default;

void ShowInferDeploymentVersionRequest::validate()
{
}

web::json::value ShowInferDeploymentVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(deploymentIdIsSet_) {
        val[utility::conversions::to_string_t("deployment_id")] = ModelBase::toJson(deploymentId_);
    }

    return val;
}
bool ShowInferDeploymentVersionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
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
    return ok;
}


std::string ShowInferDeploymentVersionRequest::getServiceId() const
{
    return serviceId_;
}

void ShowInferDeploymentVersionRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ShowInferDeploymentVersionRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ShowInferDeploymentVersionRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ShowInferDeploymentVersionRequest::getVersion() const
{
    return version_;
}

void ShowInferDeploymentVersionRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowInferDeploymentVersionRequest::versionIsSet() const
{
    return versionIsSet_;
}

void ShowInferDeploymentVersionRequest::unsetversion()
{
    versionIsSet_ = false;
}

std::string ShowInferDeploymentVersionRequest::getDeploymentId() const
{
    return deploymentId_;
}

void ShowInferDeploymentVersionRequest::setDeploymentId(const std::string& value)
{
    deploymentId_ = value;
    deploymentIdIsSet_ = true;
}

bool ShowInferDeploymentVersionRequest::deploymentIdIsSet() const
{
    return deploymentIdIsSet_;
}

void ShowInferDeploymentVersionRequest::unsetdeploymentId()
{
    deploymentIdIsSet_ = false;
}

}
}
}
}
}


