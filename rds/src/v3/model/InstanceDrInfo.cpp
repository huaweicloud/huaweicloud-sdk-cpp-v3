

#include "huaweicloud/rds/v3/model/InstanceDrInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




InstanceDrInfo::InstanceDrInfo()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    failedMessage_ = "";
    failedMessageIsSet_ = false;
    replicaState_ = "";
    replicaStateIsSet_ = false;
    walWriteReceiveDelayInMb_ = "";
    walWriteReceiveDelayInMbIsSet_ = false;
    walWriteReplayDelayInMb_ = "";
    walWriteReplayDelayInMbIsSet_ = false;
    walReceiveReplayDelayInMs_ = "";
    walReceiveReplayDelayInMsIsSet_ = false;
    masterInstanceId_ = "";
    masterInstanceIdIsSet_ = false;
    masterRegion_ = "";
    masterRegionIsSet_ = false;
    slaveInstanceId_ = "";
    slaveInstanceIdIsSet_ = false;
    slaveRegion_ = "";
    slaveRegionIsSet_ = false;
    time_ = 0L;
    timeIsSet_ = false;
}

InstanceDrInfo::~InstanceDrInfo() = default;

void InstanceDrInfo::validate()
{
}

web::json::value InstanceDrInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(failedMessageIsSet_) {
        val[utility::conversions::to_string_t("failed_message")] = ModelBase::toJson(failedMessage_);
    }
    if(replicaStateIsSet_) {
        val[utility::conversions::to_string_t("replica_state")] = ModelBase::toJson(replicaState_);
    }
    if(walWriteReceiveDelayInMbIsSet_) {
        val[utility::conversions::to_string_t("wal_write_receive_delay_in_mb")] = ModelBase::toJson(walWriteReceiveDelayInMb_);
    }
    if(walWriteReplayDelayInMbIsSet_) {
        val[utility::conversions::to_string_t("wal_write_replay_delay_in_mb")] = ModelBase::toJson(walWriteReplayDelayInMb_);
    }
    if(walReceiveReplayDelayInMsIsSet_) {
        val[utility::conversions::to_string_t("wal_receive_replay_delay_in_ms")] = ModelBase::toJson(walReceiveReplayDelayInMs_);
    }
    if(masterInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("master_instance_id")] = ModelBase::toJson(masterInstanceId_);
    }
    if(masterRegionIsSet_) {
        val[utility::conversions::to_string_t("master_region")] = ModelBase::toJson(masterRegion_);
    }
    if(slaveInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("slave_instance_id")] = ModelBase::toJson(slaveInstanceId_);
    }
    if(slaveRegionIsSet_) {
        val[utility::conversions::to_string_t("slave_region")] = ModelBase::toJson(slaveRegion_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}
bool InstanceDrInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replica_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replica_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicaState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wal_write_receive_delay_in_mb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wal_write_receive_delay_in_mb"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWalWriteReceiveDelayInMb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wal_write_replay_delay_in_mb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wal_write_replay_delay_in_mb"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWalWriteReplayDelayInMb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wal_receive_replay_delay_in_ms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wal_receive_replay_delay_in_ms"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWalReceiveReplayDelayInMs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    return ok;
}


std::string InstanceDrInfo::getId() const
{
    return id_;
}

void InstanceDrInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool InstanceDrInfo::idIsSet() const
{
    return idIsSet_;
}

void InstanceDrInfo::unsetid()
{
    idIsSet_ = false;
}

std::string InstanceDrInfo::getStatus() const
{
    return status_;
}

void InstanceDrInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InstanceDrInfo::statusIsSet() const
{
    return statusIsSet_;
}

void InstanceDrInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string InstanceDrInfo::getFailedMessage() const
{
    return failedMessage_;
}

void InstanceDrInfo::setFailedMessage(const std::string& value)
{
    failedMessage_ = value;
    failedMessageIsSet_ = true;
}

bool InstanceDrInfo::failedMessageIsSet() const
{
    return failedMessageIsSet_;
}

void InstanceDrInfo::unsetfailedMessage()
{
    failedMessageIsSet_ = false;
}

std::string InstanceDrInfo::getReplicaState() const
{
    return replicaState_;
}

void InstanceDrInfo::setReplicaState(const std::string& value)
{
    replicaState_ = value;
    replicaStateIsSet_ = true;
}

