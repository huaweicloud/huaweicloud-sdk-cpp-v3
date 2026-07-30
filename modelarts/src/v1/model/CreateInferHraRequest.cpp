

#include "huaweicloud/modelarts/v1/model/CreateInferHraRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateInferHraRequest::CreateInferHraRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    deploymentId_ = "";
    deploymentIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateInferHraRequest::~CreateInferHraRequest() = default;

void CreateInferHraRequest::validate()
{
}

web::json::value CreateInferHraRequest::toJson() const
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
bool CreateInferHraRequest::fromJson(const web::json::value& val)
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
            CreateHraRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateInferHraRequest::getServiceId() const
{
    return serviceId_;
}

void CreateInferHraRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool CreateInferHraRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void CreateInferHraRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string CreateInferHraRequest::getDeploymentId() const
{
    return deploymentId_;
}

void CreateInferHraRequest::setDeploymentId(const std::string& value)
{
    deploymentId_ = value;
    deploymentIdIsSet_ = true;
}

bool CreateInferHraRequest::deploymentIdIsSet() const
{
    return deploymentIdIsSet_;
}

void CreateInferHraRequest::unsetdeploymentId()
{
    deploymentIdIsSet_ = false;
}

std::string CreateInferHraRequest::getContentType() const
{
    return contentType_;
}

void CreateInferHraRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateInferHraRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateInferHraRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateHraRequestBody CreateInferHraRequest::getBody() const
{
    return body_;
}

void CreateInferHraRequest::setBody(const CreateHraRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInferHraRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInferHraRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


