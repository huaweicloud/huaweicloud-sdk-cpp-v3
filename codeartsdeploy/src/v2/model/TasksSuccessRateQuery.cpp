

#include "huaweicloud/codeartsdeploy/v2/model/TasksSuccessRateQuery.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




TasksSuccessRateQuery::TasksSuccessRateQuery()
{
    startDate_ = "";
    startDateIsSet_ = false;
    endDate_ = "";
    endDateIsSet_ = false;
    taskIdsIsSet_ = false;
}

TasksSuccessRateQuery::~TasksSuccessRateQuery() = default;

void TasksSuccessRateQuery::validate()
{
}

web::json::value TasksSuccessRateQuery::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }
    if(taskIdsIsSet_) {
        val[utility::conversions::to_string_t("task_ids")] = ModelBase::toJson(taskIds_);
    }

    return val;
}
bool TasksSuccessRateQuery::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("task_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskIds(refVal);
        }
    }
    return ok;
}


std::string TasksSuccessRateQuery::getStartDate() const
{
    return startDate_;
}

void TasksSuccessRateQuery::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool TasksSuccessRateQuery::startDateIsSet() const
{
    return startDateIsSet_;
}

void TasksSuccessRateQuery::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string TasksSuccessRateQuery::getEndDate() const
{
    return endDate_;
}

void TasksSuccessRateQuery::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool TasksSuccessRateQuery::endDateIsSet() const
{
    return endDateIsSet_;
}

void TasksSuccessRateQuery::unsetendDate()
{
    endDateIsSet_ = false;
}

std::vector<std::string>& TasksSuccessRateQuery::getTaskIds()
{
    return taskIds_;
}

void TasksSuccessRateQuery::setTaskIds(const std::vector<std::string>& value)
{
    taskIds_ = value;
    taskIdsIsSet_ = true;
}

bool TasksSuccessRateQuery::taskIdsIsSet() const
{
    return taskIdsIsSet_;
}

void TasksSuccessRateQuery::unsettaskIds()
{
    taskIdsIsSet_ = false;
}

}
}
}
}
}


