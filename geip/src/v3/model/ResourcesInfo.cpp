

#include "huaweicloud/geip/v3/model/ResourcesInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ResourcesInfo::ResourcesInfo()
{
    type_ = "";
    typeIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
    quota_ = 0;
    quotaIsSet_ = false;
    min_ = 0;
    minIsSet_ = false;
}

ResourcesInfo::~ResourcesInfo() = default;

void ResourcesInfo::validate()
{
}

web::json::value ResourcesInfo::toJson() const
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

    return val;
}
bool ResourcesInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ResourcesInfo::getType() const
{
    return type_;
}

void ResourcesInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ResourcesInfo::typeIsSet() const
{
    return typeIsSet_;
}

void ResourcesInfo::unsettype()
{
    typeIsSet_ = false;
}

int32_t ResourcesInfo::getUsed() const
{
    return used_;
}

void ResourcesInfo::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool ResourcesInfo::usedIsSet() const
{
    return usedIsSet_;
}

void ResourcesInfo::unsetused()
{
    usedIsSet_ = false;
}

int32_t ResourcesInfo::getQuota() const
{
    return quota_;
}

void ResourcesInfo::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool ResourcesInfo::quotaIsSet() const
{
    return quotaIsSet_;
}

void ResourcesInfo::unsetquota()
{
    quotaIsSet_ = false;
}

int32_t ResourcesInfo::getMin() const
{
    return min_;
}

void ResourcesInfo::setMin(int32_t value)
{
    min_ = value;
    minIsSet_ = true;
}

bool ResourcesInfo::minIsSet() const
{
    return minIsSet_;
}

void ResourcesInfo::unsetmin()
{
    minIsSet_ = false;
}

}
}
}
}
}


