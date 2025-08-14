

#include "huaweicloud/iotda/v5/model/AddQueueResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddQueueResponse::AddQueueResponse()
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

AddQueueResponse::~AddQueueResponse() = default;

void AddQueueResponse::validate()
{
}

web::json::value AddQueueResponse::toJson() const
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
bool AddQueueResponse::fromJson(const web::json::value& val)
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


std::string AddQueueResponse::getQueueId() const
{
    return queueId_;
}

void AddQueueResponse::setQueueId(const std::string& value)
{
    queueId_ = value;
    queueIdIsSet_ = true;
}

bool AddQueueResponse::queueIdIsSet() const
{
    return queueIdIsSet_;
}

void AddQueueResponse::unsetqueueId()
{
    queueIdIsSet_ = false;
}

std::string AddQueueResponse::getQueueName() const
{
    return queueName_;
}

void AddQueueResponse::setQueueName(const std::string& value)
{
    queueName_ = value;
    queueNameIsSet_ = true;
}

bool AddQueueResponse::queueNameIsSet() const
{
    return queueNameIsSet_;
}

void AddQueueResponse::unsetqueueName()
{
    queueNameIsSet_ = false;
}

std::string AddQueueResponse::getCreateTime() const
{
    return createTime_;
}

void AddQueueResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AddQueueResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AddQueueResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string AddQueueResponse::getLastModifyTime() const
{
    return lastModifyTime_;
}

void AddQueueResponse::setLastModifyTime(const std::string& value)
{
    lastModifyTime_ = value;
    lastModifyTimeIsSet_ = true;
}

bool AddQueueResponse::lastModifyTimeIsSet() const
{
    return lastModifyTimeIsSet_;
}

void AddQueueResponse::unsetlastModifyTime()
{
    lastModifyTimeIsSet_ = false;
}

}
}
}
}
}


