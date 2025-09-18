

#include "huaweicloud/projectman/v4/model/ListIssuesSfV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssuesSfV4Request::ListIssuesSfV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    trackerId_ = 0;
    trackerIdIsSet_ = false;
    createdTimeInterval_ = "";
    createdTimeIntervalIsSet_ = false;
    updatedTimeInterval_ = "";
    updatedTimeIntervalIsSet_ = false;
}

ListIssuesSfV4Request::~ListIssuesSfV4Request() = default;

void ListIssuesSfV4Request::validate()
{
}

web::json::value ListIssuesSfV4Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(trackerIdIsSet_) {
        val[utility::conversions::to_string_t("tracker_id")] = ModelBase::toJson(trackerId_);
    }
    if(createdTimeIntervalIsSet_) {
        val[utility::conversions::to_string_t("created_time_interval")] = ModelBase::toJson(createdTimeInterval_);
    }
    if(updatedTimeIntervalIsSet_) {
        val[utility::conversions::to_string_t("updated_time_interval")] = ModelBase::toJson(updatedTimeInterval_);
    }

    return val;
}
bool ListIssuesSfV4Request::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tracker_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time_interval"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTimeInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_time_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_time_interval"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedTimeInterval(refVal);
        }
    }
    return ok;
}


std::string ListIssuesSfV4Request::getProjectId() const
{
    return projectId_;
}

void ListIssuesSfV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListIssuesSfV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListIssuesSfV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListIssuesSfV4Request::getOffset() const
{
    return offset_;
}

void ListIssuesSfV4Request::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListIssuesSfV4Request::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListIssuesSfV4Request::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListIssuesSfV4Request::getLimit() const
{
    return limit_;
}

void ListIssuesSfV4Request::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListIssuesSfV4Request::limitIsSet() const
{
    return limitIsSet_;
}

void ListIssuesSfV4Request::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListIssuesSfV4Request::getTrackerId() const
{
    return trackerId_;
}

void ListIssuesSfV4Request::setTrackerId(int32_t value)
{
    trackerId_ = value;
    trackerIdIsSet_ = true;
}

bool ListIssuesSfV4Request::trackerIdIsSet() const
{
    return trackerIdIsSet_;
}

void ListIssuesSfV4Request::unsettrackerId()
{
    trackerIdIsSet_ = false;
}

std::string ListIssuesSfV4Request::getCreatedTimeInterval() const
{
    return createdTimeInterval_;
}

void ListIssuesSfV4Request::setCreatedTimeInterval(const std::string& value)
{
    createdTimeInterval_ = value;
    createdTimeIntervalIsSet_ = true;
}

bool ListIssuesSfV4Request::createdTimeIntervalIsSet() const
{
    return createdTimeIntervalIsSet_;
}

void ListIssuesSfV4Request::unsetcreatedTimeInterval()
{
    createdTimeIntervalIsSet_ = false;
}

std::string ListIssuesSfV4Request::getUpdatedTimeInterval() const
{
    return updatedTimeInterval_;
}

void ListIssuesSfV4Request::setUpdatedTimeInterval(const std::string& value)
{
    updatedTimeInterval_ = value;
    updatedTimeIntervalIsSet_ = true;
}

bool ListIssuesSfV4Request::updatedTimeIntervalIsSet() const
{
    return updatedTimeIntervalIsSet_;
}

void ListIssuesSfV4Request::unsetupdatedTimeInterval()
{
    updatedTimeIntervalIsSet_ = false;
}

}
}
}
}
}


