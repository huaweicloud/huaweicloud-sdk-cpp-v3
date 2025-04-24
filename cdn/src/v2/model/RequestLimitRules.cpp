

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
    priority_ = 0;
    priorityIsSet_ = false;
    matchType_ = "";
    matchTypeIsSet_ = false;
    matchValue_ = "";
    matchValueIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    limitRateAfter_ = 0L;
    limitRateAfterIsSet_ = false;
    limitRateValue_ = 0;
    limitRateValueIsSet_ = false;
    limitTime_ = "";
    limitTimeIsSet_ = false;
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
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(matchTypeIsSet_) {
        val[utility::conversions::to_string_t("match_type")] = ModelBase::toJson(matchType_);
    }
    if(matchValueIsSet_) {
        val[utility::conversions::to_string_t("match_value")] = ModelBase::toJson(matchValue_);
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
    if(limitTimeIsSet_) {
        val[utility::conversions::to_string_t("limit_time")] = ModelBase::toJson(limitTime_);
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
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("match_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("match_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatchType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("match_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("match_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatchValue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitTime(refVal);
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

int32_t RequestLimitRules::getPriority() const
{
    return priority_;
}

void RequestLimitRules::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool RequestLimitRules::priorityIsSet() const
{
    return priorityIsSet_;
}

void RequestLimitRules::unsetpriority()
{
    priorityIsSet_ = false;
}

std::string RequestLimitRules::getMatchType() const
{
    return matchType_;
}

void RequestLimitRules::setMatchType(const std::string& value)
{
    matchType_ = value;
    matchTypeIsSet_ = true;
}

bool RequestLimitRules::matchTypeIsSet() const
{
    return matchTypeIsSet_;
}

void RequestLimitRules::unsetmatchType()
{
    matchTypeIsSet_ = false;
}

std::string RequestLimitRules::getMatchValue() const
{
    return matchValue_;
}

void RequestLimitRules::setMatchValue(const std::string& value)
{
    matchValue_ = value;
    matchValueIsSet_ = true;
}

bool RequestLimitRules::matchValueIsSet() const
{
    return matchValueIsSet_;
}

void RequestLimitRules::unsetmatchValue()
{
    matchValueIsSet_ = false;
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

std::string RequestLimitRules::getLimitTime() const
{
    return limitTime_;
}

void RequestLimitRules::setLimitTime(const std::string& value)
{
    limitTime_ = value;
    limitTimeIsSet_ = true;
}

bool RequestLimitRules::limitTimeIsSet() const
{
    return limitTimeIsSet_;
}

void RequestLimitRules::unsetlimitTime()
{
    limitTimeIsSet_ = false;
}

}
}
}
}
}


