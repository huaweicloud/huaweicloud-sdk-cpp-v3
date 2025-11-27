

#include "huaweicloud/cdn/v2/model/AccessControlTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




AccessControlTask::AccessControlTask()
{
    id_ = "";
    idIsSet_ = false;
    urlsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
}

AccessControlTask::~AccessControlTask() = default;

void AccessControlTask::validate()
{
}

web::json::value AccessControlTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(urlsIsSet_) {
        val[utility::conversions::to_string_t("urls")] = ModelBase::toJson(urls_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool AccessControlTask::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urls"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrls(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
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
    return ok;
}


std::string AccessControlTask::getId() const
{
    return id_;
}

void AccessControlTask::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AccessControlTask::idIsSet() const
{
    return idIsSet_;
}

void AccessControlTask::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& AccessControlTask::getUrls()
{
    return urls_;
}

void AccessControlTask::setUrls(const std::vector<std::string>& value)
{
    urls_ = value;
    urlsIsSet_ = true;
}

bool AccessControlTask::urlsIsSet() const
{
    return urlsIsSet_;
}

void AccessControlTask::unseturls()
{
    urlsIsSet_ = false;
}

std::string AccessControlTask::getStatus() const
{
    return status_;
}

void AccessControlTask::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AccessControlTask::statusIsSet() const
{
    return statusIsSet_;
}

void AccessControlTask::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AccessControlTask::getAction() const
{
    return action_;
}

void AccessControlTask::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool AccessControlTask::actionIsSet() const
{
    return actionIsSet_;
}

void AccessControlTask::unsetaction()
{
    actionIsSet_ = false;
}

int64_t AccessControlTask::getCreateTime() const
{
    return createTime_;
}

void AccessControlTask::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AccessControlTask::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AccessControlTask::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


