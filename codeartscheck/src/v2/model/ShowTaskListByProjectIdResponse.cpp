

#include "huaweicloud/codeartscheck/v2/model/ShowTaskListByProjectIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTaskListByProjectIdResponse::ShowTaskListByProjectIdResponse()
{
    tasksIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ShowTaskListByProjectIdResponse::~ShowTaskListByProjectIdResponse() = default;

void ShowTaskListByProjectIdResponse::validate()
{
}

web::json::value ShowTaskListByProjectIdResponse::toJson() const
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
bool ShowTaskListByProjectIdResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<SimpleTaskInfoV2> refVal;
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


std::vector<SimpleTaskInfoV2>& ShowTaskListByProjectIdResponse::getTasks()
{
    return tasks_;
}

void ShowTaskListByProjectIdResponse::setTasks(const std::vector<SimpleTaskInfoV2>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool ShowTaskListByProjectIdResponse::tasksIsSet() const
{
    return tasksIsSet_;
}

void ShowTaskListByProjectIdResponse::unsettasks()
{
    tasksIsSet_ = false;
}

int32_t ShowTaskListByProjectIdResponse::getTotal() const
{
    return total_;
}

void ShowTaskListByProjectIdResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowTaskListByProjectIdResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowTaskListByProjectIdResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


