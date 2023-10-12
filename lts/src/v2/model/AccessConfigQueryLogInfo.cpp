

#include "huaweicloud/lts/v2/model/AccessConfigQueryLogInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigQueryLogInfo::AccessConfigQueryLogInfo()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
}

AccessConfigQueryLogInfo::~AccessConfigQueryLogInfo() = default;

void AccessConfigQueryLogInfo::validate()
{
}

web::json::value AccessConfigQueryLogInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(logGroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_group_name")] = ModelBase::toJson(logGroupName_);
    }
    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }

    return val;
}
bool AccessConfigQueryLogInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("log_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamName(refVal);
        }
    }
    return ok;
}


std::string AccessConfigQueryLogInfo::getLogGroupId() const
{
    return logGroupId_;
}

void AccessConfigQueryLogInfo::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool AccessConfigQueryLogInfo::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void AccessConfigQueryLogInfo::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string AccessConfigQueryLogInfo::getLogStreamId() const
{
    return logStreamId_;
}

void AccessConfigQueryLogInfo::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool AccessConfigQueryLogInfo::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void AccessConfigQueryLogInfo::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string AccessConfigQueryLogInfo::getLogGroupName() const
{
    return logGroupName_;
}

void AccessConfigQueryLogInfo::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool AccessConfigQueryLogInfo::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void AccessConfigQueryLogInfo::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string AccessConfigQueryLogInfo::getLogStreamName() const
{
    return logStreamName_;
}

void AccessConfigQueryLogInfo::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool AccessConfigQueryLogInfo::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void AccessConfigQueryLogInfo::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

}
}
}
}
}


