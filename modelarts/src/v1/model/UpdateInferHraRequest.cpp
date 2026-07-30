

#include "huaweicloud/modelarts/v1/model/UpdateInferHraRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateInferHraRequest::UpdateInferHraRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    deploymentId_ = "";
    deploymentIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInferHraRequest::~UpdateInferHraRequest() = default;

void UpdateInferHraRequest::validate()
{
}

web::json::value UpdateInferHraRequest::toJson() const
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
bool UpdateInferHraRequest::fromJson(const web::json::value& val)
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
            UpdateHraRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateInferHraRequest::getServiceId() const
{
    return serviceId_;
}

void UpdateInferHraRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool UpdateInferHraRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void UpdateInferHraRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string UpdateInferHraRequest::getDeploymentId() const
{
    return deploymentId_;
}

void UpdateInferHraRequest::setDeploymentId(const std::string& value)
{
    deploymentId_ = value;
    deploymentIdIsSet_ = true;
}

bool UpdateInferHraRequest::deploymentIdIsSet() const
{
    return deploymentIdIsSet_;
}

void UpdateInferHraRequest::unsetdeploymentId()
{
    deploymentIdIsSet_ = false;
}

std::string UpdateInferHraRequest::getContentType() const
{
    return contentType_;
}

void UpdateInferHraRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateInferHraRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateInferHraRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

UpdateHraRequestBody UpdateInferHraRequest::getBody() const
{
    return body_;
}

void UpdateInferHraRequest::setBody(const UpdateHraRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInferHraRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInferHraRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


