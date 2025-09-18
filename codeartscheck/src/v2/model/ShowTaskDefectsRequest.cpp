

#include "huaweicloud/codeartscheck/v2/model/ShowTaskDefectsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTaskDefectsRequest::ShowTaskDefectsRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    statusIds_ = "";
    statusIdsIsSet_ = false;
    severity_ = "";
    severityIsSet_ = false;
}

ShowTaskDefectsRequest::~ShowTaskDefectsRequest() = default;

void ShowTaskDefectsRequest::validate()
{
}

web::json::value ShowTaskDefectsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(statusIdsIsSet_) {
        val[utility::conversions::to_string_t("status_ids")] = ModelBase::toJson(statusIds_);
    }
    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }

    return val;
}
bool ShowTaskDefectsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    return ok;
}


std::string ShowTaskDefectsRequest::getTaskId() const
{
    return taskId_;
}

void ShowTaskDefectsRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowTaskDefectsRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowTaskDefectsRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

int32_t ShowTaskDefectsRequest::getOffset() const
{
    return offset_;
}

void ShowTaskDefectsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowTaskDefectsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowTaskDefectsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowTaskDefectsRequest::getLimit() const
{
    return limit_;
}

void ShowTaskDefectsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowTaskDefectsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowTaskDefectsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowTaskDefectsRequest::getStatusIds() const
{
    return statusIds_;
}

void ShowTaskDefectsRequest::setStatusIds(const std::string& value)
{
    statusIds_ = value;
    statusIdsIsSet_ = true;
}

bool ShowTaskDefectsRequest::statusIdsIsSet() const
{
    return statusIdsIsSet_;
}

void ShowTaskDefectsRequest::unsetstatusIds()
{
    statusIdsIsSet_ = false;
}

std::string ShowTaskDefectsRequest::getSeverity() const
{
    return severity_;
}

void ShowTaskDefectsRequest::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool ShowTaskDefectsRequest::severityIsSet() const
{
    return severityIsSet_;
}

void ShowTaskDefectsRequest::unsetseverity()
{
    severityIsSet_ = false;
}

}
}
}
}
}


