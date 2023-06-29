

#include "huaweicloud/mpc/v1/model/ListExtractTaskResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListExtractTaskResponse::ListExtractTaskResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    tasksIsSet_ = false;
}

ListExtractTaskResponse::~ListExtractTaskResponse() = default;

void ListExtractTaskResponse::validate()
{
}

web::json::value ListExtractTaskResponse::toJson() const
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

bool ListExtractTaskResponse::fromJson(const web::json::value& val)
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
            std::vector<ExtractTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTasks(refVal);
        }
    }
    return ok;
}


int32_t ListExtractTaskResponse::getTotal() const
{
    return total_;
}

void ListExtractTaskResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListExtractTaskResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListExtractTaskResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ExtractTask>& ListExtractTaskResponse::getTasks()
{
    return tasks_;
}

void ListExtractTaskResponse::setTasks(const std::vector<ExtractTask>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool ListExtractTaskResponse::tasksIsSet() const
{
    return tasksIsSet_;
}

void ListExtractTaskResponse::unsettasks()
{
    tasksIsSet_ = false;
}

}
}
}
}
}


