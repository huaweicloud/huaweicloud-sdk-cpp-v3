

#include "huaweicloud/lts/v2/model/ShowCursorByTimeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowCursorByTimeRequest::ShowCursorByTimeRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    streamId_ = "";
    streamIdIsSet_ = false;
    shardId_ = "";
    shardIdIsSet_ = false;
    from_ = "";
    fromIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowCursorByTimeRequest::~ShowCursorByTimeRequest() = default;

void ShowCursorByTimeRequest::validate()
{
}

web::json::value ShowCursorByTimeRequest::toJson() const
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
    if(fromIsSet_) {
        val[utility::conversions::to_string_t("from")] = ModelBase::toJson(from_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ShowCursorByTimeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("from"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrom(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ShowCursorByTimeRequest::getGroupId() const
{
    return groupId_;
}

void ShowCursorByTimeRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowCursorByTimeRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowCursorByTimeRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ShowCursorByTimeRequest::getStreamId() const
{
    return streamId_;
}

void ShowCursorByTimeRequest::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool ShowCursorByTimeRequest::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void ShowCursorByTimeRequest::unsetstreamId()
{
    streamIdIsSet_ = false;
}

std::string ShowCursorByTimeRequest::getShardId() const
{
    return shardId_;
}

void ShowCursorByTimeRequest::setShardId(const std::string& value)
{
    shardId_ = value;
    shardIdIsSet_ = true;
}

bool ShowCursorByTimeRequest::shardIdIsSet() const
{
    return shardIdIsSet_;
}

void ShowCursorByTimeRequest::unsetshardId()
{
    shardIdIsSet_ = false;
}

std::string ShowCursorByTimeRequest::getFrom() const
{
    return from_;
}

void ShowCursorByTimeRequest::setFrom(const std::string& value)
{
    from_ = value;
    fromIsSet_ = true;
}

bool ShowCursorByTimeRequest::fromIsSet() const
{
    return fromIsSet_;
}

void ShowCursorByTimeRequest::unsetfrom()
{
    fromIsSet_ = false;
}

std::string ShowCursorByTimeRequest::getContentType() const
{
    return contentType_;
}

void ShowCursorByTimeRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowCursorByTimeRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowCursorByTimeRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


