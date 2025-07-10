

#include "huaweicloud/cdn/v2/model/RequestLimitRulesEngine.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




RequestLimitRulesEngine::RequestLimitRulesEngine()
{
    limitRateAfter_ = 0L;
    limitRateAfterIsSet_ = false;
    limitRateValue_ = 0;
    limitRateValueIsSet_ = false;
}

RequestLimitRulesEngine::~RequestLimitRulesEngine() = default;

void RequestLimitRulesEngine::validate()
{
}

web::json::value RequestLimitRulesEngine::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitRateAfterIsSet_) {
        val[utility::conversions::to_string_t("limit_rate_after")] = ModelBase::toJson(limitRateAfter_);
    }
    if(limitRateValueIsSet_) {
        val[utility::conversions::to_string_t("limit_rate_value")] = ModelBase::toJson(limitRateValue_);
    }

    return val;
}
bool RequestLimitRulesEngine::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


int64_t RequestLimitRulesEngine::getLimitRateAfter() const
{
    return limitRateAfter_;
}

void RequestLimitRulesEngine::setLimitRateAfter(int64_t value)
{
    limitRateAfter_ = value;
    limitRateAfterIsSet_ = true;
}

bool RequestLimitRulesEngine::limitRateAfterIsSet() const
{
    return limitRateAfterIsSet_;
}

void RequestLimitRulesEngine::unsetlimitRateAfter()
{
    limitRateAfterIsSet_ = false;
}

int32_t RequestLimitRulesEngine::getLimitRateValue() const
{
    return limitRateValue_;
}

void RequestLimitRulesEngine::setLimitRateValue(int32_t value)
{
    limitRateValue_ = value;
    limitRateValueIsSet_ = true;
}

bool RequestLimitRulesEngine::limitRateValueIsSet() const
{
    return limitRateValueIsSet_;
}

void RequestLimitRulesEngine::unsetlimitRateValue()
{
    limitRateValueIsSet_ = false;
}

}
}
}
}
}


