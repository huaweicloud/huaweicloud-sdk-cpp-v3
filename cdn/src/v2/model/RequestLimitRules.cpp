

#include "huaweicloud/cdn/v2/model/RequestLimitRules.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




RequestLimitRules::RequestLimitRules()
{
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    limitRateAfter_ = 0L;
    limitRateAfterIsSet_ = false;
    limitRateValue_ = 0;
    limitRateValueIsSet_ = false;
}

RequestLimitRules::~RequestLimitRules() = default;

void RequestLimitRules::validate()
{
}

web::json::value RequestLimitRules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(limitRateAfterIsSet_) {
        val[utility::conversions::to_string_t("limit_rate_after")] = ModelBase::toJson(limitRateAfter_);
    }
    if(limitRateValueIsSet_) {
        val[utility::conversions::to_string_t("limit_rate_value")] = ModelBase::toJson(limitRateValue_);
    }

    return val;
}

bool RequestLimitRules::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit_rate_after"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_rate_after"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitRateAfter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit_rate_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_rate_value"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitRateValue(refVal);
        }
    }
    return ok;
}

std::string RequestLimitRules::getStatus() const
{
    return status_;
}

void RequestLimitRules::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RequestLimitRules::statusIsSet() const
{
    return statusIsSet_;
}

void RequestLimitRules::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RequestLimitRules::getType() const
{
    return type_;
}

void RequestLimitRules::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RequestLimitRules::typeIsSet() const
{
    return typeIsSet_;
}

void RequestLimitRules::unsettype()
{
    typeIsSet_ = false;
}

int64_t RequestLimitRules::getLimitRateAfter() const
{
    return limitRateAfter_;
}

void RequestLimitRules::setLimitRateAfter(int64_t value)
{
    limitRateAfter_ = value;
    limitRateAfterIsSet_ = true;
}

bool RequestLimitRules::limitRateAfterIsSet() const
{
    return limitRateAfterIsSet_;
}

void RequestLimitRules::unsetlimitRateAfter()
{
    limitRateAfterIsSet_ = false;
}

int32_t RequestLimitRules::getLimitRateValue() const
{
    return limitRateValue_;
}

void RequestLimitRules::setLimitRateValue(int32_t value)
{
    limitRateValue_ = value;
    limitRateValueIsSet_ = true;
}

bool RequestLimitRules::limitRateValueIsSet() const
{
    return limitRateValueIsSet_;
}

void RequestLimitRules::unsetlimitRateValue()
{
    limitRateValueIsSet_ = false;
}

}
}
}
}
}


