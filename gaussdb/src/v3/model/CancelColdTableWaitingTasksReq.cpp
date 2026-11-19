

#include "huaweicloud/gaussdb/v3/model/CancelColdTableWaitingTasksReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CancelColdTableWaitingTasksReq::CancelColdTableWaitingTasksReq()
{
    cancelTasksIsSet_ = false;
}

CancelColdTableWaitingTasksReq::~CancelColdTableWaitingTasksReq() = default;

void CancelColdTableWaitingTasksReq::validate()
{
}

web::json::value CancelColdTableWaitingTasksReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cancelTasksIsSet_) {
        val[utility::conversions::to_string_t("cancel_tasks")] = ModelBase::toJson(cancelTasks_);
    }

    return val;
}
bool CancelColdTableWaitingTasksReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cancel_tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cancel_tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<CancelColdTableWaitingTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCancelTasks(refVal);
        }
    }
    return ok;
}


std::vector<CancelColdTableWaitingTask>& CancelColdTableWaitingTasksReq::getCancelTasks()
{
    return cancelTasks_;
}

void CancelColdTableWaitingTasksReq::setCancelTasks(const std::vector<CancelColdTableWaitingTask>& value)
{
    cancelTasks_ = value;
    cancelTasksIsSet_ = true;
}

bool CancelColdTableWaitingTasksReq::cancelTasksIsSet() const
{
    return cancelTasksIsSet_;
}

void CancelColdTableWaitingTasksReq::unsetcancelTasks()
{
    cancelTasksIsSet_ = false;
}

}
}
}
}
}


