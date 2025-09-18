

#include "huaweicloud/projectman/v4/model/ListProjectIterationsV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectIterationsV4Request::ListProjectIterationsV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    updatedTimeInterval_ = "";
    updatedTimeIntervalIsSet_ = false;
    includeDeleted_ = false;
    includeDeletedIsSet_ = false;
}

ListProjectIterationsV4Request::~ListProjectIterationsV4Request() = default;

void ListProjectIterationsV4Request::validate()
{
}

web::json::value ListProjectIterationsV4Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(updatedTimeIntervalIsSet_) {
        val[utility::conversions::to_string_t("updated_time_interval")] = ModelBase::toJson(updatedTimeInterval_);
    }
    if(includeDeletedIsSet_) {
        val[utility::conversions::to_string_t("include_deleted")] = ModelBase::toJson(includeDeleted_);
    }

    return val;
}
bool ListProjectIterationsV4Request::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("updated_time_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_time_interval"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedTimeInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("include_deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_deleted"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeDeleted(refVal);
        }
    }
    return ok;
}


std::string ListProjectIterationsV4Request::getProjectId() const
{
    return projectId_;
}

void ListProjectIterationsV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectIterationsV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectIterationsV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListProjectIterationsV4Request::getUpdatedTimeInterval() const
{
    return updatedTimeInterval_;
}

void ListProjectIterationsV4Request::setUpdatedTimeInterval(const std::string& value)
{
    updatedTimeInterval_ = value;
    updatedTimeIntervalIsSet_ = true;
}

bool ListProjectIterationsV4Request::updatedTimeIntervalIsSet() const
{
    return updatedTimeIntervalIsSet_;
}

void ListProjectIterationsV4Request::unsetupdatedTimeInterval()
{
    updatedTimeIntervalIsSet_ = false;
}

bool ListProjectIterationsV4Request::isIncludeDeleted() const
{
    return includeDeleted_;
}

void ListProjectIterationsV4Request::setIncludeDeleted(bool value)
{
    includeDeleted_ = value;
    includeDeletedIsSet_ = true;
}

bool ListProjectIterationsV4Request::includeDeletedIsSet() const
{
    return includeDeletedIsSet_;
}

void ListProjectIterationsV4Request::unsetincludeDeleted()
{
    includeDeletedIsSet_ = false;
}

}
}
}
}
}


