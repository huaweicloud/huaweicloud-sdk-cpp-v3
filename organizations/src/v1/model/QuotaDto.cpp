

#include "huaweicloud/organizations/v1/model/QuotaDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




QuotaDto::QuotaDto()
{
    type_ = "";
    typeIsSet_ = false;
    quota_ = 0;
    quotaIsSet_ = false;
    min_ = 0;
    minIsSet_ = false;
    max_ = 0;
    maxIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
}

QuotaDto::~QuotaDto() = default;

void QuotaDto::validate()
{
}

web::json::value QuotaDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
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
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }

    return val;
}
bool QuotaDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    return ok;
}


std::string QuotaDto::getType() const
{
    return type_;
}

void QuotaDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool QuotaDto::typeIsSet() const
{
    return typeIsSet_;
}

void QuotaDto::unsettype()
{
    typeIsSet_ = false;
}

int32_t QuotaDto::getQuota() const
{
    return quota_;
}

void QuotaDto::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool QuotaDto::quotaIsSet() const
{
    return quotaIsSet_;
}

void QuotaDto::unsetquota()
{
    quotaIsSet_ = false;
}

int32_t QuotaDto::getMin() const
{
    return min_;
}

void QuotaDto::setMin(int32_t value)
{
    min_ = value;
    minIsSet_ = true;
}

bool QuotaDto::minIsSet() const
{
    return minIsSet_;
}

void QuotaDto::unsetmin()
{
    minIsSet_ = false;
}

int32_t QuotaDto::getMax() const
{
    return max_;
}

void QuotaDto::setMax(int32_t value)
{
    max_ = value;
    maxIsSet_ = true;
}

bool QuotaDto::maxIsSet() const
{
    return maxIsSet_;
}

void QuotaDto::unsetmax()
{
    maxIsSet_ = false;
}

int32_t QuotaDto::getUsed() const
{
    return used_;
}

void QuotaDto::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool QuotaDto::usedIsSet() const
{
    return usedIsSet_;
}

void QuotaDto::unsetused()
{
    usedIsSet_ = false;
}

}
}
}
}
}


