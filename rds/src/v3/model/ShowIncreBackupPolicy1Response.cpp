

#include "huaweicloud/rds/v3/model/ShowIncreBackupPolicy1Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowIncreBackupPolicy1Response::ShowIncreBackupPolicy1Response()
{
    increBackupPolicyIsSet_ = false;
}

ShowIncreBackupPolicy1Response::~ShowIncreBackupPolicy1Response() = default;

void ShowIncreBackupPolicy1Response::validate()
{
}

web::json::value ShowIncreBackupPolicy1Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(increBackupPolicyIsSet_) {
        val[utility::conversions::to_string_t("incre_backup_policy")] = ModelBase::toJson(increBackupPolicy_);
    }

    return val;
}
bool ShowIncreBackupPolicy1Response::fromJson(const web::json::value& val)
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


ShowIncreBackupPolicyRespBody_incre_backup_policy ShowIncreBackupPolicy1Response::getIncreBackupPolicy() const
{
    return increBackupPolicy_;
}

void ShowIncreBackupPolicy1Response::setIncreBackupPolicy(const ShowIncreBackupPolicyRespBody_incre_backup_policy& value)
{
    increBackupPolicy_ = value;
    increBackupPolicyIsSet_ = true;
}

bool ShowIncreBackupPolicy1Response::increBackupPolicyIsSet() const
{
    return increBackupPolicyIsSet_;
}

void ShowIncreBackupPolicy1Response::unsetincreBackupPolicy()
{
    increBackupPolicyIsSet_ = false;
}

}
}
}
}
}


