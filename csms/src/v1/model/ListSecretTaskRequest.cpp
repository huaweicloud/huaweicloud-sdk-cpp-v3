

#include "huaweicloud/csms/v1/model/ListSecretTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListSecretTaskRequest::ListSecretTaskRequest()
{
    secretName_ = "";
    secretNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListSecretTaskRequest::~ListSecretTaskRequest() = default;

void ListSecretTaskRequest::validate()
{
}

web::json::value ListSecretTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListSecretTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secret_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    return ok;
}


std::string ListSecretTaskRequest::getSecretName() const
{
    return secretName_;
}

void ListSecretTaskRequest::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool ListSecretTaskRequest::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void ListSecretTaskRequest::unsetsecretName()
{
    secretNameIsSet_ = false;
}

std::string ListSecretTaskRequest::getStatus() const
{
    return status_;
}

void ListSecretTaskRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListSecretTaskRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListSecretTaskRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListSecretTaskRequest::getTaskId() const
{
    return taskId_;
}

void ListSecretTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListSecretTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListSecretTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

int32_t ListSecretTaskRequest::getLimit() const
{
    return limit_;
}

void ListSecretTaskRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSecretTaskRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSecretTaskRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListSecretTaskRequest::getMarker() const
{
    return marker_;
}

void ListSecretTaskRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListSecretTaskRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListSecretTaskRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


