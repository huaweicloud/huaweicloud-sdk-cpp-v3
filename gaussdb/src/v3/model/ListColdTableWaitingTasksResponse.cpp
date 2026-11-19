

#include "huaweicloud/gaussdb/v3/model/ListColdTableWaitingTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListColdTableWaitingTasksResponse::ListColdTableWaitingTasksResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    waitingTasksIsSet_ = false;
}

ListColdTableWaitingTasksResponse::~ListColdTableWaitingTasksResponse() = default;

void ListColdTableWaitingTasksResponse::validate()
{
}

web::json::value ListColdTableWaitingTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(waitingTasksIsSet_) {
        val[utility::conversions::to_string_t("waiting_tasks")] = ModelBase::toJson(waitingTasks_);
    }

    return val;
}
bool ListColdTableWaitingTasksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("waiting_tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("waiting_tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<ColdTableWaitingTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitingTasks(refVal);
        }
    }
    return ok;
}


int32_t ListColdTableWaitingTasksResponse::getTotalCount() const
{
    return totalCount_;
}

void ListColdTableWaitingTasksResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListColdTableWaitingTasksResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListColdTableWaitingTasksResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ColdTableWaitingTask>& ListColdTableWaitingTasksResponse::getWaitingTasks()
{
    return waitingTasks_;
}

void ListColdTableWaitingTasksResponse::setWaitingTasks(const std::vector<ColdTableWaitingTask>& value)
{
    waitingTasks_ = value;
    waitingTasksIsSet_ = true;
}

bool ListColdTableWaitingTasksResponse::waitingTasksIsSet() const
{
    return waitingTasksIsSet_;
}

void ListColdTableWaitingTasksResponse::unsetwaitingTasks()
{
    waitingTasksIsSet_ = false;
}

}
}
}
}
}


