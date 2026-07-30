

#include "huaweicloud/modelarts/v1/model/SwitchInferDeploymentVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SwitchInferDeploymentVersionRequest::SwitchInferDeploymentVersionRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    deploymentId_ = "";
    deploymentIdIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchInferDeploymentVersionRequest::~SwitchInferDeploymentVersionRequest() = default;

void SwitchInferDeploymentVersionRequest::validate()
{
}

web::json::value SwitchInferDeploymentVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(deploymentIdIsSet_) {
        val[utility::conversions::to_string_t("deployment_id")] = ModelBase::toJson(deploymentId_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SwitchInferDeploymentVersionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SwitchInferDeploymentVersionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchInferDeploymentVersionRequest::getServiceId() const
{
    return serviceId_;
}

void SwitchInferDeploymentVersionRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool SwitchInferDeploymentVersionRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void SwitchInferDeploymentVersionRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string SwitchInferDeploymentVersionRequest::getDeploymentId() const
{
    return deploymentId_;
}

void SwitchInferDeploymentVersionRequest::setDeploymentId(const std::string& value)
{
    deploymentId_ = value;
    deploymentIdIsSet_ = true;
}

bool SwitchInferDeploymentVersionRequest::deploymentIdIsSet() const
{
    return deploymentIdIsSet_;
}

void SwitchInferDeploymentVersionRequest::unsetdeploymentId()
{
    deploymentIdIsSet_ = false;
}

std::string SwitchInferDeploymentVersionRequest::getVersion() const
{
    return version_;
}

void SwitchInferDeploymentVersionRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool SwitchInferDeploymentVersionRequest::versionIsSet() const
{
    return versionIsSet_;
}

void SwitchInferDeploymentVersionRequest::unsetversion()
{
    versionIsSet_ = false;
}

SwitchInferDeploymentVersionRequestBody SwitchInferDeploymentVersionRequest::getBody() const
{
    return body_;
}

void SwitchInferDeploymentVersionRequest::setBody(const SwitchInferDeploymentVersionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchInferDeploymentVersionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchInferDeploymentVersionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