bool InstanceDrInfo::replicaStateIsSet() const
{
    return replicaStateIsSet_;
}

void InstanceDrInfo::unsetreplicaState()
{
    replicaStateIsSet_ = false;
}

std::string InstanceDrInfo::getWalWriteReceiveDelayInMb() const
{
    return walWriteReceiveDelayInMb_;
}

void InstanceDrInfo::setWalWriteReceiveDelayInMb(const std::string& value)
{
    walWriteReceiveDelayInMb_ = value;
    walWriteReceiveDelayInMbIsSet_ = true;
}

bool InstanceDrInfo::walWriteReceiveDelayInMbIsSet() const
{
    return walWriteReceiveDelayInMbIsSet_;
}

void InstanceDrInfo::unsetwalWriteReceiveDelayInMb()
{
    walWriteReceiveDelayInMbIsSet_ = false;
}

std::string InstanceDrInfo::getWalWriteReplayDelayInMb() const
{
    return walWriteReplayDelayInMb_;
}

void InstanceDrInfo::setWalWriteReplayDelayInMb(const std::string& value)
{
    walWriteReplayDelayInMb_ = value;
    walWriteReplayDelayInMbIsSet_ = true;
}

bool InstanceDrInfo::walWriteReplayDelayInMbIsSet() const
{
    return walWriteReplayDelayInMbIsSet_;
}

void InstanceDrInfo::unsetwalWriteReplayDelayInMb()
{
    walWriteReplayDelayInMbIsSet_ = false;
}

std::string InstanceDrInfo::getWalReceiveReplayDelayInMs() const
{
    return walReceiveReplayDelayInMs_;
}

void InstanceDrInfo::setWalReceiveReplayDelayInMs(const std::string& value)
{
    walReceiveReplayDelayInMs_ = value;
    walReceiveReplayDelayInMsIsSet_ = true;
}

bool InstanceDrInfo::walReceiveReplayDelayInMsIsSet() const
{
    return walReceiveReplayDelayInMsIsSet_;
}

void InstanceDrInfo::unsetwalReceiveReplayDelayInMs()
{
    walReceiveReplayDelayInMsIsSet_ = false;
}

std::string InstanceDrInfo::getMasterInstanceId() const
{
    return masterInstanceId_;
}

void InstanceDrInfo::setMasterInstanceId(const std::string& value)
{
    masterInstanceId_ = value;
    masterInstanceIdIsSet_ = true;
}

bool InstanceDrInfo::masterInstanceIdIsSet() const
{
    return masterInstanceIdIsSet_;
}

void InstanceDrInfo::unsetmasterInstanceId()
{
    masterInstanceIdIsSet_ = false;
}

std::string InstanceDrInfo::getMasterRegion() const
{
    return masterRegion_;
}

void InstanceDrInfo::setMasterRegion(const std::string& value)
{
    masterRegion_ = value;
    masterRegionIsSet_ = true;
}

bool InstanceDrInfo::masterRegionIsSet() const
{
    return masterRegionIsSet_;
}

void InstanceDrInfo::unsetmasterRegion()
{
    masterRegionIsSet_ = false;
}

std::string InstanceDrInfo::getSlaveInstanceId() const
{
    return slaveInstanceId_;
}

void InstanceDrInfo::setSlaveInstanceId(const std::string& value)
{
    slaveInstanceId_ = value;
    slaveInstanceIdIsSet_ = true;
}

bool InstanceDrInfo::slaveInstanceIdIsSet() const
{
    return slaveInstanceIdIsSet_;
}

void InstanceDrInfo::unsetslaveInstanceId()
{
    slaveInstanceIdIsSet_ = false;
}

std::string InstanceDrInfo::getSlaveRegion() const
{
    return slaveRegion_;
}

void InstanceDrInfo::setSlaveRegion(const std::string& value)
{
    slaveRegion_ = value;
    slaveRegionIsSet_ = true;
}

bool InstanceDrInfo::slaveRegionIsSet() const
{
    return slaveRegionIsSet_;
}

void InstanceDrInfo::unsetslaveRegion()
{
    slaveRegionIsSet_ = false;
}

int64_t InstanceDrInfo::getTime() const
{
    return time_;
}

void InstanceDrInfo::setTime(int64_t value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool InstanceDrInfo::timeIsSet() const
{
    return timeIsSet_;
}

void InstanceDrInfo::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


