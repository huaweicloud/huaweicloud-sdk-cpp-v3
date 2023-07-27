

#include "huaweicloud/lts/v2/model/UpdateLogStreamResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateLogStreamResponse::UpdateLogStreamResponse()
{
    creationTime_ = 0L;
    creationTimeIsSet_ = false;
    logTopicName_ = "";
    logTopicNameIsSet_ = false;
    logTopicId_ = "";
    logTopicIdIsSet_ = false;
    ttlInDays_ = 0;
    ttlInDaysIsSet_ = false;
}

UpdateLogStreamResponse::~UpdateLogStreamResponse() = default;

void UpdateLogStreamResponse::validate()
{
}

web::json::value UpdateLogStreamResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(creationTimeIsSet_) {
        val[utility::conversions::to_string_t("creation_time")] = ModelBase::toJson(creationTime_);
    }
    if(logTopicNameIsSet_) {
        val[utility::conversions::to_string_t("log_topic_name")] = ModelBase::toJson(logTopicName_);
    }
    if(logTopicIdIsSet_) {
        val[utility::conversions::to_string_t("log_topic_id")] = ModelBase::toJson(logTopicId_);
    }
    if(ttlInDaysIsSet_) {
        val[utility::conversions::to_string_t("ttl_in_days")] = ModelBase::toJson(ttlInDays_);
    }

    return val;
}

bool UpdateLogStreamResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("creation_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_topic_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_topic_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTopicName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_topic_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_topic_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTopicId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ttl_in_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttl_in_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtlInDays(refVal);
        }
    }
    return ok;
}

int64_t UpdateLogStreamResponse::getCreationTime() const
{
    return creationTime_;
}

void UpdateLogStreamResponse::setCreationTime(int64_t value)
{
    creationTime_ = value;
    creationTimeIsSet_ = true;
}

bool UpdateLogStreamResponse::creationTimeIsSet() const
{
    return creationTimeIsSet_;
}

void UpdateLogStreamResponse::unsetcreationTime()
{
    creationTimeIsSet_ = false;
}

std::string UpdateLogStreamResponse::getLogTopicName() const
{
    return logTopicName_;
}

void UpdateLogStreamResponse::setLogTopicName(const std::string& value)
{
    logTopicName_ = value;
    logTopicNameIsSet_ = true;
}

bool UpdateLogStreamResponse::logTopicNameIsSet() const
{
    return logTopicNameIsSet_;
}

void UpdateLogStreamResponse::unsetlogTopicName()
{
    logTopicNameIsSet_ = false;
}

std::string UpdateLogStreamResponse::getLogTopicId() const
{
    return logTopicId_;
}

void UpdateLogStreamResponse::setLogTopicId(const std::string& value)
{
    logTopicId_ = value;
    logTopicIdIsSet_ = true;
}

bool UpdateLogStreamResponse::logTopicIdIsSet() const
{
    return logTopicIdIsSet_;
}

void UpdateLogStreamResponse::unsetlogTopicId()
{
    logTopicIdIsSet_ = false;
}

int32_t UpdateLogStreamResponse::getTtlInDays() const
{
    return ttlInDays_;
}

void UpdateLogStreamResponse::setTtlInDays(int32_t value)
{
    ttlInDays_ = value;
    ttlInDaysIsSet_ = true;
}

bool UpdateLogStreamResponse::ttlInDaysIsSet() const
{
    return ttlInDaysIsSet_;
}

void UpdateLogStreamResponse::unsetttlInDays()
{
    ttlInDaysIsSet_ = false;
}

}
}
}
}
}


