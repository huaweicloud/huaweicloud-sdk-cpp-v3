

#include "huaweicloud/lts/v2/model/CreateConsumerGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateConsumerGroupResponse::CreateConsumerGroupResponse()
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

CreateConsumerGroupResponse::~CreateConsumerGroupResponse() = default;

void CreateConsumerGroupResponse::validate()
{
}

web::json::value CreateConsumerGroupResponse::toJson() const
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
bool CreateConsumerGroupResponse::fromJson(const web::json::value& val)
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


std::string CreateConsumerGroupResponse::getConsumerGroupName() const
{
    return consumerGroupName_;
}

void CreateConsumerGroupResponse::setConsumerGroupName(const std::string& value)
{
    consumerGroupName_ = value;
    consumerGroupNameIsSet_ = true;
}

bool CreateConsumerGroupResponse::consumerGroupNameIsSet() const
{
    return consumerGroupNameIsSet_;
}

void CreateConsumerGroupResponse::unsetconsumerGroupName()
{
    consumerGroupNameIsSet_ = false;
}

int64_t CreateConsumerGroupResponse::getCreateTime() const
{
    return createTime_;
}

void CreateConsumerGroupResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateConsumerGroupResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateConsumerGroupResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateConsumerGroupResponse::getLogGroupId() const
{
    return logGroupId_;
}

void CreateConsumerGroupResponse::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool CreateConsumerGroupResponse::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void CreateConsumerGroupResponse::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string CreateConsumerGroupResponse::getLogStreamId() const
{
    return logStreamId_;
}

void CreateConsumerGroupResponse::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool CreateConsumerGroupResponse::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void CreateConsumerGroupResponse::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string CreateConsumerGroupResponse::getProjectId() const
{
    return projectId_;
}

void CreateConsumerGroupResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateConsumerGroupResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateConsumerGroupResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t CreateConsumerGroupResponse::getTimeout() const
{
    return timeout_;
}

void CreateConsumerGroupResponse::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool CreateConsumerGroupResponse::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void CreateConsumerGroupResponse::unsettimeout()
{
    timeoutIsSet_ = false;
}

}
}
}
}
}


