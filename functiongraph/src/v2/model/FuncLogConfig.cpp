

#include "huaweicloud/functiongraph/v2/model/FuncLogConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




FuncLogConfig::FuncLogConfig()
{
    groupName_ = "";
    groupNameIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    streamName_ = "";
    streamNameIsSet_ = false;
    streamId_ = "";
    streamIdIsSet_ = false;
}

FuncLogConfig::~FuncLogConfig() = default;

void FuncLogConfig::validate()
{
}

web::json::value FuncLogConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(streamNameIsSet_) {
        val[utility::conversions::to_string_t("stream_name")] = ModelBase::toJson(streamName_);
    }
    if(streamIdIsSet_) {
        val[utility::conversions::to_string_t("stream_id")] = ModelBase::toJson(streamId_);
    }

    return val;
}
bool FuncLogConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamId(refVal);
        }
    }
    return ok;
}


std::string FuncLogConfig::getGroupName() const
{
    return groupName_;
}

void FuncLogConfig::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool FuncLogConfig::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void FuncLogConfig::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string FuncLogConfig::getGroupId() const
{
    return groupId_;
}

void FuncLogConfig::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool FuncLogConfig::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void FuncLogConfig::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string FuncLogConfig::getStreamName() const
{
    return streamName_;
}

void FuncLogConfig::setStreamName(const std::string& value)
{
    streamName_ = value;
    streamNameIsSet_ = true;
}

bool FuncLogConfig::streamNameIsSet() const
{
    return streamNameIsSet_;
}

void FuncLogConfig::unsetstreamName()
{
    streamNameIsSet_ = false;
}

std::string FuncLogConfig::getStreamId() const
{
    return streamId_;
}

void FuncLogConfig::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool FuncLogConfig::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void FuncLogConfig::unsetstreamId()
{
    streamIdIsSet_ = false;
}

}
}
}
}
}


