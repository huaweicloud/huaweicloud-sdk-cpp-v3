

#include "huaweicloud/iotdm/v5/model/ListInstanceTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




ListInstanceTasksResponse::ListInstanceTasksResponse()
{
    pageIsSet_ = false;
    tasksIsSet_ = false;
}

ListInstanceTasksResponse::~ListInstanceTasksResponse() = default;

void ListInstanceTasksResponse::validate()
{
}

web::json::value ListInstanceTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(tasksIsSet_) {
        val[utility::conversions::to_string_t("tasks")] = ModelBase::toJson(tasks_);
    }

    return val;
}
bool ListInstanceTasksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTasks(refVal);
        }
    }
    return ok;
}


Page ListInstanceTasksResponse::getPage() const
{
    return page_;
}

void ListInstanceTasksResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListInstanceTasksResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListInstanceTasksResponse::unsetpage()
{
    pageIsSet_ = false;
}

std::vector<InstanceTask>& ListInstanceTasksResponse::getTasks()
{
    return tasks_;
}

void ListInstanceTasksResponse::setTasks(const std::vector<InstanceTask>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool ListInstanceTasksResponse::tasksIsSet() const
{
    return tasksIsSet_;
}

void ListInstanceTasksResponse::unsettasks()
{
    tasksIsSet_ = false;
}

}
}
}
}
}


