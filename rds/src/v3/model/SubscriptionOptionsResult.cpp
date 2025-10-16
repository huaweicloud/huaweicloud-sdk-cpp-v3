

#include "huaweicloud/rds/v3/model/SubscriptionOptionsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SubscriptionOptionsResult::SubscriptionOptionsResult()
{
    independentAgent_ = false;
    independentAgentIsSet_ = false;
    replicateDdl_ = false;
    replicateDdlIsSet_ = false;
    snapshotAlwaysAvailable_ = false;
    snapshotAlwaysAvailableIsSet_ = false;
    allowInitializeFromBackup_ = false;
    allowInitializeFromBackupIsSet_ = false;
}

SubscriptionOptionsResult::~SubscriptionOptionsResult() = default;

void SubscriptionOptionsResult::validate()
{
}

web::json::value SubscriptionOptionsResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(independentAgentIsSet_) {
        val[utility::conversions::to_string_t("independent_agent")] = ModelBase::toJson(independentAgent_);
    }
    if(replicateDdlIsSet_) {
        val[utility::conversions::to_string_t("replicate_ddl")] = ModelBase::toJson(replicateDdl_);
    }
    if(snapshotAlwaysAvailableIsSet_) {
        val[utility::conversions::to_string_t("snapshot_always_available")] = ModelBase::toJson(snapshotAlwaysAvailable_);
    }
    if(allowInitializeFromBackupIsSet_) {
        val[utility::conversions::to_string_t("allow_initialize_from_backup")] = ModelBase::toJson(allowInitializeFromBackup_);
    }

    return val;
}
bool SubscriptionOptionsResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("replicate_ddl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replicate_ddl"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicateDdl(refVal);
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


bool SubscriptionOptionsResult::isIndependentAgent() const
{
    return independentAgent_;
}

void SubscriptionOptionsResult::setIndependentAgent(bool value)
{
    independentAgent_ = value;
    independentAgentIsSet_ = true;
}

bool SubscriptionOptionsResult::independentAgentIsSet() const
{
    return independentAgentIsSet_;
}

void SubscriptionOptionsResult::unsetindependentAgent()
{
    independentAgentIsSet_ = false;
}

bool SubscriptionOptionsResult::isReplicateDdl() const
{
    return replicateDdl_;
}

void SubscriptionOptionsResult::setReplicateDdl(bool value)
{
    replicateDdl_ = value;
    replicateDdlIsSet_ = true;
}

bool SubscriptionOptionsResult::replicateDdlIsSet() const
{
    return replicateDdlIsSet_;
}

void SubscriptionOptionsResult::unsetreplicateDdl()
{
    replicateDdlIsSet_ = false;
}

bool SubscriptionOptionsResult::isSnapshotAlwaysAvailable() const
{
    return snapshotAlwaysAvailable_;
}

void SubscriptionOptionsResult::setSnapshotAlwaysAvailable(bool value)
{
    snapshotAlwaysAvailable_ = value;
    snapshotAlwaysAvailableIsSet_ = true;
}

bool SubscriptionOptionsResult::snapshotAlwaysAvailableIsSet() const
{
    return snapshotAlwaysAvailableIsSet_;
}

void SubscriptionOptionsResult::unsetsnapshotAlwaysAvailable()
{
    snapshotAlwaysAvailableIsSet_ = false;
}

bool SubscriptionOptionsResult::isAllowInitializeFromBackup() const
{
    return allowInitializeFromBackup_;
}

void SubscriptionOptionsResult::setAllowInitializeFromBackup(bool value)
{
    allowInitializeFromBackup_ = value;
    allowInitializeFromBackupIsSet_ = true;
}

bool SubscriptionOptionsResult::allowInitializeFromBackupIsSet() const
{
    return allowInitializeFromBackupIsSet_;
}

void SubscriptionOptionsResult::unsetallowInitializeFromBackup()
{
    allowInitializeFromBackupIsSet_ = false;
}

}
}
}
}
}


