

#include "huaweicloud/gaussdbforopengauss/v3/model/InstanceResourceQuotaResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstanceResourceQuotaResult::InstanceResourceQuotaResult()
{
    type_ = "";
    typeIsSet_ = false;
    quota_ = 0;
    quotaIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
}

InstanceResourceQuotaResult::~InstanceResourceQuotaResult() = default;

void InstanceResourceQuotaResult::validate()
{
}

web::json::value InstanceResourceQuotaResult::toJson() const
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
bool InstanceResourceQuotaResult::fromJson(const web::json::value& val)
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
    return ok;
}


std::string InstanceResourceQuotaResult::getType() const
{
    return type_;
}

void InstanceResourceQuotaResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool InstanceResourceQuotaResult::typeIsSet() const
{
    return typeIsSet_;
}

void InstanceResourceQuotaResult::unsettype()
{
    typeIsSet_ = false;
}

int32_t InstanceResourceQuotaResult::getQuota() const
{
    return quota_;
}

void InstanceResourceQuotaResult::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool InstanceResourceQuotaResult::quotaIsSet() const
{
    return quotaIsSet_;
}

void InstanceResourceQuotaResult::unsetquota()
{
    quotaIsSet_ = false;
}

int32_t InstanceResourceQuotaResult::getUsed() const
{
    return used_;
}

void InstanceResourceQuotaResult::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool InstanceResourceQuotaResult::usedIsSet() const
{
    return usedIsSet_;
}

void InstanceResourceQuotaResult::unsetused()
{
    usedIsSet_ = false;
}

}
}
}
}
}


