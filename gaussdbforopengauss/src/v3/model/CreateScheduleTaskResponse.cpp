

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateScheduleTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateScheduleTaskResponse::CreateScheduleTaskResponse()
{
    instanceTasksIsSet_ = false;
}

CreateScheduleTaskResponse::~CreateScheduleTaskResponse() = default;

void CreateScheduleTaskResponse::validate()
{
}

web::json::value CreateScheduleTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceTasksIsSet_) {
        val[utility::conversions::to_string_t("instance_tasks")] = ModelBase::toJson(instanceTasks_);
    }

    return val;
}
bool CreateScheduleTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceTaskDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceTasks(refVal);
        }
    }
    return ok;
}


std::vector<InstanceTaskDetail>& CreateScheduleTaskResponse::getInstanceTasks()
{
    return instanceTasks_;
}

void CreateScheduleTaskResponse::setInstanceTasks(const std::vector<InstanceTaskDetail>& value)
{
    instanceTasks_ = value;
    instanceTasksIsSet_ = true;
}

bool CreateScheduleTaskResponse::instanceTasksIsSet() const
{
    return instanceTasksIsSet_;
}

void CreateScheduleTaskResponse::unsetinstanceTasks()
{
    instanceTasksIsSet_ = false;
}

}
}
}
}
}


