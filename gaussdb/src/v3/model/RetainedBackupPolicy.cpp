

#include "huaweicloud/gaussdb/v3/model/RetainedBackupPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RetainedBackupPolicy::RetainedBackupPolicy()
{
    backupRetentionStrategy_ = "";
    backupRetentionStrategyIsSet_ = false;
}

RetainedBackupPolicy::~RetainedBackupPolicy() = default;

void RetainedBackupPolicy::validate()
{
}

web::json::value RetainedBackupPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupRetentionStrategyIsSet_) {
        val[utility::conversions::to_string_t("backup_retention_strategy")] = ModelBase::toJson(backupRetentionStrategy_);
    }

    return val;
}
bool RetainedBackupPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_retention_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_retention_strategy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupRetentionStrategy(refVal);
        }
    }
    return ok;
}


std::string RetainedBackupPolicy::getBackupRetentionStrategy() const
{
    return backupRetentionStrategy_;
}

void RetainedBackupPolicy::setBackupRetentionStrategy(const std::string& value)
{
    backupRetentionStrategy_ = value;
    backupRetentionStrategyIsSet_ = true;
}

bool RetainedBackupPolicy::backupRetentionStrategyIsSet() const
{
    return backupRetentionStrategyIsSet_;
}

void RetainedBackupPolicy::unsetbackupRetentionStrategy()
{
    backupRetentionStrategyIsSet_ = false;
}

}
}
}
}
}


