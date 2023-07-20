

#include "huaweicloud/gaussdbfornosql/v3/model/ShowBackupPolicyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowBackupPolicyResponse::ShowBackupPolicyResponse()
{
    backupPolicyIsSet_ = false;
}

ShowBackupPolicyResponse::~ShowBackupPolicyResponse() = default;

void ShowBackupPolicyResponse::validate()
{
}

web::json::value ShowBackupPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupPolicyIsSet_) {
        val[utility::conversions::to_string_t("backup_policy")] = ModelBase::toJson(backupPolicy_);
    }

    return val;
}

bool ShowBackupPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_policy"));
        if(!fieldValue.is_null())
        {
            ShowBackupPolicyResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupPolicy(refVal);
        }
    }
    return ok;
}

ShowBackupPolicyResult ShowBackupPolicyResponse::getBackupPolicy() const
{
    return backupPolicy_;
}

void ShowBackupPolicyResponse::setBackupPolicy(const ShowBackupPolicyResult& value)
{
    backupPolicy_ = value;
    backupPolicyIsSet_ = true;
}

bool ShowBackupPolicyResponse::backupPolicyIsSet() const
{
    return backupPolicyIsSet_;
}

void ShowBackupPolicyResponse::unsetbackupPolicy()
{
    backupPolicyIsSet_ = false;
}

}
}
}
}
}


