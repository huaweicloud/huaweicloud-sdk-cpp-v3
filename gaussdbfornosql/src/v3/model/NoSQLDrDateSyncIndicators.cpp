

#include "huaweicloud/gaussdbfornosql/v3/model/NoSQLDrDateSyncIndicators.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




NoSQLDrDateSyncIndicators::NoSQLDrDateSyncIndicators()
{
    rsyncOps_ = 0L;
    rsyncOpsIsSet_ = false;
    rsyncWalSize_ = 0L;
    rsyncWalSizeIsSet_ = false;
    rsyncPushCost_ = 0L;
    rsyncPushCostIsSet_ = false;
    rsyncSendCost_ = 0L;
    rsyncSendCostIsSet_ = false;
    rsyncMaxPushCost_ = 0L;
    rsyncMaxPushCostIsSet_ = false;
    rsyncMaxSendCost_ = 0L;
    rsyncMaxSendCostIsSet_ = false;
    rsyncStatus_ = 0;
    rsyncStatusIsSet_ = false;
}

NoSQLDrDateSyncIndicators::~NoSQLDrDateSyncIndicators() = default;

void NoSQLDrDateSyncIndicators::validate()
{
}

web::json::value NoSQLDrDateSyncIndicators::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rsyncOpsIsSet_) {
        val[utility::conversions::to_string_t("rsync_ops")] = ModelBase::toJson(rsyncOps_);
    }
    if(rsyncWalSizeIsSet_) {
        val[utility::conversions::to_string_t("rsync_wal_size")] = ModelBase::toJson(rsyncWalSize_);
    }
    if(rsyncPushCostIsSet_) {
        val[utility::conversions::to_string_t("rsync_push_cost")] = ModelBase::toJson(rsyncPushCost_);
    }
    if(rsyncSendCostIsSet_) {
        val[utility::conversions::to_string_t("rsync_send_cost")] = ModelBase::toJson(rsyncSendCost_);
    }
    if(rsyncMaxPushCostIsSet_) {
        val[utility::conversions::to_string_t("rsync_max_push_cost")] = ModelBase::toJson(rsyncMaxPushCost_);
    }
    if(rsyncMaxSendCostIsSet_) {
        val[utility::conversions::to_string_t("rsync_max_send_cost")] = ModelBase::toJson(rsyncMaxSendCost_);
    }
    if(rsyncStatusIsSet_) {
        val[utility::conversions::to_string_t("rsync_status")] = ModelBase::toJson(rsyncStatus_);
    }

    return val;
}

bool NoSQLDrDateSyncIndicators::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rsync_ops"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rsync_ops"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRsyncOps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rsync_wal_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rsync_wal_size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRsyncWalSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rsync_push_cost"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rsync_push_cost"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRsyncPushCost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rsync_send_cost"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rsync_send_cost"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRsyncSendCost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rsync_max_push_cost"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rsync_max_push_cost"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRsyncMaxPushCost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rsync_max_send_cost"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rsync_max_send_cost"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRsyncMaxSendCost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rsync_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rsync_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRsyncStatus(refVal);
        }
    }
    return ok;
}

int64_t NoSQLDrDateSyncIndicators::getRsyncOps() const
{
    return rsyncOps_;
}

void NoSQLDrDateSyncIndicators::setRsyncOps(int64_t value)
{
    rsyncOps_ = value;
    rsyncOpsIsSet_ = true;
}

bool NoSQLDrDateSyncIndicators::rsyncOpsIsSet() const
{
    return rsyncOpsIsSet_;
}

void NoSQLDrDateSyncIndicators::unsetrsyncOps()
{
    rsyncOpsIsSet_ = false;
}

int64_t NoSQLDrDateSyncIndicators::getRsyncWalSize() const
{
    return rsyncWalSize_;
}

void NoSQLDrDateSyncIndicators::setRsyncWalSize(int64_t value)
{
    rsyncWalSize_ = value;
    rsyncWalSizeIsSet_ = true;
}

bool NoSQLDrDateSyncIndicators::rsyncWalSizeIsSet() const
{
    return rsyncWalSizeIsSet_;
}

void NoSQLDrDateSyncIndicators::unsetrsyncWalSize()
{
    rsyncWalSizeIsSet_ = false;
}

int64_t NoSQLDrDateSyncIndicators::getRsyncPushCost() const
{
    return rsyncPushCost_;
}

void NoSQLDrDateSyncIndicators::setRsyncPushCost(int64_t value)
{
    rsyncPushCost_ = value;
    rsyncPushCostIsSet_ = true;
}

bool NoSQLDrDateSyncIndicators::rsyncPushCostIsSet() const
{
    return rsyncPushCostIsSet_;
}

void NoSQLDrDateSyncIndicators::unsetrsyncPushCost()
{
    rsyncPushCostIsSet_ = false;
}

int64_t NoSQLDrDateSyncIndicators::getRsyncSendCost() const
{
    return rsyncSendCost_;
}

void NoSQLDrDateSyncIndicators::setRsyncSendCost(int64_t value)
{
    rsyncSendCost_ = value;
    rsyncSendCostIsSet_ = true;
}

bool NoSQLDrDateSyncIndicators::rsyncSendCostIsSet() const
{
    return rsyncSendCostIsSet_;
}

void NoSQLDrDateSyncIndicators::unsetrsyncSendCost()
{
    rsyncSendCostIsSet_ = false;
}

int64_t NoSQLDrDateSyncIndicators::getRsyncMaxPushCost() const
{
    return rsyncMaxPushCost_;
}

void NoSQLDrDateSyncIndicators::setRsyncMaxPushCost(int64_t value)
{
    rsyncMaxPushCost_ = value;
    rsyncMaxPushCostIsSet_ = true;
}

bool NoSQLDrDateSyncIndicators::rsyncMaxPushCostIsSet() const
{
    return rsyncMaxPushCostIsSet_;
}

void NoSQLDrDateSyncIndicators::unsetrsyncMaxPushCost()
{
    rsyncMaxPushCostIsSet_ = false;
}

int64_t NoSQLDrDateSyncIndicators::getRsyncMaxSendCost() const
{
    return rsyncMaxSendCost_;
}

void NoSQLDrDateSyncIndicators::setRsyncMaxSendCost(int64_t value)
{
    rsyncMaxSendCost_ = value;
    rsyncMaxSendCostIsSet_ = true;
}

bool NoSQLDrDateSyncIndicators::rsyncMaxSendCostIsSet() const
{
    return rsyncMaxSendCostIsSet_;
}

void NoSQLDrDateSyncIndicators::unsetrsyncMaxSendCost()
{
    rsyncMaxSendCostIsSet_ = false;
}

int32_t NoSQLDrDateSyncIndicators::getRsyncStatus() const
{
    return rsyncStatus_;
}

void NoSQLDrDateSyncIndicators::setRsyncStatus(int32_t value)
{
    rsyncStatus_ = value;
    rsyncStatusIsSet_ = true;
}

bool NoSQLDrDateSyncIndicators::rsyncStatusIsSet() const
{
    return rsyncStatusIsSet_;
}

void NoSQLDrDateSyncIndicators::unsetrsyncStatus()
{
    rsyncStatusIsSet_ = false;
}

}
}
}
}
}


