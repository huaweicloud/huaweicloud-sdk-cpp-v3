

#include "huaweicloud/lts/v2/model/ShowCursorTimeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowCursorTimeRequest::ShowCursorTimeRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    streamId_ = "";
    streamIdIsSet_ = false;
    shardId_ = "";
    shardIdIsSet_ = false;
    cursor_ = "";
    cursorIsSet_ = false;
}

ShowCursorTimeRequest::~ShowCursorTimeRequest() = default;

void ShowCursorTimeRequest::validate()
{
}

web::json::value ShowCursorTimeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(streamIdIsSet_) {
        val[utility::conversions::to_string_t("stream_id")] = ModelBase::toJson(streamId_);
    }
    if(shardIdIsSet_) {
        val[utility::conversions::to_string_t("shard_id")] = ModelBase::toJson(shardId_);
    }
    if(cursorIsSet_) {
        val[utility::conversions::to_string_t("cursor")] = ModelBase::toJson(cursor_);
    }

    return val;
}
bool ShowCursorTimeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("shard_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shard_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShardId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cursor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cursor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCursor(refVal);
        }
    }
    return ok;
}


std::string ShowCursorTimeRequest::getGroupId() const
{
    return groupId_;
}

void ShowCursorTimeRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowCursorTimeRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowCursorTimeRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ShowCursorTimeRequest::getStreamId() const
{
    return streamId_;
}

void ShowCursorTimeRequest::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool ShowCursorTimeRequest::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void ShowCursorTimeRequest::unsetstreamId()
{
    streamIdIsSet_ = false;
}

std::string ShowCursorTimeRequest::getShardId() const
{
    return shardId_;
}

void ShowCursorTimeRequest::setShardId(const std::string& value)
{
    shardId_ = value;
    shardIdIsSet_ = true;
}

bool ShowCursorTimeRequest::shardIdIsSet() const
{
    return shardIdIsSet_;
}

void ShowCursorTimeRequest::unsetshardId()
{
    shardIdIsSet_ = false;
}

std::string ShowCursorTimeRequest::getCursor() const
{
    return cursor_;
}

void ShowCursorTimeRequest::setCursor(const std::string& value)
{
    cursor_ = value;
    cursorIsSet_ = true;
}

bool ShowCursorTimeRequest::cursorIsSet() const
{
    return cursorIsSet_;
}

void ShowCursorTimeRequest::unsetcursor()
{
    cursorIsSet_ = false;
}

}
}
}
}
}


