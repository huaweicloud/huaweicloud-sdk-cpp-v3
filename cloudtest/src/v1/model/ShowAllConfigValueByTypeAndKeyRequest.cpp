

#include "huaweicloud/cloudtest/v1/model/ShowAllConfigValueByTypeAndKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowAllConfigValueByTypeAndKeyRequest::ShowAllConfigValueByTypeAndKeyRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ShowAllConfigValueByTypeAndKeyRequest::~ShowAllConfigValueByTypeAndKeyRequest() = default;

void ShowAllConfigValueByTypeAndKeyRequest::validate()
{
}

web::json::value ShowAllConfigValueByTypeAndKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ShowAllConfigValueByTypeAndKeyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ShowAllConfigValueByTypeAndKeyRequest::getServiceId() const
{
    return serviceId_;
}

void ShowAllConfigValueByTypeAndKeyRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ShowAllConfigValueByTypeAndKeyRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ShowAllConfigValueByTypeAndKeyRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ShowAllConfigValueByTypeAndKeyRequest::getKey() const
{
    return key_;
}

void ShowAllConfigValueByTypeAndKeyRequest::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ShowAllConfigValueByTypeAndKeyRequest::keyIsSet() const
{
    return keyIsSet_;
}

void ShowAllConfigValueByTypeAndKeyRequest::unsetkey()
{
    keyIsSet_ = false;
}

std::string ShowAllConfigValueByTypeAndKeyRequest::getType() const
{
    return type_;
}

void ShowAllConfigValueByTypeAndKeyRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowAllConfigValueByTypeAndKeyRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowAllConfigValueByTypeAndKeyRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


