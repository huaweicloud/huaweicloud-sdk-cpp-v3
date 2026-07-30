

#include "huaweicloud/modelarts/v1/model/BatchUnbindInferApiKeysRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchUnbindInferApiKeysRequest::BatchUnbindInferApiKeysRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

BatchUnbindInferApiKeysRequest::~BatchUnbindInferApiKeysRequest() = default;

void BatchUnbindInferApiKeysRequest::validate()
{
}

web::json::value BatchUnbindInferApiKeysRequest::toJson() const
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
bool BatchUnbindInferApiKeysRequest::fromJson(const web::json::value& val)
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
            BatchUnBindApiKeyRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchUnbindInferApiKeysRequest::getServiceId() const
{
    return serviceId_;
}

void BatchUnbindInferApiKeysRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool BatchUnbindInferApiKeysRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void BatchUnbindInferApiKeysRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string BatchUnbindInferApiKeysRequest::getContentType() const
{
    return contentType_;
}

void BatchUnbindInferApiKeysRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool BatchUnbindInferApiKeysRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void BatchUnbindInferApiKeysRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

BatchUnBindApiKeyRequest BatchUnbindInferApiKeysRequest::getBody() const
{
    return body_;
}

void BatchUnbindInferApiKeysRequest::setBody(const BatchUnBindApiKeyRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUnbindInferApiKeysRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUnbindInferApiKeysRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


