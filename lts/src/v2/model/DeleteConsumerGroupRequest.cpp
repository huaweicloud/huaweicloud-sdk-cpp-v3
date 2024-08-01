

#include "huaweicloud/lts/v2/model/DeleteConsumerGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteConsumerGroupRequest::DeleteConsumerGroupRequest()
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

DeleteConsumerGroupRequest::~DeleteConsumerGroupRequest() = default;

void DeleteConsumerGroupRequest::validate()
{
}

web::json::value DeleteConsumerGroupRequest::toJson() const
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
bool DeleteConsumerGroupRequest::fromJson(const web::json::value& val)
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


std::string DeleteConsumerGroupRequest::getGroupId() const
{
    return groupId_;
}

void DeleteConsumerGroupRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeleteConsumerGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeleteConsumerGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string DeleteConsumerGroupRequest::getStreamId() const
{
    return streamId_;
}

void DeleteConsumerGroupRequest::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool DeleteConsumerGroupRequest::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void DeleteConsumerGroupRequest::unsetstreamId()
{
    streamIdIsSet_ = false;
}

std::string DeleteConsumerGroupRequest::getConsumerGroupName() const
{
    return consumerGroupName_;
}

void DeleteConsumerGroupRequest::setConsumerGroupName(const std::string& value)
{
    consumerGroupName_ = value;
    consumerGroupNameIsSet_ = true;
}

bool DeleteConsumerGroupRequest::consumerGroupNameIsSet() const
{
    return consumerGroupNameIsSet_;
}

void DeleteConsumerGroupRequest::unsetconsumerGroupName()
{
    consumerGroupNameIsSet_ = false;
}

std::string DeleteConsumerGroupRequest::getContentType() const
{
    return contentType_;
}

void DeleteConsumerGroupRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteConsumerGroupRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteConsumerGroupRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


