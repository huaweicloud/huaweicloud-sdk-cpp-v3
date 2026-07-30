

#include "huaweicloud/modelarts/v1/model/CreateInferDeploymentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateInferDeploymentRequest::CreateInferDeploymentRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateInferDeploymentRequest::~CreateInferDeploymentRequest() = default;

void CreateInferDeploymentRequest::validate()
{
}

web::json::value CreateInferDeploymentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateInferDeploymentRequest::fromJson(const web::json::value& val)
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
            GroupConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateInferDeploymentRequest::getServiceId() const
{
    return serviceId_;
}

void CreateInferDeploymentRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool CreateInferDeploymentRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void CreateInferDeploymentRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string CreateInferDeploymentRequest::getContentType() const
{
    return contentType_;
}

void CreateInferDeploymentRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateInferDeploymentRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateInferDeploymentRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

GroupConfig CreateInferDeploymentRequest::getBody() const
{
    return body_;
}

void CreateInferDeploymentRequest::setBody(const GroupConfig& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInferDeploymentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInferDeploymentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


