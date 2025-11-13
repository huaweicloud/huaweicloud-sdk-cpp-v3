

#include "huaweicloud/gaussdb/v3/model/SqlFilterRulePattern.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SqlFilterRulePattern::SqlFilterRulePattern()
{
    pattern_ = "";
    patternIsSet_ = false;
    maxConcurrency_ = 0;
    maxConcurrencyIsSet_ = false;
    curConcurrency_ = 0;
    curConcurrencyIsSet_ = false;
    curReject_ = 0;
    curRejectIsSet_ = false;
    createAt_ = 0L;
    createAtIsSet_ = false;
    expireAt_ = 0L;
    expireAtIsSet_ = false;
}

SqlFilterRulePattern::~SqlFilterRulePattern() = default;

void SqlFilterRulePattern::validate()
{
}

web::json::value SqlFilterRulePattern::toJson() const
{
    web::json::value val = web::json::value::object();

    if(patternIsSet_) {
        val[utility::conversions::to_string_t("pattern")] = ModelBase::toJson(pattern_);
    }
    if(maxConcurrencyIsSet_) {
        val[utility::conversions::to_string_t("max_concurrency")] = ModelBase::toJson(maxConcurrency_);
    }
    if(curConcurrencyIsSet_) {
        val[utility::conversions::to_string_t("cur_concurrency")] = ModelBase::toJson(curConcurrency_);
    }
    if(curRejectIsSet_) {
        val[utility::conversions::to_string_t("cur_reject")] = ModelBase::toJson(curReject_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(expireAtIsSet_) {
        val[utility::conversions::to_string_t("expire_at")] = ModelBase::toJson(expireAt_);
    }

    return val;
}
bool SqlFilterRulePattern::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pattern"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pattern"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPattern(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_concurrency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_concurrency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxConcurrency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cur_concurrency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cur_concurrency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurConcurrency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cur_reject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cur_reject"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurReject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireAt(refVal);
        }
    }
    return ok;
}


std::string SqlFilterRulePattern::getPattern() const
{
    return pattern_;
}

void SqlFilterRulePattern::setPattern(const std::string& value)
{
    pattern_ = value;
    patternIsSet_ = true;
}

bool SqlFilterRulePattern::patternIsSet() const
{
    return patternIsSet_;
}

void SqlFilterRulePattern::unsetpattern()
{
    patternIsSet_ = false;
}

int32_t SqlFilterRulePattern::getMaxConcurrency() const
{
    return maxConcurrency_;
}

void SqlFilterRulePattern::setMaxConcurrency(int32_t value)
{
    maxConcurrency_ = value;
    maxConcurrencyIsSet_ = true;
}

bool SqlFilterRulePattern::maxConcurrencyIsSet() const
{
    return maxConcurrencyIsSet_;
}

void SqlFilterRulePattern::unsetmaxConcurrency()
{
    maxConcurrencyIsSet_ = false;
}

int32_t SqlFilterRulePattern::getCurConcurrency() const
{
    return curConcurrency_;
}

void SqlFilterRulePattern::setCurConcurrency(int32_t value)
{
    curConcurrency_ = value;
    curConcurrencyIsSet_ = true;
}

bool SqlFilterRulePattern::curConcurrencyIsSet() const
{
    return curConcurrencyIsSet_;
}

void SqlFilterRulePattern::unsetcurConcurrency()
{
    curConcurrencyIsSet_ = false;
}

int32_t SqlFilterRulePattern::getCurReject() const
{
    return curReject_;
}

void SqlFilterRulePattern::setCurReject(int32_t value)
{
    curReject_ = value;
    curRejectIsSet_ = true;
}

bool SqlFilterRulePattern::curRejectIsSet() const
{
    return curRejectIsSet_;
}

void SqlFilterRulePattern::unsetcurReject()
{
    curRejectIsSet_ = false;
}

int64_t SqlFilterRulePattern::getCreateAt() const
{
    return createAt_;
}

void SqlFilterRulePattern::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool SqlFilterRulePattern::createAtIsSet() const
{
    return createAtIsSet_;
}

void SqlFilterRulePattern::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t SqlFilterRulePattern::getExpireAt() const
{
    return expireAt_;
}

void SqlFilterRulePattern::setExpireAt(int64_t value)
{
    expireAt_ = value;
    expireAtIsSet_ = true;
}

bool SqlFilterRulePattern::expireAtIsSet() const
{
    return expireAtIsSet_;
}

void SqlFilterRulePattern::unsetexpireAt()
{
    expireAtIsSet_ = false;
}

}
}
}
}
}


