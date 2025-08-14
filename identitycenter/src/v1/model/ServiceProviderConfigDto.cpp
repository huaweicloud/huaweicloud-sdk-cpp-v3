

#include "huaweicloud/identitycenter/v1/model/ServiceProviderConfigDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ServiceProviderConfigDto::ServiceProviderConfigDto()
{
    audience_ = "";
    audienceIsSet_ = false;
    requireRequestSignature_ = false;
    requireRequestSignatureIsSet_ = false;
    consumersIsSet_ = false;
    startUrl_ = "";
    startUrlIsSet_ = false;
}

ServiceProviderConfigDto::~ServiceProviderConfigDto() = default;

void ServiceProviderConfigDto::validate()
{
}

web::json::value ServiceProviderConfigDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(audienceIsSet_) {
        val[utility::conversions::to_string_t("audience")] = ModelBase::toJson(audience_);
    }
    if(requireRequestSignatureIsSet_) {
        val[utility::conversions::to_string_t("require_request_signature")] = ModelBase::toJson(requireRequestSignature_);
    }
    if(consumersIsSet_) {
        val[utility::conversions::to_string_t("consumers")] = ModelBase::toJson(consumers_);
    }
    if(startUrlIsSet_) {
        val[utility::conversions::to_string_t("start_url")] = ModelBase::toJson(startUrl_);
    }

    return val;
}
bool ServiceProviderConfigDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audience"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audience"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudience(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("require_request_signature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("require_request_signature"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequireRequestSignature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("consumers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consumers"));
        if(!fieldValue.is_null())
        {
            std::vector<ConsumersDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsumers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartUrl(refVal);
        }
    }
    return ok;
}


std::string ServiceProviderConfigDto::getAudience() const
{
    return audience_;
}

void ServiceProviderConfigDto::setAudience(const std::string& value)
{
    audience_ = value;
    audienceIsSet_ = true;
}

bool ServiceProviderConfigDto::audienceIsSet() const
{
    return audienceIsSet_;
}

void ServiceProviderConfigDto::unsetaudience()
{
    audienceIsSet_ = false;
}

bool ServiceProviderConfigDto::isRequireRequestSignature() const
{
    return requireRequestSignature_;
}

void ServiceProviderConfigDto::setRequireRequestSignature(bool value)
{
    requireRequestSignature_ = value;
    requireRequestSignatureIsSet_ = true;
}

bool ServiceProviderConfigDto::requireRequestSignatureIsSet() const
{
    return requireRequestSignatureIsSet_;
}

void ServiceProviderConfigDto::unsetrequireRequestSignature()
{
    requireRequestSignatureIsSet_ = false;
}

std::vector<ConsumersDto>& ServiceProviderConfigDto::getConsumers()
{
    return consumers_;
}

void ServiceProviderConfigDto::setConsumers(const std::vector<ConsumersDto>& value)
{
    consumers_ = value;
    consumersIsSet_ = true;
}

bool ServiceProviderConfigDto::consumersIsSet() const
{
    return consumersIsSet_;
}

void ServiceProviderConfigDto::unsetconsumers()
{
    consumersIsSet_ = false;
}

std::string ServiceProviderConfigDto::getStartUrl() const
{
    return startUrl_;
}

void ServiceProviderConfigDto::setStartUrl(const std::string& value)
{
    startUrl_ = value;
    startUrlIsSet_ = true;
}

bool ServiceProviderConfigDto::startUrlIsSet() const
{
    return startUrlIsSet_;
}

void ServiceProviderConfigDto::unsetstartUrl()
{
    startUrlIsSet_ = false;
}

}
}
}
}
}


