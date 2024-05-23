

#include "huaweicloud/ram/v1/model/Quotas.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




Quotas::Quotas()
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

Quotas::~Quotas() = default;

void Quotas::validate()
{
}

web::json::value Quotas::toJson() const
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
bool Quotas::fromJson(const web::json::value& val)
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


std::string Quotas::getType() const
{
    return type_;
}

void Quotas::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Quotas::typeIsSet() const
{
    return typeIsSet_;
}

void Quotas::unsettype()
{
    typeIsSet_ = false;
}

int32_t Quotas::getQuota() const
{
    return quota_;
}

void Quotas::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool Quotas::quotaIsSet() const
{
    return quotaIsSet_;
}

void Quotas::unsetquota()
{
    quotaIsSet_ = false;
}

int32_t Quotas::getMin() const
{
    return min_;
}

void Quotas::setMin(int32_t value)
{
    min_ = value;
    minIsSet_ = true;
}

bool Quotas::minIsSet() const
{
    return minIsSet_;
}

void Quotas::unsetmin()
{
    minIsSet_ = false;
}

int32_t Quotas::getMax() const
{
    return max_;
}

void Quotas::setMax(int32_t value)
{
    max_ = value;
    maxIsSet_ = true;
}

bool Quotas::maxIsSet() const
{
    return maxIsSet_;
}

void Quotas::unsetmax()
{
    maxIsSet_ = false;
}

int32_t Quotas::getUsed() const
{
    return used_;
}

void Quotas::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool Quotas::usedIsSet() const
{
    return usedIsSet_;
}

void Quotas::unsetused()
{
    usedIsSet_ = false;
}

}
}
}
}
}


