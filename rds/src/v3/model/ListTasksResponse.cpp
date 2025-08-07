

#include "huaweicloud/rds/v3/model/ListTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListTasksResponse::ListTasksResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    actionsIsSet_ = false;
    tasksIsSet_ = false;
}

ListTasksResponse::~ListTasksResponse() = default;

void ListTasksResponse::validate()
{
}

web::json::value ListTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(tasksIsSet_) {
        val[utility::conversions::to_string_t("tasks")] = ModelBase::toJson(tasks_);
    }

    return val;
}
bool ListTasksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<Task> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTasks(refVal);
        }
    }
    return ok;
}


int32_t ListTasksResponse::getTotalCount() const
{
    return totalCount_;
}

void ListTasksResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListTasksResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListTasksResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<std::string>& ListTasksResponse::getActions()
{
    return actions_;
}

void ListTasksResponse::setActions(const std::vector<std::string>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool ListTasksResponse::actionsIsSet() const
{
    return actionsIsSet_;
}

void ListTasksResponse::unsetactions()
{
    actionsIsSet_ = false;
}

std::vector<Task>& ListTasksResponse::getTasks()
{
    return tasks_;
}

void ListTasksResponse::setTasks(const std::vector<Task>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool ListTasksResponse::tasksIsSet() const
{
    return tasksIsSet_;
}

void ListTasksResponse::unsettasks()
{
    tasksIsSet_ = false;
}

}
}
}
}
}


