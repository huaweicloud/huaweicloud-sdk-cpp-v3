

#include "huaweicloud/lts/v2/model/ListDetailsConsumerGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListDetailsConsumerGroupRequest::ListDetailsConsumerGroupRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    streamId_ = "";
    streamIdIsSet_ = false;
    consumerGroupName_ = "";
    consumerGroupNameIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListDetailsConsumerGroupRequest::~ListDetailsConsumerGroupRequest() = default;

void ListDetailsConsumerGroupRequest::validate()
{
}

web::json::value ListDetailsConsumerGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(streamIdIsSet_) {
        val[utility::conversions::to_string_t("stream_id")] = ModelBase::toJson(streamId_);
    }
    if(consumerGroupNameIsSet_) {
        val[utility::conversions::to_string_t("consumer_group_name")] = ModelBase::toJson(consumerGroupName_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListDetailsConsumerGroupRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("consumer_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consumer_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsumerGroupName(refVal);
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


std::string ListDetailsConsumerGroupRequest::getGroupId() const
{
    return groupId_;
}

void ListDetailsConsumerGroupRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListDetailsConsumerGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListDetailsConsumerGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ListDetailsConsumerGroupRequest::getStreamId() const
{
    return streamId_;
}

void ListDetailsConsumerGroupRequest::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool ListDetailsConsumerGroupRequest::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void ListDetailsConsumerGroupRequest::unsetstreamId()
{
    streamIdIsSet_ = false;
}

std::string ListDetailsConsumerGroupRequest::getConsumerGroupName() const
{
    return consumerGroupName_;
}

void ListDetailsConsumerGroupRequest::setConsumerGroupName(const std::string& value)
{
    consumerGroupName_ = value;
    consumerGroupNameIsSet_ = true;
}

bool ListDetailsConsumerGroupRequest::consumerGroupNameIsSet() const
{
    return consumerGroupNameIsSet_;
}

void ListDetailsConsumerGroupRequest::unsetconsumerGroupName()
{
    consumerGroupNameIsSet_ = false;
}

std::string ListDetailsConsumerGroupRequest::getContentType() const
{
    return contentType_;
}

void ListDetailsConsumerGroupRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListDetailsConsumerGroupRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListDetailsConsumerGroupRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


