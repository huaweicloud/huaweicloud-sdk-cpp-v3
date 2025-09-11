

#include "huaweicloud/functiongraph/v2/model/ShowLtsLogDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowLtsLogDetailsResponse::ShowLtsLogDetailsResponse()
{
    groupName_ = "";
    groupNameIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    streamId_ = "";
    streamIdIsSet_ = false;
    streamName_ = "";
    streamNameIsSet_ = false;
}

ShowLtsLogDetailsResponse::~ShowLtsLogDetailsResponse() = default;

void ShowLtsLogDetailsResponse::validate()
{
}

web::json::value ShowLtsLogDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(streamIdIsSet_) {
        val[utility::conversions::to_string_t("stream_id")] = ModelBase::toJson(streamId_);
    }
    if(streamNameIsSet_) {
        val[utility::conversions::to_string_t("stream_name")] = ModelBase::toJson(streamName_);
    }

    return val;
}
bool ShowLtsLogDetailsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamId(refVal);
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
    return ok;
}


std::string ShowLtsLogDetailsResponse::getGroupName() const
{
    return groupName_;
}

void ShowLtsLogDetailsResponse::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool ShowLtsLogDetailsResponse::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void ShowLtsLogDetailsResponse::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string ShowLtsLogDetailsResponse::getGroupId() const
{
    return groupId_;
}

void ShowLtsLogDetailsResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowLtsLogDetailsResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowLtsLogDetailsResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ShowLtsLogDetailsResponse::getStreamId() const
{
    return streamId_;
}

void ShowLtsLogDetailsResponse::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool ShowLtsLogDetailsResponse::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void ShowLtsLogDetailsResponse::unsetstreamId()
{
    streamIdIsSet_ = false;
}

std::string ShowLtsLogDetailsResponse::getStreamName() const
{
    return streamName_;
}

void ShowLtsLogDetailsResponse::setStreamName(const std::string& value)
{
    streamName_ = value;
    streamNameIsSet_ = true;
}

bool ShowLtsLogDetailsResponse::streamNameIsSet() const
{
    return streamNameIsSet_;
}

void ShowLtsLogDetailsResponse::unsetstreamName()
{
    streamNameIsSet_ = false;
}

}
}
}
}
}


