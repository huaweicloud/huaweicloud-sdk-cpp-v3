

#include "huaweicloud/iotda/v5/model/QueryQueueBase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




QueryQueueBase::QueryQueueBase()
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

QueryQueueBase::~QueryQueueBase() = default;

void QueryQueueBase::validate()
{
}

web::json::value QueryQueueBase::toJson() const
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
bool QueryQueueBase::fromJson(const web::json::value& val)
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


std::string QueryQueueBase::getQueueId() const
{
    return queueId_;
}

void QueryQueueBase::setQueueId(const std::string& value)
{
    queueId_ = value;
    queueIdIsSet_ = true;
}

bool QueryQueueBase::queueIdIsSet() const
{
    return queueIdIsSet_;
}

void QueryQueueBase::unsetqueueId()
{
    queueIdIsSet_ = false;
}

std::string QueryQueueBase::getQueueName() const
{
    return queueName_;
}

void QueryQueueBase::setQueueName(const std::string& value)
{
    queueName_ = value;
    queueNameIsSet_ = true;
}

bool QueryQueueBase::queueNameIsSet() const
{
    return queueNameIsSet_;
}

void QueryQueueBase::unsetqueueName()
{
    queueNameIsSet_ = false;
}

std::string QueryQueueBase::getCreateTime() const
{
    return createTime_;
}

void QueryQueueBase::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool QueryQueueBase::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void QueryQueueBase::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string QueryQueueBase::getLastModifyTime() const
{
    return lastModifyTime_;
}

void QueryQueueBase::setLastModifyTime(const std::string& value)
{
    lastModifyTime_ = value;
    lastModifyTimeIsSet_ = true;
}

bool QueryQueueBase::lastModifyTimeIsSet() const
{
    return lastModifyTimeIsSet_;
}

void QueryQueueBase::unsetlastModifyTime()
{
    lastModifyTimeIsSet_ = false;
}

}
}
}
}
}


