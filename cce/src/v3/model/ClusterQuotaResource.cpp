

#include "huaweicloud/cce/v3/model/ClusterQuotaResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterQuotaResource::ClusterQuotaResource()
{
    type_ = "";
    typeIsSet_ = false;
    quota_ = 0;
    quotaIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
    min_ = 0;
    minIsSet_ = false;
    max_ = 0;
    maxIsSet_ = false;
}

ClusterQuotaResource::~ClusterQuotaResource() = default;

void ClusterQuotaResource::validate()
{
}

web::json::value ClusterQuotaResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }
    if(minIsSet_) {
        val[utility::conversions::to_string_t("min")] = ModelBase::toJson(min_);
    }
    if(maxIsSet_) {
        val[utility::conversions::to_string_t("max")] = ModelBase::toJson(max_);
    }

    return val;
}
bool ClusterQuotaResource::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
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


std::string ClusterQuotaResource::getType() const
{
    return type_;
}

void ClusterQuotaResource::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ClusterQuotaResource::typeIsSet() const
{
    return typeIsSet_;
}

void ClusterQuotaResource::unsettype()
{
    typeIsSet_ = false;
}

int32_t ClusterQuotaResource::getQuota() const
{
    return quota_;
}

void ClusterQuotaResource::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool ClusterQuotaResource::quotaIsSet() const
{
    return quotaIsSet_;
}

void ClusterQuotaResource::unsetquota()
{
    quotaIsSet_ = false;
}

int32_t ClusterQuotaResource::getUsed() const
{
    return used_;
}

void ClusterQuotaResource::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool ClusterQuotaResource::usedIsSet() const
{
    return usedIsSet_;
}

void ClusterQuotaResource::unsetused()
{
    usedIsSet_ = false;
}

std::string ClusterQuotaResource::getUnit() const
{
    return unit_;
}

void ClusterQuotaResource::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool ClusterQuotaResource::unitIsSet() const
{
    return unitIsSet_;
}

void ClusterQuotaResource::unsetunit()
{
    unitIsSet_ = false;
}

int32_t ClusterQuotaResource::getMin() const
{
    return min_;
}

void ClusterQuotaResource::setMin(int32_t value)
{
    min_ = value;
    minIsSet_ = true;
}

bool ClusterQuotaResource::minIsSet() const
{
    return minIsSet_;
}

void ClusterQuotaResource::unsetmin()
{
    minIsSet_ = false;
}

int32_t ClusterQuotaResource::getMax() const
{
    return max_;
}

void ClusterQuotaResource::setMax(int32_t value)
{
    max_ = value;
    maxIsSet_ = true;
}

bool ClusterQuotaResource::maxIsSet() const
{
    return maxIsSet_;
}

void ClusterQuotaResource::unsetmax()
{
    maxIsSet_ = false;
}

}
}
}
}
}


