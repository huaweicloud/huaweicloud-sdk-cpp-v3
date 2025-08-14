

#include "huaweicloud/iotda/v5/model/ShowQueueResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowQueueResponse::ShowQueueResponse()
{
    queueId_ = "";
    queueIdIsSet_ = false;
    queueName_ = "";
    queueNameIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    lastModifyTime_ = "";
    lastModifyTimeIsSet_ = false;
}

ShowQueueResponse::~ShowQueueResponse() = default;

void ShowQueueResponse::validate()
{
}

web::json::value ShowQueueResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(queueIdIsSet_) {
        val[utility::conversions::to_string_t("queue_id")] = ModelBase::toJson(queueId_);
    }
    if(queueNameIsSet_) {
        val[utility::conversions::to_string_t("queue_name")] = ModelBase::toJson(queueName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(lastModifyTimeIsSet_) {
        val[utility::conversions::to_string_t("last_modify_time")] = ModelBase::toJson(lastModifyTime_);
    }

    return val;
}
bool ShowQueueResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("queue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("queue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("queue_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("queue_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueueName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modify_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modify_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModifyTime(refVal);
        }
    }
    return ok;
}


std::string ShowQueueResponse::getQueueId() const
{
    return queueId_;
}

void ShowQueueResponse::setQueueId(const std::string& value)
{
    queueId_ = value;
    queueIdIsSet_ = true;
}

bool ShowQueueResponse::queueIdIsSet() const
{
    return queueIdIsSet_;
}

void ShowQueueResponse::unsetqueueId()
{
    queueIdIsSet_ = false;
}

std::string ShowQueueResponse::getQueueName() const
{
    return queueName_;
}

void ShowQueueResponse::setQueueName(const std::string& value)
{
    queueName_ = value;
    queueNameIsSet_ = true;
}

bool ShowQueueResponse::queueNameIsSet() const
{
    return queueNameIsSet_;
}

void ShowQueueResponse::unsetqueueName()
{
    queueNameIsSet_ = false;
}

std::string ShowQueueResponse::getCreateTime() const
{
    return createTime_;
}

void ShowQueueResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowQueueResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowQueueResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowQueueResponse::getLastModifyTime() const
{
    return lastModifyTime_;
}

void ShowQueueResponse::setLastModifyTime(const std::string& value)
{
    lastModifyTime_ = value;
    lastModifyTimeIsSet_ = true;
}

bool ShowQueueResponse::lastModifyTimeIsSet() const
{
    return lastModifyTimeIsSet_;
}

void ShowQueueResponse::unsetlastModifyTime()
{
    lastModifyTimeIsSet_ = false;
}

}
}
}
}
}


