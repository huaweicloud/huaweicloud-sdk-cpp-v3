

#include "huaweicloud/codeartsdeploy/v2/model/ListTaskSuccessRateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListTaskSuccessRateResponse::ListTaskSuccessRateResponse()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    startDate_ = "";
    startDateIsSet_ = false;
    endDate_ = "";
    endDateIsSet_ = false;
    tasksSuccessRateIsSet_ = false;
}

ListTaskSuccessRateResponse::~ListTaskSuccessRateResponse() = default;

void ListTaskSuccessRateResponse::validate()
{
}

web::json::value ListTaskSuccessRateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }
    if(tasksSuccessRateIsSet_) {
        val[utility::conversions::to_string_t("tasks_success_rate")] = ModelBase::toJson(tasksSuccessRate_);
    }

    return val;
}
bool ListTaskSuccessRateResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tasks_success_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tasks_success_rate"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskSuccessRate> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTasksSuccessRate(refVal);
        }
    }
    return ok;
}


std::string ListTaskSuccessRateResponse::getProjectId() const
{
    return projectId_;
}

void ListTaskSuccessRateResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTaskSuccessRateResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTaskSuccessRateResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListTaskSuccessRateResponse::getProjectName() const
{
    return projectName_;
}

void ListTaskSuccessRateResponse::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ListTaskSuccessRateResponse::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ListTaskSuccessRateResponse::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string ListTaskSuccessRateResponse::getStartDate() const
{
    return startDate_;
}

void ListTaskSuccessRateResponse::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool ListTaskSuccessRateResponse::startDateIsSet() const
{
    return startDateIsSet_;
}

void ListTaskSuccessRateResponse::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string ListTaskSuccessRateResponse::getEndDate() const
{
    return endDate_;
}

void ListTaskSuccessRateResponse::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool ListTaskSuccessRateResponse::endDateIsSet() const
{
    return endDateIsSet_;
}

void ListTaskSuccessRateResponse::unsetendDate()
{
    endDateIsSet_ = false;
}

std::vector<TaskSuccessRate>& ListTaskSuccessRateResponse::getTasksSuccessRate()
{
    return tasksSuccessRate_;
}

void ListTaskSuccessRateResponse::setTasksSuccessRate(const std::vector<TaskSuccessRate>& value)
{
    tasksSuccessRate_ = value;
    tasksSuccessRateIsSet_ = true;
}

bool ListTaskSuccessRateResponse::tasksSuccessRateIsSet() const
{
    return tasksSuccessRateIsSet_;
}

void ListTaskSuccessRateResponse::unsettasksSuccessRate()
{
    tasksSuccessRateIsSet_ = false;
}

}
}
}
}
}


