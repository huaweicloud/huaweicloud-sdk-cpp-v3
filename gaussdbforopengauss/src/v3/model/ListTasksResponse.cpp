

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTasksResponse::ListTasksResponse()
{
    tasksIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListTasksResponse::~ListTasksResponse() = default;

void ListTasksResponse::validate()
{
}

web::json::value ListTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tasksIsSet_) {
        val[utility::conversions::to_string_t("tasks")] = ModelBase::toJson(tasks_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListTasksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskDetailResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTasks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<TaskDetailResult>& ListTasksResponse::getTasks()
{
    return tasks_;
}

void ListTasksResponse::setTasks(const std::vector<TaskDetailResult>& value)
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

}
}
}
}
}


