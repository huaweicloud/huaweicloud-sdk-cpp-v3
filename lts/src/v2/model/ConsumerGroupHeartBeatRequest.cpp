

#include "huaweicloud/lts/v2/model/ConsumerGroupHeartBeatRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ConsumerGroupHeartBeatRequest::ConsumerGroupHeartBeatRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    streamId_ = "";
    streamIdIsSet_ = false;
    consumerGroupName_ = "";
    consumerGroupNameIsSet_ = false;
    consumerName_ = "";
    consumerNameIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

ConsumerGroupHeartBeatRequest::~ConsumerGroupHeartBeatRequest() = default;

void ConsumerGroupHeartBeatRequest::validate()
{
}

web::json::value ConsumerGroupHeartBeatRequest::toJson() const
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
    if(consumerNameIsSet_) {
        val[utility::conversions::to_string_t("consumer_name")] = ModelBase::toJson(consumerName_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ConsumerGroupHeartBeatRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("consumer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consumer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsumerName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ConsumerGroupHeartBeatRequest::getGroupId() const
{
    return groupId_;
}

void ConsumerGroupHeartBeatRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ConsumerGroupHeartBeatRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ConsumerGroupHeartBeatRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ConsumerGroupHeartBeatRequest::getStreamId() const
{
    return streamId_;
}

void ConsumerGroupHeartBeatRequest::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool ConsumerGroupHeartBeatRequest::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void ConsumerGroupHeartBeatRequest::unsetstreamId()
{
    streamIdIsSet_ = false;
}

std::string ConsumerGroupHeartBeatRequest::getConsumerGroupName() const
{
    return consumerGroupName_;
}

void ConsumerGroupHeartBeatRequest::setConsumerGroupName(const std::string& value)
{
    consumerGroupName_ = value;
    consumerGroupNameIsSet_ = true;
}

bool ConsumerGroupHeartBeatRequest::consumerGroupNameIsSet() const
{
    return consumerGroupNameIsSet_;
}

void ConsumerGroupHeartBeatRequest::unsetconsumerGroupName()
{
    consumerGroupNameIsSet_ = false;
}

std::string ConsumerGroupHeartBeatRequest::getConsumerName() const
{
    return consumerName_;
}

void ConsumerGroupHeartBeatRequest::setConsumerName(const std::string& value)
{
    consumerName_ = value;
    consumerNameIsSet_ = true;
}

bool ConsumerGroupHeartBeatRequest::consumerNameIsSet() const
{
    return consumerNameIsSet_;
}

void ConsumerGroupHeartBeatRequest::unsetconsumerName()
{
    consumerNameIsSet_ = false;
}

std::string ConsumerGroupHeartBeatRequest::getContentType() const
{
    return contentType_;
}

void ConsumerGroupHeartBeatRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ConsumerGroupHeartBeatRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ConsumerGroupHeartBeatRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::vector<std::string>& ConsumerGroupHeartBeatRequest::getBody()
{
    return body_;
}

void ConsumerGroupHeartBeatRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ConsumerGroupHeartBeatRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ConsumerGroupHeartBeatRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


