

#include "huaweicloud/lts/v2/model/ListLogStreamIndexRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListLogStreamIndexRequest::ListLogStreamIndexRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    streamId_ = "";
    streamIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListLogStreamIndexRequest::~ListLogStreamIndexRequest() = default;

void ListLogStreamIndexRequest::validate()
{
}

web::json::value ListLogStreamIndexRequest::toJson() const
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
bool ListLogStreamIndexRequest::fromJson(const web::json::value& val)
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


std::string ListLogStreamIndexRequest::getGroupId() const
{
    return groupId_;
}

void ListLogStreamIndexRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListLogStreamIndexRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListLogStreamIndexRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ListLogStreamIndexRequest::getStreamId() const
{
    return streamId_;
}

void ListLogStreamIndexRequest::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool ListLogStreamIndexRequest::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void ListLogStreamIndexRequest::unsetstreamId()
{
    streamIdIsSet_ = false;
}

std::string ListLogStreamIndexRequest::getContentType() const
{
    return contentType_;
}

void ListLogStreamIndexRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListLogStreamIndexRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListLogStreamIndexRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


