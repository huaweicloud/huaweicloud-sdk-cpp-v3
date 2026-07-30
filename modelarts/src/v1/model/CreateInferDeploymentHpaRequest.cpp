

#include "huaweicloud/modelarts/v1/model/CreateInferDeploymentHpaRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateInferDeploymentHpaRequest::CreateInferDeploymentHpaRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    deploymentId_ = "";
    deploymentIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateInferDeploymentHpaRequest::~CreateInferDeploymentHpaRequest() = default;

void CreateInferDeploymentHpaRequest::validate()
{
}

web::json::value CreateInferDeploymentHpaRequest::toJson() const
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
bool CreateInferDeploymentHpaRequest::fromJson(const web::json::value& val)
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
            CreateHpaRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateInferDeploymentHpaRequest::getServiceId() const
{
    return serviceId_;
}

void CreateInferDeploymentHpaRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool CreateInferDeploymentHpaRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void CreateInferDeploymentHpaRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string CreateInferDeploymentHpaRequest::getDeploymentId() const
{
    return deploymentId_;
}

void CreateInferDeploymentHpaRequest::setDeploymentId(const std::string& value)
{
    deploymentId_ = value;
    deploymentIdIsSet_ = true;
}

bool CreateInferDeploymentHpaRequest::deploymentIdIsSet() const
{
    return deploymentIdIsSet_;
}

void CreateInferDeploymentHpaRequest::unsetdeploymentId()
{
    deploymentIdIsSet_ = false;
}

std::string CreateInferDeploymentHpaRequest::getContentType() const
{
    return contentType_;
}

void CreateInferDeploymentHpaRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateInferDeploymentHpaRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateInferDeploymentHpaRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateHpaRequestBody CreateInferDeploymentHpaRequest::getBody() const
{
    return body_;
}

void CreateInferDeploymentHpaRequest::setBody(const CreateHpaRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInferDeploymentHpaRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInferDeploymentHpaRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


