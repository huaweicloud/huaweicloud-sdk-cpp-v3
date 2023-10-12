

#include "huaweicloud/vpc/v2/model/ResourceResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ResourceResult::ResourceResult()
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

ResourceResult::~ResourceResult() = default;

void ResourceResult::validate()
{
}

web::json::value ResourceResult::toJson() const
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
bool ResourceResult::fromJson(const web::json::value& val)
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


std::string ResourceResult::getType() const
{
    return type_;
}

void ResourceResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ResourceResult::typeIsSet() const
{
    return typeIsSet_;
}

void ResourceResult::unsettype()
{
    typeIsSet_ = false;
}

int32_t ResourceResult::getUsed() const
{
    return used_;
}

void ResourceResult::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool ResourceResult::usedIsSet() const
{
    return usedIsSet_;
}

void ResourceResult::unsetused()
{
    usedIsSet_ = false;
}

int32_t ResourceResult::getQuota() const
{
    return quota_;
}

void ResourceResult::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool ResourceResult::quotaIsSet() const
{
    return quotaIsSet_;
}

void ResourceResult::unsetquota()
{
    quotaIsSet_ = false;
}

int32_t ResourceResult::getMin() const
{
    return min_;
}

void ResourceResult::setMin(int32_t value)
{
    min_ = value;
    minIsSet_ = true;
}

bool ResourceResult::minIsSet() const
{
    return minIsSet_;
}

void ResourceResult::unsetmin()
{
    minIsSet_ = false;
}

}
}
}
}
}


