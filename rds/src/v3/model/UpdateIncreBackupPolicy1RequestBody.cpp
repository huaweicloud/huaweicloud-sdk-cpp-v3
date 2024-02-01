

#include "huaweicloud/rds/v3/model/UpdateIncreBackupPolicy1RequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateIncreBackupPolicy1RequestBody::UpdateIncreBackupPolicy1RequestBody()
{
    increBackupPolicyIsSet_ = false;
}

UpdateIncreBackupPolicy1RequestBody::~UpdateIncreBackupPolicy1RequestBody() = default;

void UpdateIncreBackupPolicy1RequestBody::validate()
{
}

web::json::value UpdateIncreBackupPolicy1RequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(increBackupPolicyIsSet_) {
        val[utility::conversions::to_string_t("incre_backup_policy")] = ModelBase::toJson(increBackupPolicy_);
    }

    return val;
}
bool UpdateIncreBackupPolicy1RequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("incre_backup_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incre_backup_policy"));
        if(!fieldValue.is_null())
        {
            ShowIncreBackupPolicyRespBody_incre_backup_policy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncreBackupPolicy(refVal);
        }
    }
    return ok;
}


ShowIncreBackupPolicyRespBody_incre_backup_policy UpdateIncreBackupPolicy1RequestBody::getIncreBackupPolicy() const
{
    return increBackupPolicy_;
}

void UpdateIncreBackupPolicy1RequestBody::setIncreBackupPolicy(const ShowIncreBackupPolicyRespBody_incre_backup_policy& value)
{
    increBackupPolicy_ = value;
    increBackupPolicyIsSet_ = true;
}

bool UpdateIncreBackupPolicy1RequestBody::increBackupPolicyIsSet() const
{
    return increBackupPolicyIsSet_;
}

void UpdateIncreBackupPolicy1RequestBody::unsetincreBackupPolicy()
{
    increBackupPolicyIsSet_ = false;
}

}
}
}
}
}


