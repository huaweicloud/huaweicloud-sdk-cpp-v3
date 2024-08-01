

#include "huaweicloud/lts/v2/model/ConsumerGroupInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ConsumerGroupInfo::ConsumerGroupInfo()
{
    consumerGroupName_ = "";
    consumerGroupNameIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    timeout_ = 0;
    timeoutIsSet_ = false;
}

ConsumerGroupInfo::~ConsumerGroupInfo() = default;

void ConsumerGroupInfo::validate()
{
}

web::json::value ConsumerGroupInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(consumerGroupNameIsSet_) {
        val[utility::conversions::to_string_t("consumer_group_name")] = ModelBase::toJson(consumerGroupName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(timeoutIsSet_) {
        val[utility::conversions::to_string_t("timeout")] = ModelBase::toJson(timeout_);
    }

    return val;
}
bool ConsumerGroupInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("consumer_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consumer_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsumerGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeout(refVal);
        }
    }
    return ok;
}


std::string ConsumerGroupInfo::getConsumerGroupName() const
{
    return consumerGroupName_;
}

void ConsumerGroupInfo::setConsumerGroupName(const std::string& value)
{
    consumerGroupName_ = value;
    consumerGroupNameIsSet_ = true;
}

bool ConsumerGroupInfo::consumerGroupNameIsSet() const
{
    return consumerGroupNameIsSet_;
}

void ConsumerGroupInfo::unsetconsumerGroupName()
{
    consumerGroupNameIsSet_ = false;
}

int64_t ConsumerGroupInfo::getCreateTime() const
{
    return createTime_;
}

void ConsumerGroupInfo::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ConsumerGroupInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ConsumerGroupInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ConsumerGroupInfo::getLogGroupId() const
{
    return logGroupId_;
}

void ConsumerGroupInfo::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool ConsumerGroupInfo::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void ConsumerGroupInfo::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string ConsumerGroupInfo::getLogStreamId() const
{
    return logStreamId_;
}

void ConsumerGroupInfo::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool ConsumerGroupInfo::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void ConsumerGroupInfo::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string ConsumerGroupInfo::getProjectId() const
{
    return projectId_;
}

void ConsumerGroupInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ConsumerGroupInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ConsumerGroupInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ConsumerGroupInfo::getTimeout() const
{
    return timeout_;
}

void ConsumerGroupInfo::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool ConsumerGroupInfo::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void ConsumerGroupInfo::unsettimeout()
{
    timeoutIsSet_ = false;
}

}
}
}
}
}


