

#include "huaweicloud/gaussdb/v3/model/CheckScheduleTaskExistResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckScheduleTaskExistResponse::CheckScheduleTaskExistResponse()
{
    exist_ = false;
    existIsSet_ = false;
    scheduledTasksIsSet_ = false;
}

CheckScheduleTaskExistResponse::~CheckScheduleTaskExistResponse() = default;

void CheckScheduleTaskExistResponse::validate()
{
}

web::json::value CheckScheduleTaskExistResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(existIsSet_) {
        val[utility::conversions::to_string_t("exist")] = ModelBase::toJson(exist_);
    }
    if(scheduledTasksIsSet_) {
        val[utility::conversions::to_string_t("scheduled_tasks")] = ModelBase::toJson(scheduledTasks_);
    }

    return val;
}
bool CheckScheduleTaskExistResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("exist"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exist"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExist(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scheduled_tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scheduled_tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<ScheduledTaskV3> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduledTasks(refVal);
        }
    }
    return ok;
}


bool CheckScheduleTaskExistResponse::isExist() const
{
    return exist_;
}

void CheckScheduleTaskExistResponse::setExist(bool value)
{
    exist_ = value;
    existIsSet_ = true;
}

bool CheckScheduleTaskExistResponse::existIsSet() const
{
    return existIsSet_;
}

void CheckScheduleTaskExistResponse::unsetexist()
{
    existIsSet_ = false;
}

std::vector<ScheduledTaskV3>& CheckScheduleTaskExistResponse::getScheduledTasks()
{
    return scheduledTasks_;
}

void CheckScheduleTaskExistResponse::setScheduledTasks(const std::vector<ScheduledTaskV3>& value)
{
    scheduledTasks_ = value;
    scheduledTasksIsSet_ = true;
}

bool CheckScheduleTaskExistResponse::scheduledTasksIsSet() const
{
    return scheduledTasksIsSet_;
}

void CheckScheduleTaskExistResponse::unsetscheduledTasks()
{
    scheduledTasksIsSet_ = false;
}

}
}
}
}
}


