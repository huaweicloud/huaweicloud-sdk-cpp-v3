

#include "huaweicloud/modelarts/v1/model/ResourceQuota.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResourceQuota::ResourceQuota()
{
    type_ = "";
    typeIsSet_ = false;
    quota_ = "";
    quotaIsSet_ = false;
    used_ = "";
    usedIsSet_ = false;
}

ResourceQuota::~ResourceQuota() = default;

void ResourceQuota::validate()
{
}

web::json::value ResourceQuota::toJson() const
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

    return val;
}
bool ResourceQuota::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    return ok;
}


std::string ResourceQuota::getType() const
{
    return type_;
}

void ResourceQuota::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ResourceQuota::typeIsSet() const
{
    return typeIsSet_;
}

void ResourceQuota::unsettype()
{
    typeIsSet_ = false;
}

std::string ResourceQuota::getQuota() const
{
    return quota_;
}

void ResourceQuota::setQuota(const std::string& value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool ResourceQuota::quotaIsSet() const
{
    return quotaIsSet_;
}

void ResourceQuota::unsetquota()
{
    quotaIsSet_ = false;
}

std::string ResourceQuota::getUsed() const
{
    return used_;
}

void ResourceQuota::setUsed(const std::string& value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool ResourceQuota::usedIsSet() const
{
    return usedIsSet_;
}

void ResourceQuota::unsetused()
{
    usedIsSet_ = false;
}

}
}
}
}
}


