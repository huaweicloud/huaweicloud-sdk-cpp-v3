

#include "huaweicloud/mpc/v1/model/ListRemuxTaskResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListRemuxTaskResponse::ListRemuxTaskResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    tasksIsSet_ = false;
}

ListRemuxTaskResponse::~ListRemuxTaskResponse() = default;

void ListRemuxTaskResponse::validate()
{
}

web::json::value ListRemuxTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(tasksIsSet_) {
        val[utility::conversions::to_string_t("tasks")] = ModelBase::toJson(tasks_);
    }

    return val;
}

bool ListRemuxTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<RemuxTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTasks(refVal);
        }
    }
    return ok;
}


int32_t ListRemuxTaskResponse::getTotal() const
{
    return total_;
}

void ListRemuxTaskResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListRemuxTaskResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListRemuxTaskResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<RemuxTask>& ListRemuxTaskResponse::getTasks()
{
    return tasks_;
}

void ListRemuxTaskResponse::setTasks(const std::vector<RemuxTask>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool ListRemuxTaskResponse::tasksIsSet() const
{
    return tasksIsSet_;
}

void ListRemuxTaskResponse::unsettasks()
{
    tasksIsSet_ = false;
}

}
}
}
}
}


