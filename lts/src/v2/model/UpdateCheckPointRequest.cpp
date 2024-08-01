

#include "huaweicloud/lts/v2/model/UpdateCheckPointRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateCheckPointRequest::UpdateCheckPointRequest()
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

UpdateCheckPointRequest::~UpdateCheckPointRequest() = default;

void UpdateCheckPointRequest::validate()
{
}

web::json::value UpdateCheckPointRequest::toJson() const
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
bool UpdateCheckPointRequest::fromJson(const web::json::value& val)
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
            std::vector<ConsumerShardCheckpointInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateCheckPointRequest::getGroupId() const
{
    return groupId_;
}

void UpdateCheckPointRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateCheckPointRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateCheckPointRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string UpdateCheckPointRequest::getStreamId() const
{
    return streamId_;
}

void UpdateCheckPointRequest::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool UpdateCheckPointRequest::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void UpdateCheckPointRequest::unsetstreamId()
{
    streamIdIsSet_ = false;
}

std::string UpdateCheckPointRequest::getConsumerGroupName() const
{
    return consumerGroupName_;
}

void UpdateCheckPointRequest::setConsumerGroupName(const std::string& value)
{
    consumerGroupName_ = value;
    consumerGroupNameIsSet_ = true;
}

bool UpdateCheckPointRequest::consumerGroupNameIsSet() const
{
    return consumerGroupNameIsSet_;
}

void UpdateCheckPointRequest::unsetconsumerGroupName()
{
    consumerGroupNameIsSet_ = false;
}

std::string UpdateCheckPointRequest::getConsumerName() const
{
    return consumerName_;
}

void UpdateCheckPointRequest::setConsumerName(const std::string& value)
{
    consumerName_ = value;
    consumerNameIsSet_ = true;
}

bool UpdateCheckPointRequest::consumerNameIsSet() const
{
    return consumerNameIsSet_;
}

void UpdateCheckPointRequest::unsetconsumerName()
{
    consumerNameIsSet_ = false;
}

std::string UpdateCheckPointRequest::getContentType() const
{
    return contentType_;
}

void UpdateCheckPointRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateCheckPointRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateCheckPointRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::vector<ConsumerShardCheckpointInfo>& UpdateCheckPointRequest::getBody()
{
    return body_;
}

void UpdateCheckPointRequest::setBody(const std::vector<ConsumerShardCheckpointInfo>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateCheckPointRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateCheckPointRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


