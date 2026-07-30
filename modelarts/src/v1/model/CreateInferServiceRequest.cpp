

#include "huaweicloud/modelarts/v1/model/CreateInferServiceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateInferServiceRequest::CreateInferServiceRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    xAuthTokenProvider_ = "";
    xAuthTokenProviderIsSet_ = false;
    bodyIsSet_ = false;
}

CreateInferServiceRequest::~CreateInferServiceRequest() = default;

void CreateInferServiceRequest::validate()
{
}

web::json::value CreateInferServiceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(xAuthTokenProviderIsSet_) {
        val[utility::conversions::to_string_t("X-Auth-Token-Provider")] = ModelBase::toJson(xAuthTokenProvider_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateInferServiceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Auth-Token-Provider"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Auth-Token-Provider"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAuthTokenProvider(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ServiceCreateRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateInferServiceRequest::getContentType() const
{
    return contentType_;
}

void CreateInferServiceRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateInferServiceRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateInferServiceRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string CreateInferServiceRequest::getXAuthTokenProvider() const
{
    return xAuthTokenProvider_;
}

void CreateInferServiceRequest::setXAuthTokenProvider(const std::string& value)
{
    xAuthTokenProvider_ = value;
    xAuthTokenProviderIsSet_ = true;
}

bool CreateInferServiceRequest::xAuthTokenProviderIsSet() const
{
    return xAuthTokenProviderIsSet_;
}

void CreateInferServiceRequest::unsetxAuthTokenProvider()
{
    xAuthTokenProviderIsSet_ = false;
}

ServiceCreateRequest CreateInferServiceRequest::getBody() const
{
    return body_;
}

void CreateInferServiceRequest::setBody(const ServiceCreateRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateInferServiceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateInferServiceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


