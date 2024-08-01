

#include "huaweicloud/lts/v2/model/ConsumerCheckpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ConsumerCheckpointInfo::ConsumerCheckpointInfo()
{
    checkpoint_ = 0L;
    checkpointIsSet_ = false;
    consumerGroupName_ = "";
    consumerGroupNameIsSet_ = false;
    consumerName_ = "";
    consumerNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    shardId_ = "";
    shardIdIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
}

ConsumerCheckpointInfo::~ConsumerCheckpointInfo() = default;

void ConsumerCheckpointInfo::validate()
{
}

web::json::value ConsumerCheckpointInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkpointIsSet_) {
        val[utility::conversions::to_string_t("checkpoint")] = ModelBase::toJson(checkpoint_);
    }
    if(consumerGroupNameIsSet_) {
        val[utility::conversions::to_string_t("consumer_group_name")] = ModelBase::toJson(consumerGroupName_);
    }
    if(consumerNameIsSet_) {
        val[utility::conversions::to_string_t("consumer_name")] = ModelBase::toJson(consumerName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(shardIdIsSet_) {
        val[utility::conversions::to_string_t("shard_id")] = ModelBase::toJson(shardId_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool ConsumerCheckpointInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("checkpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checkpoint"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("consumer_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consumer_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsumerGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("consumer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consumer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsumerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shard_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shard_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShardId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


int64_t ConsumerCheckpointInfo::getCheckpoint() const
{
    return checkpoint_;
}

void ConsumerCheckpointInfo::setCheckpoint(int64_t value)
{
    checkpoint_ = value;
    checkpointIsSet_ = true;
}

bool ConsumerCheckpointInfo::checkpointIsSet() const
{
    return checkpointIsSet_;
}

void ConsumerCheckpointInfo::unsetcheckpoint()
{
    checkpointIsSet_ = false;
}

std::string ConsumerCheckpointInfo::getConsumerGroupName() const
{
    return consumerGroupName_;
}

void ConsumerCheckpointInfo::setConsumerGroupName(const std::string& value)
{
    consumerGroupName_ = value;
    consumerGroupNameIsSet_ = true;
}

bool ConsumerCheckpointInfo::consumerGroupNameIsSet() const
{
    return consumerGroupNameIsSet_;
}

void ConsumerCheckpointInfo::unsetconsumerGroupName()
{
    consumerGroupNameIsSet_ = false;
}

std::string ConsumerCheckpointInfo::getConsumerName() const
{
    return consumerName_;
}

void ConsumerCheckpointInfo::setConsumerName(const std::string& value)
{
    consumerName_ = value;
    consumerNameIsSet_ = true;
}

bool ConsumerCheckpointInfo::consumerNameIsSet() const
{
    return consumerNameIsSet_;
}

void ConsumerCheckpointInfo::unsetconsumerName()
{
    consumerNameIsSet_ = false;
}

std::string ConsumerCheckpointInfo::getProjectId() const
{
    return projectId_;
}

void ConsumerCheckpointInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ConsumerCheckpointInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ConsumerCheckpointInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ConsumerCheckpointInfo::getShardId() const
{
    return shardId_;
}

void ConsumerCheckpointInfo::setShardId(const std::string& value)
{
    shardId_ = value;
    shardIdIsSet_ = true;
}

bool ConsumerCheckpointInfo::shardIdIsSet() const
{
    return shardIdIsSet_;
}

void ConsumerCheckpointInfo::unsetshardId()
{
    shardIdIsSet_ = false;
}

int64_t ConsumerCheckpointInfo::getUpdateTime() const
{
    return updateTime_;
}

void ConsumerCheckpointInfo::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ConsumerCheckpointInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ConsumerCheckpointInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


