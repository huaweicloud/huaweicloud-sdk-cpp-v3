

#include "huaweicloud/lts/v2/model/CreateConsumerGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateConsumerGroupRequest::CreateConsumerGroupRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    streamId_ = "";
    streamIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateConsumerGroupRequest::~CreateConsumerGroupRequest() = default;

void CreateConsumerGroupRequest::validate()
{
}

web::json::value CreateConsumerGroupRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateConsumerGroupRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ConsumerGroupInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateConsumerGroupRequest::getGroupId() const
{
    return groupId_;
}

void CreateConsumerGroupRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CreateConsumerGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CreateConsumerGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string CreateConsumerGroupRequest::getStreamId() const
{
    return streamId_;
}

void CreateConsumerGroupRequest::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool CreateConsumerGroupRequest::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void CreateConsumerGroupRequest::unsetstreamId()
{
    streamIdIsSet_ = false;
}

std::string CreateConsumerGroupRequest::getContentType() const
{
    return contentType_;
}

void CreateConsumerGroupRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateConsumerGroupRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateConsumerGroupRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

ConsumerGroupInfo CreateConsumerGroupRequest::getBody() const
{
    return body_;
}

void CreateConsumerGroupRequest::setBody(const ConsumerGroupInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateConsumerGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateConsumerGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


