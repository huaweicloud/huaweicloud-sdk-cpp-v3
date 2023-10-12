

#include "huaweicloud/mpc/v1/model/ListAnimatedGraphicsTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListAnimatedGraphicsTaskResponse::ListAnimatedGraphicsTaskResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    tasksIsSet_ = false;
}

ListAnimatedGraphicsTaskResponse::~ListAnimatedGraphicsTaskResponse() = default;

void ListAnimatedGraphicsTaskResponse::validate()
{
}

web::json::value ListAnimatedGraphicsTaskResponse::toJson() const
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
bool ListAnimatedGraphicsTaskResponse::fromJson(const web::json::value& val)
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
            std::vector<AnimatedGraphicsTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTasks(refVal);
        }
    }
    return ok;
}


int32_t ListAnimatedGraphicsTaskResponse::getTotal() const
{
    return total_;
}

void ListAnimatedGraphicsTaskResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAnimatedGraphicsTaskResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAnimatedGraphicsTaskResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<AnimatedGraphicsTask>& ListAnimatedGraphicsTaskResponse::getTasks()
{
    return tasks_;
}

void ListAnimatedGraphicsTaskResponse::setTasks(const std::vector<AnimatedGraphicsTask>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool ListAnimatedGraphicsTaskResponse::tasksIsSet() const
{
    return tasksIsSet_;
}

void ListAnimatedGraphicsTaskResponse::unsettasks()
{
    tasksIsSet_ = false;
}

}
}
}
}
}


