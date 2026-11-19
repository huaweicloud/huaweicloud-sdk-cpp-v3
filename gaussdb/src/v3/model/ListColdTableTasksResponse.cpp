

#include "huaweicloud/gaussdb/v3/model/ListColdTableTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListColdTableTasksResponse::ListColdTableTasksResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    tasksIsSet_ = false;
}

ListColdTableTasksResponse::~ListColdTableTasksResponse() = default;

void ListColdTableTasksResponse::validate()
{
}

web::json::value ListColdTableTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(tasksIsSet_) {
        val[utility::conversions::to_string_t("tasks")] = ModelBase::toJson(tasks_);
    }

    return val;
}
bool ListColdTableTasksResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<ColdTableTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTasks(refVal);
        }
    }
    return ok;
}


int32_t ListColdTableTasksResponse::getTotalCount() const
{
    return totalCount_;
}

void ListColdTableTasksResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListColdTableTasksResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListColdTableTasksResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ColdTableTask>& ListColdTableTasksResponse::getTasks()
{
    return tasks_;
}

void ListColdTableTasksResponse::setTasks(const std::vector<ColdTableTask>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool ListColdTableTasksResponse::tasksIsSet() const
{
    return tasksIsSet_;
}

void ListColdTableTasksResponse::unsettasks()
{
    tasksIsSet_ = false;
}

}
}
}
}
}


