

#include "huaweicloud/metastudio/v1/model/UpdateUserQuotaInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateUserQuotaInfo::UpdateUserQuotaInfo()
{
    quotaIsSet_ = false;
}

UpdateUserQuotaInfo::~UpdateUserQuotaInfo() = default;

void UpdateUserQuotaInfo::validate()
{
}

web::json::value UpdateUserQuotaInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }

    return val;
}
bool UpdateUserQuotaInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota"));
        if(!fieldValue.is_null())
        {
            UserQuotaDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
        }
    }
    return ok;
}


UserQuotaDetail UpdateUserQuotaInfo::getQuota() const
{
    return quota_;
}

void UpdateUserQuotaInfo::setQuota(const UserQuotaDetail& value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool UpdateUserQuotaInfo::quotaIsSet() const
{
    return quotaIsSet_;
}

void UpdateUserQuotaInfo::unsetquota()
{
    quotaIsSet_ = false;
}

}
}
}
}
}


