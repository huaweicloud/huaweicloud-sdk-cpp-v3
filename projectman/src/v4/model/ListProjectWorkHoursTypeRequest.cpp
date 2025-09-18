

#include "huaweicloud/projectman/v4/model/ListProjectWorkHoursTypeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectWorkHoursTypeRequest::ListProjectWorkHoursTypeRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

ListProjectWorkHoursTypeRequest::~ListProjectWorkHoursTypeRequest() = default;

void ListProjectWorkHoursTypeRequest::validate()
{
}

web::json::value ListProjectWorkHoursTypeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ListProjectWorkHoursTypeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ListProjectWorkHoursTypeRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectWorkHoursTypeRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectWorkHoursTypeRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectWorkHoursTypeRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListProjectWorkHoursTypeRequest::getLimit() const
{
    return limit_;
}

void ListProjectWorkHoursTypeRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProjectWorkHoursTypeRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProjectWorkHoursTypeRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListProjectWorkHoursTypeRequest::getOffset() const
{
    return offset_;
}

void ListProjectWorkHoursTypeRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProjectWorkHoursTypeRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProjectWorkHoursTypeRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProjectWorkHoursTypeRequest::getStatus() const
{
    return status_;
}

void ListProjectWorkHoursTypeRequest::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListProjectWorkHoursTypeRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListProjectWorkHoursTypeRequest::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


