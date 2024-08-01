

#include "huaweicloud/lts/v2/model/ListConsumerGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListConsumerGroupRequest::ListConsumerGroupRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    streamId_ = "";
    streamIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListConsumerGroupRequest::~ListConsumerGroupRequest() = default;

void ListConsumerGroupRequest::validate()
{
}

web::json::value ListConsumerGroupRequest::toJson() const
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
bool ListConsumerGroupRequest::fromJson(const web::json::value& val)
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


std::string ListConsumerGroupRequest::getGroupId() const
{
    return groupId_;
}

void ListConsumerGroupRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListConsumerGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListConsumerGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ListConsumerGroupRequest::getStreamId() const
{
    return streamId_;
}

void ListConsumerGroupRequest::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool ListConsumerGroupRequest::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void ListConsumerGroupRequest::unsetstreamId()
{
    streamIdIsSet_ = false;
}

std::string ListConsumerGroupRequest::getContentType() const
{
    return contentType_;
}

void ListConsumerGroupRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListConsumerGroupRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListConsumerGroupRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


