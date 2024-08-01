

#include "huaweicloud/lts/v2/model/ShowLogStreamShardsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowLogStreamShardsRequest::ShowLogStreamShardsRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    streamId_ = "";
    streamIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowLogStreamShardsRequest::~ShowLogStreamShardsRequest() = default;

void ShowLogStreamShardsRequest::validate()
{
}

web::json::value ShowLogStreamShardsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(streamIdIsSet_) {
        val[utility::conversions::to_string_t("stream_id")] = ModelBase::toJson(streamId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ShowLogStreamShardsRequest::fromJson(const web::json::value& val)
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


std::string ShowLogStreamShardsRequest::getGroupId() const
{
    return groupId_;
}

void ShowLogStreamShardsRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowLogStreamShardsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowLogStreamShardsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ShowLogStreamShardsRequest::getStreamId() const
{
    return streamId_;
}

void ShowLogStreamShardsRequest::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool ShowLogStreamShardsRequest::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void ShowLogStreamShardsRequest::unsetstreamId()
{
    streamIdIsSet_ = false;
}

std::string ShowLogStreamShardsRequest::getContentType() const
{
    return contentType_;
}

void ShowLogStreamShardsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowLogStreamShardsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowLogStreamShardsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


