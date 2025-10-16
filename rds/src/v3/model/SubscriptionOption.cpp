

#include "huaweicloud/rds/v3/model/SubscriptionOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SubscriptionOption::SubscriptionOption()
{
    independentAgent_ = false;
    independentAgentIsSet_ = false;
    snapshotAlwaysAvailable_ = false;
    snapshotAlwaysAvailableIsSet_ = false;
    replicateDdl_ = false;
    replicateDdlIsSet_ = false;
    allowInitializeFromBackup_ = false;
    allowInitializeFromBackupIsSet_ = false;
}

SubscriptionOption::~SubscriptionOption() = default;

void SubscriptionOption::validate()
{
}

web::json::value SubscriptionOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(independentAgentIsSet_) {
        val[utility::conversions::to_string_t("independent_agent")] = ModelBase::toJson(independentAgent_);
    }
    if(snapshotAlwaysAvailableIsSet_) {
        val[utility::conversions::to_string_t("snapshot_always_available")] = ModelBase::toJson(snapshotAlwaysAvailable_);
    }
    if(replicateDdlIsSet_) {
        val[utility::conversions::to_string_t("replicate_ddl")] = ModelBase::toJson(replicateDdl_);
    }
    if(allowInitializeFromBackupIsSet_) {
        val[utility::conversions::to_string_t("allow_initialize_from_backup")] = ModelBase::toJson(allowInitializeFromBackup_);
    }

    return val;
}
bool SubscriptionOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("independent_agent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("independent_agent"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndependentAgent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot_always_available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_always_available"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotAlwaysAvailable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replicate_ddl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replicate_ddl"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicateDdl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allow_initialize_from_backup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow_initialize_from_backup"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowInitializeFromBackup(refVal);
        }
    }
    return ok;
}


bool SubscriptionOption::isIndependentAgent() const
{
    return independentAgent_;
}

void SubscriptionOption::setIndependentAgent(bool value)
{
    independentAgent_ = value;
    independentAgentIsSet_ = true;
}

bool SubscriptionOption::independentAgentIsSet() const
{
    return independentAgentIsSet_;
}

void SubscriptionOption::unsetindependentAgent()
{
    independentAgentIsSet_ = false;
}

bool SubscriptionOption::isSnapshotAlwaysAvailable() const
{
    return snapshotAlwaysAvailable_;
}

void SubscriptionOption::setSnapshotAlwaysAvailable(bool value)
{
    snapshotAlwaysAvailable_ = value;
    snapshotAlwaysAvailableIsSet_ = true;
}

bool SubscriptionOption::snapshotAlwaysAvailableIsSet() const
{
    return snapshotAlwaysAvailableIsSet_;
}

void SubscriptionOption::unsetsnapshotAlwaysAvailable()
{
    snapshotAlwaysAvailableIsSet_ = false;
}

bool SubscriptionOption::isReplicateDdl() const
{
    return replicateDdl_;
}

void SubscriptionOption::setReplicateDdl(bool value)
{
    replicateDdl_ = value;
    replicateDdlIsSet_ = true;
}

bool SubscriptionOption::replicateDdlIsSet() const
{
    return replicateDdlIsSet_;
}

void SubscriptionOption::unsetreplicateDdl()
{
    replicateDdlIsSet_ = false;
}

bool SubscriptionOption::isAllowInitializeFromBackup() const
{
    return allowInitializeFromBackup_;
}

void SubscriptionOption::setAllowInitializeFromBackup(bool value)
{
    allowInitializeFromBackup_ = value;
    allowInitializeFromBackupIsSet_ = true;
}

bool SubscriptionOption::allowInitializeFromBackupIsSet() const
{
    return allowInitializeFromBackupIsSet_;
}

void SubscriptionOption::unsetallowInitializeFromBackup()
{
    allowInitializeFromBackupIsSet_ = false;
}

}
}
}
}
}


