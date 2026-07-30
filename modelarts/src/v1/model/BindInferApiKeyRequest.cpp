

#include "huaweicloud/modelarts/v1/model/BindInferApiKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BindInferApiKeyRequest::BindInferApiKeyRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    keyId_ = "";
    keyIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

BindInferApiKeyRequest::~BindInferApiKeyRequest() = default;

void BindInferApiKeyRequest::validate()
{
}

web::json::value BindInferApiKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool BindInferApiKeyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
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


std::string BindInferApiKeyRequest::getServiceId() const
{
    return serviceId_;
}

void BindInferApiKeyRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool BindInferApiKeyRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void BindInferApiKeyRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string BindInferApiKeyRequest::getKeyId() const
{
    return keyId_;
}

void BindInferApiKeyRequest::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool BindInferApiKeyRequest::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void BindInferApiKeyRequest::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string BindInferApiKeyRequest::getContentType() const
{
    return contentType_;
}

void BindInferApiKeyRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool BindInferApiKeyRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void BindInferApiKeyRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


