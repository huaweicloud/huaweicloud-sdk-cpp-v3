

#include "huaweicloud/antiddos/v1/model/QuotaResponse_ddos_quota.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




QuotaResponse_ddos_quota::QuotaResponse_ddos_quota()
{
    current_ = 0;
    currentIsSet_ = false;
    quota_ = 0;
    quotaIsSet_ = false;
}

QuotaResponse_ddos_quota::~QuotaResponse_ddos_quota() = default;

void QuotaResponse_ddos_quota::validate()
{
}

web::json::value QuotaResponse_ddos_quota::toJson() const
{
    web::json::value val = web::json::value::object();

    if(currentIsSet_) {
        val[utility::conversions::to_string_t("current")] = ModelBase::toJson(current_);
    }
    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }

    return val;
}
bool QuotaResponse_ddos_quota::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("current"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrent(refVal);
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


int32_t QuotaResponse_ddos_quota::getCurrent() const
{
    return current_;
}

void QuotaResponse_ddos_quota::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool QuotaResponse_ddos_quota::currentIsSet() const
{
    return currentIsSet_;
}

void QuotaResponse_ddos_quota::unsetcurrent()
{
    currentIsSet_ = false;
}

int32_t QuotaResponse_ddos_quota::getQuota() const
{
    return quota_;
}

void QuotaResponse_ddos_quota::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool QuotaResponse_ddos_quota::quotaIsSet() const
{
    return quotaIsSet_;
}

void QuotaResponse_ddos_quota::unsetquota()
{
    quotaIsSet_ = false;
}

}
}
}
}
}


