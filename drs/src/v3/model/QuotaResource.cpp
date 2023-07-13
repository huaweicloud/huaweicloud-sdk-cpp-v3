

#include "huaweicloud/drs/v3/model/QuotaResource.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QuotaResource::QuotaResource()
{
    type_ = "";
    typeIsSet_ = false;
    min_ = 0;
    minIsSet_ = false;
    max_ = 0;
    maxIsSet_ = false;
    quota_ = 0;
    quotaIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
}

QuotaResource::~QuotaResource() = default;

void QuotaResource::validate()
{
}

web::json::value QuotaResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(minIsSet_) {
        val[utility::conversions::to_string_t("min")] = ModelBase::toJson(min_);
    }
    if(maxIsSet_) {
        val[utility::conversions::to_string_t("max")] = ModelBase::toJson(max_);
    }
    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }

    return val;
}

bool QuotaResource::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
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

std::string QuotaResource::getType() const
{
    return type_;
}

void QuotaResource::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool QuotaResource::typeIsSet() const
{
    return typeIsSet_;
}

void QuotaResource::unsettype()
{
    typeIsSet_ = false;
}

int32_t QuotaResource::getMin() const
{
    return min_;
}

void QuotaResource::setMin(int32_t value)
{
    min_ = value;
    minIsSet_ = true;
}

bool QuotaResource::minIsSet() const
{
    return minIsSet_;
}

void QuotaResource::unsetmin()
{
    minIsSet_ = false;
}

int32_t QuotaResource::getMax() const
{
    return max_;
}

void QuotaResource::setMax(int32_t value)
{
    max_ = value;
    maxIsSet_ = true;
}

bool QuotaResource::maxIsSet() const
{
    return maxIsSet_;
}

void QuotaResource::unsetmax()
{
    maxIsSet_ = false;
}

int32_t QuotaResource::getQuota() const
{
    return quota_;
}

void QuotaResource::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool QuotaResource::quotaIsSet() const
{
    return quotaIsSet_;
}

void QuotaResource::unsetquota()
{
    quotaIsSet_ = false;
}

int32_t QuotaResource::getUsed() const
{
    return used_;
}

void QuotaResource::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool QuotaResource::usedIsSet() const
{
    return usedIsSet_;
}

void QuotaResource::unsetused()
{
    usedIsSet_ = false;
}

}
}
}
}
}


