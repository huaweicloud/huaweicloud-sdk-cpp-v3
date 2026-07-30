

#include "huaweicloud/modelarts/v1/model/UnbindInferApiKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UnbindInferApiKeyRequest::UnbindInferApiKeyRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    keyId_ = "";
    keyIdIsSet_ = false;
}

UnbindInferApiKeyRequest::~UnbindInferApiKeyRequest() = default;

void UnbindInferApiKeyRequest::validate()
{
}

web::json::value UnbindInferApiKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }

    return val;
}
bool UnbindInferApiKeyRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string UnbindInferApiKeyRequest::getServiceId() const
{
    return serviceId_;
}

void UnbindInferApiKeyRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool UnbindInferApiKeyRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void UnbindInferApiKeyRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string UnbindInferApiKeyRequest::getKeyId() const
{
    return keyId_;
}

void UnbindInferApiKeyRequest::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool UnbindInferApiKeyRequest::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void UnbindInferApiKeyRequest::unsetkeyId()
{
    keyIdIsSet_ = false;
}

}
}
}
}
}


