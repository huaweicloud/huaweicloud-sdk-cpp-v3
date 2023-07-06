

#include "huaweicloud/cdn/v1/model/UrlObject.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UrlObject::UrlObject()
{
    id_ = "";
    idIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
}

UrlObject::~UrlObject() = default;

void UrlObject::validate()
{
}

web::json::value UrlObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }

    return val;
}

bool UrlObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
        }
    }
    return ok;
}

std::string UrlObject::getId() const
{
    return id_;
}

void UrlObject::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UrlObject::idIsSet() const
{
    return idIsSet_;
}

void UrlObject::unsetid()
{
    idIsSet_ = false;
}

std::string UrlObject::getUrl() const
{
    return url_;
}

void UrlObject::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool UrlObject::urlIsSet() const
{
    return urlIsSet_;
}

void UrlObject::unseturl()
{
    urlIsSet_ = false;
}

std::string UrlObject::getStatus() const
{
    return status_;
}

void UrlObject::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UrlObject::statusIsSet() const
{
    return statusIsSet_;
}

void UrlObject::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t UrlObject::getCreateTime() const
{
    return createTime_;
}

void UrlObject::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UrlObject::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UrlObject::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UrlObject::getTaskId() const
{
    return taskId_;
}

void UrlObject::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool UrlObject::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void UrlObject::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string UrlObject::getTaskType() const
{
    return taskType_;
}

void UrlObject::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool UrlObject::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void UrlObject::unsettaskType()
{
    taskTypeIsSet_ = false;
}

}
}
}
}
}


