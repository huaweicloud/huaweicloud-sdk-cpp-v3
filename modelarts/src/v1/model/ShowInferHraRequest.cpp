

#include "huaweicloud/modelarts/v1/model/ShowInferHraRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowInferHraRequest::ShowInferHraRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    deploymentId_ = "";
    deploymentIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowInferHraRequest::~ShowInferHraRequest() = default;

void ShowInferHraRequest::validate()
{
}

web::json::value ShowInferHraRequest::toJson() const
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
bool ShowInferHraRequest::fromJson(const web::json::value& val)
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


std::string ShowInferHraRequest::getServiceId() const
{
    return serviceId_;
}

void ShowInferHraRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ShowInferHraRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ShowInferHraRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ShowInferHraRequest::getDeploymentId() const
{
    return deploymentId_;
}

void ShowInferHraRequest::setDeploymentId(const std::string& value)
{
    deploymentId_ = value;
    deploymentIdIsSet_ = true;
}

bool ShowInferHraRequest::deploymentIdIsSet() const
{
    return deploymentIdIsSet_;
}

void ShowInferHraRequest::unsetdeploymentId()
{
    deploymentIdIsSet_ = false;
}

std::string ShowInferHraRequest::getContentType() const
{
    return contentType_;
}

void ShowInferHraRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowInferHraRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowInferHraRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


