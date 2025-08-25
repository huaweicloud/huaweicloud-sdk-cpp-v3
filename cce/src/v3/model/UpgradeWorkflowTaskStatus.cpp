

#include "huaweicloud/cce/v3/model/UpgradeWorkflowTaskStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {



UpgradeWorkflowTaskStatus::UpgradeWorkflowTaskStatus()
{
}

UpgradeWorkflowTaskStatus::~UpgradeWorkflowTaskStatus()
{
}

void UpgradeWorkflowTaskStatus::validate()
{
}

web::json::value UpgradeWorkflowTaskStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eUpgradeWorkflowTaskStatus::UpgradeWorkflowTaskStatus_Init) val = web::json::value::string(U("Init"));
    if (value_ == eUpgradeWorkflowTaskStatus::UpgradeWorkflowTaskStatus_Queuing) val = web::json::value::string(U("Queuing"));
    if (value_ == eUpgradeWorkflowTaskStatus::UpgradeWorkflowTaskStatus_Running) val = web::json::value::string(U("Running"));
    if (value_ == eUpgradeWorkflowTaskStatus::UpgradeWorkflowTaskStatus_Success) val = web::json::value::string(U("Success"));
    if (value_ == eUpgradeWorkflowTaskStatus::UpgradeWorkflowTaskStatus_Failed) val = web::json::value::string(U("Failed"));

    return val;
}

bool UpgradeWorkflowTaskStatus::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("Init")) value_ = eUpgradeWorkflowTaskStatus::UpgradeWorkflowTaskStatus_Init;
    if (s == utility::conversions::to_string_t("Queuing")) value_ = eUpgradeWorkflowTaskStatus::UpgradeWorkflowTaskStatus_Queuing;
    if (s == utility::conversions::to_string_t("Running")) value_ = eUpgradeWorkflowTaskStatus::UpgradeWorkflowTaskStatus_Running;
    if (s == utility::conversions::to_string_t("Success")) value_ = eUpgradeWorkflowTaskStatus::UpgradeWorkflowTaskStatus_Success;
    if (s == utility::conversions::to_string_t("Failed")) value_ = eUpgradeWorkflowTaskStatus::UpgradeWorkflowTaskStatus_Failed;
    return true;
}

UpgradeWorkflowTaskStatus::eUpgradeWorkflowTaskStatus UpgradeWorkflowTaskStatus::getValue() const
{
   return value_;
}

void UpgradeWorkflowTaskStatus::setValue(UpgradeWorkflowTaskStatus::eUpgradeWorkflowTaskStatus const value)
{
   value_ = value;
}


}
}
}
}
}


