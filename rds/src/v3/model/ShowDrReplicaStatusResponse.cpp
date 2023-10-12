

#include "huaweicloud/rds/v3/model/ShowDrReplicaStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowDrReplicaStatusResponse::ShowDrReplicaStatusResponse()
{
    replicaState_ = "";
    replicaStateIsSet_ = false;
    walWriteReceiveDelayInMb_ = "";
    walWriteReceiveDelayInMbIsSet_ = false;
    walWriteReplayDelayInMb_ = "";
    walWriteReplayDelayInMbIsSet_ = false;
    walReceiveReplayDelayInMs_ = "";
    walReceiveReplayDelayInMsIsSet_ = false;
}

ShowDrReplicaStatusResponse::~ShowDrReplicaStatusResponse() = default;

void ShowDrReplicaStatusResponse::validate()
{
}

web::json::value ShowDrReplicaStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

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

    return val;
}
bool ShowDrReplicaStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string ShowDrReplicaStatusResponse::getReplicaState() const
{
    return replicaState_;
}

void ShowDrReplicaStatusResponse::setReplicaState(const std::string& value)
{
    replicaState_ = value;
    replicaStateIsSet_ = true;
}

bool ShowDrReplicaStatusResponse::replicaStateIsSet() const
{
    return replicaStateIsSet_;
}

void ShowDrReplicaStatusResponse::unsetreplicaState()
{
    replicaStateIsSet_ = false;
}

std::string ShowDrReplicaStatusResponse::getWalWriteReceiveDelayInMb() const
{
    return walWriteReceiveDelayInMb_;
}

void ShowDrReplicaStatusResponse::setWalWriteReceiveDelayInMb(const std::string& value)
{
    walWriteReceiveDelayInMb_ = value;
    walWriteReceiveDelayInMbIsSet_ = true;
}

bool ShowDrReplicaStatusResponse::walWriteReceiveDelayInMbIsSet() const
{
    return walWriteReceiveDelayInMbIsSet_;
}

void ShowDrReplicaStatusResponse::unsetwalWriteReceiveDelayInMb()
{
    walWriteReceiveDelayInMbIsSet_ = false;
}

std::string ShowDrReplicaStatusResponse::getWalWriteReplayDelayInMb() const
{
    return walWriteReplayDelayInMb_;
}

void ShowDrReplicaStatusResponse::setWalWriteReplayDelayInMb(const std::string& value)
{
    walWriteReplayDelayInMb_ = value;
    walWriteReplayDelayInMbIsSet_ = true;
}

bool ShowDrReplicaStatusResponse::walWriteReplayDelayInMbIsSet() const
{
    return walWriteReplayDelayInMbIsSet_;
}

void ShowDrReplicaStatusResponse::unsetwalWriteReplayDelayInMb()
{
    walWriteReplayDelayInMbIsSet_ = false;
}

std::string ShowDrReplicaStatusResponse::getWalReceiveReplayDelayInMs() const
{
    return walReceiveReplayDelayInMs_;
}

void ShowDrReplicaStatusResponse::setWalReceiveReplayDelayInMs(const std::string& value)
{
    walReceiveReplayDelayInMs_ = value;
    walReceiveReplayDelayInMsIsSet_ = true;
}

bool ShowDrReplicaStatusResponse::walReceiveReplayDelayInMsIsSet() const
{
    return walReceiveReplayDelayInMsIsSet_;
}

void ShowDrReplicaStatusResponse::unsetwalReceiveReplayDelayInMs()
{
    walReceiveReplayDelayInMsIsSet_ = false;
}

}
}
}
}
}


