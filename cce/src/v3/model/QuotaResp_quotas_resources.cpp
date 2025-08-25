

#include "huaweicloud/cce/v3/model/QuotaResp_quotas_resources.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




QuotaResp_quotas_resources::QuotaResp_quotas_resources()
{
    type_ = "";
    typeIsSet_ = false;
    quota_ = 0;
    quotaIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
}

QuotaResp_quotas_resources::~QuotaResp_quotas_resources() = default;

void QuotaResp_quotas_resources::validate()
{
}

web::json::value QuotaResp_quotas_resources::toJson() const
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
bool QuotaResp_quotas_resources::fromJson(const web::json::value& val)
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


std::string QuotaResp_quotas_resources::getType() const
{
    return type_;
}

void QuotaResp_quotas_resources::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool QuotaResp_quotas_resources::typeIsSet() const
{
    return typeIsSet_;
}

void QuotaResp_quotas_resources::unsettype()
{
    typeIsSet_ = false;
}

int32_t QuotaResp_quotas_resources::getQuota() const
{
    return quota_;
}

void QuotaResp_quotas_resources::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool QuotaResp_quotas_resources::quotaIsSet() const
{
    return quotaIsSet_;
}

void QuotaResp_quotas_resources::unsetquota()
{
    quotaIsSet_ = false;
}

int32_t QuotaResp_quotas_resources::getUsed() const
{
    return used_;
}

void QuotaResp_quotas_resources::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool QuotaResp_quotas_resources::usedIsSet() const
{
    return usedIsSet_;
}

void QuotaResp_quotas_resources::unsetused()
{
    usedIsSet_ = false;
}

}
}
}
}
}


