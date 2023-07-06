

#include "huaweicloud/sdrs/v1/model/QuotaResourceParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




QuotaResourceParams::QuotaResourceParams()
{
    type_ = "";
    typeIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
    quota_ = 0;
    quotaIsSet_ = false;
    min_ = 0;
    minIsSet_ = false;
    max_ = 0;
    maxIsSet_ = false;
}

QuotaResourceParams::~QuotaResourceParams() = default;

void QuotaResourceParams::validate()
{
}

web::json::value QuotaResourceParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }
    if(minIsSet_) {
        val[utility::conversions::to_string_t("min")] = ModelBase::toJson(min_);
    }
    if(maxIsSet_) {
        val[utility::conversions::to_string_t("max")] = ModelBase::toJson(max_);
    }

    return val;
}

bool QuotaResourceParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMax(refVal);
        }
    }
    return ok;
}

std::string QuotaResourceParams::getType() const
{
    return type_;
}

void QuotaResourceParams::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool QuotaResourceParams::typeIsSet() const
{
    return typeIsSet_;
}

void QuotaResourceParams::unsettype()
{
    typeIsSet_ = false;
}

int32_t QuotaResourceParams::getUsed() const
{
    return used_;
}

void QuotaResourceParams::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool QuotaResourceParams::usedIsSet() const
{
    return usedIsSet_;
}

void QuotaResourceParams::unsetused()
{
    usedIsSet_ = false;
}

int32_t QuotaResourceParams::getQuota() const
{
    return quota_;
}

void QuotaResourceParams::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool QuotaResourceParams::quotaIsSet() const
{
    return quotaIsSet_;
}

void QuotaResourceParams::unsetquota()
{
    quotaIsSet_ = false;
}

int32_t QuotaResourceParams::getMin() const
{
    return min_;
}

void QuotaResourceParams::setMin(int32_t value)
{
    min_ = value;
    minIsSet_ = true;
}

bool QuotaResourceParams::minIsSet() const
{
    return minIsSet_;
}

void QuotaResourceParams::unsetmin()
{
    minIsSet_ = false;
}

int32_t QuotaResourceParams::getMax() const
{
    return max_;
}

void QuotaResourceParams::setMax(int32_t value)
{
    max_ = value;
    maxIsSet_ = true;
}

bool QuotaResourceParams::maxIsSet() const
{
    return maxIsSet_;
}

void QuotaResourceParams::unsetmax()
{
    maxIsSet_ = false;
}

}
}
}
}
}


