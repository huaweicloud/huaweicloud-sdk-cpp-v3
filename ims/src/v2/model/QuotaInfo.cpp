

#include "huaweicloud/ims/v2/model/QuotaInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




QuotaInfo::QuotaInfo()
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

QuotaInfo::~QuotaInfo() = default;

void QuotaInfo::validate()
{
}

web::json::value QuotaInfo::toJson() const
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

bool QuotaInfo::fromJson(const web::json::value& val)
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

std::string QuotaInfo::getType() const
{
    return type_;
}

void QuotaInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool QuotaInfo::typeIsSet() const
{
    return typeIsSet_;
}

void QuotaInfo::unsettype()
{
    typeIsSet_ = false;
}

int32_t QuotaInfo::getUsed() const
{
    return used_;
}

void QuotaInfo::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool QuotaInfo::usedIsSet() const
{
    return usedIsSet_;
}

void QuotaInfo::unsetused()
{
    usedIsSet_ = false;
}

int32_t QuotaInfo::getQuota() const
{
    return quota_;
}

void QuotaInfo::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool QuotaInfo::quotaIsSet() const
{
    return quotaIsSet_;
}

void QuotaInfo::unsetquota()
{
    quotaIsSet_ = false;
}

int32_t QuotaInfo::getMin() const
{
    return min_;
}

void QuotaInfo::setMin(int32_t value)
{
    min_ = value;
    minIsSet_ = true;
}

bool QuotaInfo::minIsSet() const
{
    return minIsSet_;
}

void QuotaInfo::unsetmin()
{
    minIsSet_ = false;
}

int32_t QuotaInfo::getMax() const
{
    return max_;
}

void QuotaInfo::setMax(int32_t value)
{
    max_ = value;
    maxIsSet_ = true;
}

bool QuotaInfo::maxIsSet() const
{
    return maxIsSet_;
}

void QuotaInfo::unsetmax()
{
    maxIsSet_ = false;
}

}
}
}
}
}


