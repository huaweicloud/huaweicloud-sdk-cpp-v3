

#include "huaweicloud/iotda/v5/model/BroadcastMessageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




BroadcastMessageResponse::BroadcastMessageResponse()
{
    appId_ = "";
    appIdIsSet_ = false;
    topicFullName_ = "";
    topicFullNameIsSet_ = false;
    messageId_ = "";
    messageIdIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
}

BroadcastMessageResponse::~BroadcastMessageResponse() = default;

void BroadcastMessageResponse::validate()
{
}

web::json::value BroadcastMessageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(topicFullNameIsSet_) {
        val[utility::conversions::to_string_t("topic_full_name")] = ModelBase::toJson(topicFullName_);
    }
    if(messageIdIsSet_) {
        val[utility::conversions::to_string_t("message_id")] = ModelBase::toJson(messageId_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }

    return val;
}
bool BroadcastMessageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic_full_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_full_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicFullName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    return ok;
}


std::string BroadcastMessageResponse::getAppId() const
{
    return appId_;
}

void BroadcastMessageResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool BroadcastMessageResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void BroadcastMessageResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string BroadcastMessageResponse::getTopicFullName() const
{
    return topicFullName_;
}

void BroadcastMessageResponse::setTopicFullName(const std::string& value)
{
    topicFullName_ = value;
    topicFullNameIsSet_ = true;
}

bool BroadcastMessageResponse::topicFullNameIsSet() const
{
    return topicFullNameIsSet_;
}

void BroadcastMessageResponse::unsettopicFullName()
{
    topicFullNameIsSet_ = false;
}

std::string BroadcastMessageResponse::getMessageId() const
{
    return messageId_;
}

void BroadcastMessageResponse::setMessageId(const std::string& value)
{
    messageId_ = value;
    messageIdIsSet_ = true;
}

bool BroadcastMessageResponse::messageIdIsSet() const
{
    return messageIdIsSet_;
}

void BroadcastMessageResponse::unsetmessageId()
{
    messageIdIsSet_ = false;
}

std::string BroadcastMessageResponse::getCreatedTime() const
{
    return createdTime_;
}

void BroadcastMessageResponse::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool BroadcastMessageResponse::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void BroadcastMessageResponse::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

}
}
}
}
}


