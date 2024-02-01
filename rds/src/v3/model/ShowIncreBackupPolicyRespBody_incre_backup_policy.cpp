

#include "huaweicloud/rds/v3/model/ShowIncreBackupPolicyRespBody_incre_backup_policy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowIncreBackupPolicyRespBody_incre_backup_policy::ShowIncreBackupPolicyRespBody_incre_backup_policy()
{
    interval_ = 0;
    intervalIsSet_ = false;
}

ShowIncreBackupPolicyRespBody_incre_backup_policy::~ShowIncreBackupPolicyRespBody_incre_backup_policy() = default;

void ShowIncreBackupPolicyRespBody_incre_backup_policy::validate()
{
}

web::json::value ShowIncreBackupPolicyRespBody_incre_backup_policy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }

    return val;
}
bool ShowIncreBackupPolicyRespBody_incre_backup_policy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterval(refVal);
        }
    }
    return ok;
}


int32_t ShowIncreBackupPolicyRespBody_incre_backup_policy::getInterval() const
{
    return interval_;
}

void ShowIncreBackupPolicyRespBody_incre_backup_policy::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ShowIncreBackupPolicyRespBody_incre_backup_policy::intervalIsSet() const
{
    return intervalIsSet_;
}

void ShowIncreBackupPolicyRespBody_incre_backup_policy::unsetinterval()
{
    intervalIsSet_ = false;
}

}
}
}
}
}


