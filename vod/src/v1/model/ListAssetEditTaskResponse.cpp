

#include "huaweicloud/vod/v1/model/ListAssetEditTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListAssetEditTaskResponse::ListAssetEditTaskResponse()
{
    total_ = 0L;
    totalIsSet_ = false;
    tasksIsSet_ = false;
}

ListAssetEditTaskResponse::~ListAssetEditTaskResponse() = default;

void ListAssetEditTaskResponse::validate()
{
}

web::json::value ListAssetEditTaskResponse::toJson() const
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
bool ListAssetEditTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<EditingTaskInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTasks(refVal);
        }
    }
    return ok;
}


int64_t ListAssetEditTaskResponse::getTotal() const
{
    return total_;
}

void ListAssetEditTaskResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAssetEditTaskResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAssetEditTaskResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<EditingTaskInfo>& ListAssetEditTaskResponse::getTasks()
{
    return tasks_;
}

void ListAssetEditTaskResponse::setTasks(const std::vector<EditingTaskInfo>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool ListAssetEditTaskResponse::tasksIsSet() const
{
    return tasksIsSet_;
}

void ListAssetEditTaskResponse::unsettasks()
{
    tasksIsSet_ = false;
}

}
}
}
}
}


