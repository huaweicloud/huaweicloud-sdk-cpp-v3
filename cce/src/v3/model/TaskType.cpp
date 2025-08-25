

#include "huaweicloud/cce/v3/model/TaskType.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {



TaskType::TaskType()
{
}

TaskType::~TaskType()
{
}

void TaskType::validate()
{
}

web::json::value TaskType::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eTaskType::TaskType_Cluster) val = web::json::value::string(U("Cluster"));
    if (value_ == eTaskType::TaskType_PreCheck) val = web::json::value::string(U("PreCheck"));
    if (value_ == eTaskType::TaskType_Rollback) val = web::json::value::string(U("Rollback"));
    if (value_ == eTaskType::TaskType_Snapshot) val = web::json::value::string(U("Snapshot"));
    if (value_ == eTaskType::TaskType_PostCheck) val = web::json::value::string(U("PostCheck"));

    return val;
}

bool TaskType::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("Cluster")) value_ = eTaskType::TaskType_Cluster;
    if (s == utility::conversions::to_string_t("PreCheck")) value_ = eTaskType::TaskType_PreCheck;
    if (s == utility::conversions::to_string_t("Rollback")) value_ = eTaskType::TaskType_Rollback;
    if (s == utility::conversions::to_string_t("Snapshot")) value_ = eTaskType::TaskType_Snapshot;
    if (s == utility::conversions::to_string_t("PostCheck")) value_ = eTaskType::TaskType_PostCheck;
    return true;
}

TaskType::eTaskType TaskType::getValue() const
{
   return value_;
}

void TaskType::setValue(TaskType::eTaskType const value)
{
   value_ = value;
}


}
}
}
}
}


