

#include "huaweicloud/vod/v1/model/ListTakeOverTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListTakeOverTaskResponse::ListTakeOverTaskResponse()
{
    tasksIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListTakeOverTaskResponse::~ListTakeOverTaskResponse() = default;

void ListTakeOverTaskResponse::validate()
{
}

web::json::value ListTakeOverTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tasksIsSet_) {
        val[utility::conversions::to_string_t("tasks")] = ModelBase::toJson(tasks_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListTakeOverTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<TakeOverTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTasks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<TakeOverTask>& ListTakeOverTaskResponse::getTasks()
{
    return tasks_;
}

void ListTakeOverTaskResponse::setTasks(const std::vector<TakeOverTask>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool ListTakeOverTaskResponse::tasksIsSet() const
{
    return tasksIsSet_;
}

void ListTakeOverTaskResponse::unsettasks()
{
    tasksIsSet_ = false;
}

int32_t ListTakeOverTaskResponse::getTotal() const
{
    return total_;
}

void ListTakeOverTaskResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListTakeOverTaskResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListTakeOverTaskResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


