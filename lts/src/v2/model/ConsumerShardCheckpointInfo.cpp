

#include "huaweicloud/lts/v2/model/ConsumerShardCheckpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ConsumerShardCheckpointInfo::ConsumerShardCheckpointInfo()
{
    shardId_ = "";
    shardIdIsSet_ = false;
    checkpoint_ = 0L;
    checkpointIsSet_ = false;
}

ConsumerShardCheckpointInfo::~ConsumerShardCheckpointInfo() = default;

void ConsumerShardCheckpointInfo::validate()
{
}

web::json::value ConsumerShardCheckpointInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(shardIdIsSet_) {
        val[utility::conversions::to_string_t("shard_id")] = ModelBase::toJson(shardId_);
    }
    if(checkpointIsSet_) {
        val[utility::conversions::to_string_t("checkpoint")] = ModelBase::toJson(checkpoint_);
    }

    return val;
}
bool ConsumerShardCheckpointInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("shard_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shard_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShardId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("checkpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checkpoint"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckpoint(refVal);
        }
    }
    return ok;
}


std::string ConsumerShardCheckpointInfo::getShardId() const
{
    return shardId_;
}

void ConsumerShardCheckpointInfo::setShardId(const std::string& value)
{
    shardId_ = value;
    shardIdIsSet_ = true;
}

bool ConsumerShardCheckpointInfo::shardIdIsSet() const
{
    return shardIdIsSet_;
}

void ConsumerShardCheckpointInfo::unsetshardId()
{
    shardIdIsSet_ = false;
}

int64_t ConsumerShardCheckpointInfo::getCheckpoint() const
{
    return checkpoint_;
}

void ConsumerShardCheckpointInfo::setCheckpoint(int64_t value)
{
    checkpoint_ = value;
    checkpointIsSet_ = true;
}

bool ConsumerShardCheckpointInfo::checkpointIsSet() const
{
    return checkpointIsSet_;
}

void ConsumerShardCheckpointInfo::unsetcheckpoint()
{
    checkpointIsSet_ = false;
}

}
}
}
}
}


