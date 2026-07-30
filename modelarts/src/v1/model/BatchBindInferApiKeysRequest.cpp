

#include "huaweicloud/modelarts/v1/model/BatchBindInferApiKeysRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchBindInferApiKeysRequest::BatchBindInferApiKeysRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

BatchBindInferApiKeysRequest::~BatchBindInferApiKeysRequest() = default;

void BatchBindInferApiKeysRequest::validate()
{
}

web::json::value BatchBindInferApiKeysRequest::toJson() const
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
bool BatchBindInferApiKeysRequest::fromJson(const web::json::value& val)
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
            BatchBindApiKeyRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchBindInferApiKeysRequest::getServiceId() const
{
    return serviceId_;
}

void BatchBindInferApiKeysRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool BatchBindInferApiKeysRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void BatchBindInferApiKeysRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string BatchBindInferApiKeysRequest::getContentType() const
{
    return contentType_;
}

void BatchBindInferApiKeysRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool BatchBindInferApiKeysRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void BatchBindInferApiKeysRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

BatchBindApiKeyRequest BatchBindInferApiKeysRequest::getBody() const
{
    return body_;
}

void BatchBindInferApiKeysRequest::setBody(const BatchBindApiKeyRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchBindInferApiKeysRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchBindInferApiKeysRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


