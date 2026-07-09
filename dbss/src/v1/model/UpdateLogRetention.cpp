

#include "huaweicloud/dbss/v1/model/UpdateLogRetention.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateLogRetention::UpdateLogRetention()
{
    retentionDays_ = 0;
    retentionDaysIsSet_ = false;
}

UpdateLogRetention::~UpdateLogRetention() = default;

void UpdateLogRetention::validate()
{
}

web::json::value UpdateLogRetention::toJson() const
{
    web::json::value val = web::json::value::object();

    if(retentionDaysIsSet_) {
        val[utility::conversions::to_string_t("retention_days")] = ModelBase::toJson(retentionDays_);
    }

    return val;
}
bool UpdateLogRetention::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("retention_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionDays(refVal);
        }
    }
    return ok;
}


int32_t UpdateLogRetention::getRetentionDays() const
{
    return retentionDays_;
}

void UpdateLogRetention::setRetentionDays(int32_t value)
{
    retentionDays_ = value;
    retentionDaysIsSet_ = true;
}

bool UpdateLogRetention::retentionDaysIsSet() const
{
    return retentionDaysIsSet_;
}

void UpdateLogRetention::unsetretentionDays()
{
    retentionDaysIsSet_ = false;
}

}
}
}
}
}


