

#include "huaweicloud/eps/v1/model/EpQuotas.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




EpQuotas::EpQuotas()
{
    quota_ = 0;
    quotaIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
}

EpQuotas::~EpQuotas() = default;

void EpQuotas::validate()
{
}

web::json::value EpQuotas::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }

    return val;
}

bool EpQuotas::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
        }
    }
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
    return ok;
}

int32_t EpQuotas::getQuota() const
{
    return quota_;
}

void EpQuotas::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool EpQuotas::quotaIsSet() const
{
    return quotaIsSet_;
}

void EpQuotas::unsetquota()
{
    quotaIsSet_ = false;
}

std::string EpQuotas::getType() const
{
    return type_;
}

void EpQuotas::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool EpQuotas::typeIsSet() const
{
    return typeIsSet_;
}

void EpQuotas::unsettype()
{
    typeIsSet_ = false;
}

int32_t EpQuotas::getUsed() const
{
    return used_;
}

void EpQuotas::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool EpQuotas::usedIsSet() const
{
    return usedIsSet_;
}

void EpQuotas::unsetused()
{
    usedIsSet_ = false;
}

}
}
}
}
}


