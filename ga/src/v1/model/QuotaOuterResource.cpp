

#include "huaweicloud/ga/v1/model/QuotaOuterResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




QuotaOuterResource::QuotaOuterResource()
{
    type_ = "";
    typeIsSet_ = false;
    min_ = 0;
    minIsSet_ = false;
    max_ = 0;
    maxIsSet_ = false;
    quota_ = 0;
    quotaIsSet_ = false;
}

QuotaOuterResource::~QuotaOuterResource() = default;

void QuotaOuterResource::validate()
{
}

web::json::value QuotaOuterResource::toJson() const
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

    return val;
}
bool QuotaOuterResource::fromJson(const web::json::value& val)
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
    return ok;
}


std::string QuotaOuterResource::getType() const
{
    return type_;
}

void QuotaOuterResource::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool QuotaOuterResource::typeIsSet() const
{
    return typeIsSet_;
}

void QuotaOuterResource::unsettype()
{
    typeIsSet_ = false;
}

int32_t QuotaOuterResource::getMin() const
{
    return min_;
}

void QuotaOuterResource::setMin(int32_t value)
{
    min_ = value;
    minIsSet_ = true;
}

bool QuotaOuterResource::minIsSet() const
{
    return minIsSet_;
}

void QuotaOuterResource::unsetmin()
{
    minIsSet_ = false;
}

int32_t QuotaOuterResource::getMax() const
{
    return max_;
}

void QuotaOuterResource::setMax(int32_t value)
{
    max_ = value;
    maxIsSet_ = true;
}

bool QuotaOuterResource::maxIsSet() const
{
    return maxIsSet_;
}

void QuotaOuterResource::unsetmax()
{
    maxIsSet_ = false;
}

int32_t QuotaOuterResource::getQuota() const
{
    return quota_;
}

void QuotaOuterResource::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool QuotaOuterResource::quotaIsSet() const
{
    return quotaIsSet_;
}

void QuotaOuterResource::unsetquota()
{
    quotaIsSet_ = false;
}

}
}
}
}
}


