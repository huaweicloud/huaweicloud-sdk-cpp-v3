

#include "huaweicloud/cce/v3/model/WorkFlowPhase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {



WorkFlowPhase::WorkFlowPhase()
{
}

WorkFlowPhase::~WorkFlowPhase()
{
}

void WorkFlowPhase::validate()
{
}

web::json::value WorkFlowPhase::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eWorkFlowPhase::WorkFlowPhase_Init) val = web::json::value::string(U("Init"));
    if (value_ == eWorkFlowPhase::WorkFlowPhase_Running) val = web::json::value::string(U("Running"));
    if (value_ == eWorkFlowPhase::WorkFlowPhase_Pending) val = web::json::value::string(U("Pending"));
    if (value_ == eWorkFlowPhase::WorkFlowPhase_Success) val = web::json::value::string(U("Success"));
    if (value_ == eWorkFlowPhase::WorkFlowPhase_Cancel) val = web::json::value::string(U("Cancel"));

    return val;
}

bool WorkFlowPhase::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("Init")) value_ = eWorkFlowPhase::WorkFlowPhase_Init;
    if (s == utility::conversions::to_string_t("Running")) value_ = eWorkFlowPhase::WorkFlowPhase_Running;
    if (s == utility::conversions::to_string_t("Pending")) value_ = eWorkFlowPhase::WorkFlowPhase_Pending;
    if (s == utility::conversions::to_string_t("Success")) value_ = eWorkFlowPhase::WorkFlowPhase_Success;
    if (s == utility::conversions::to_string_t("Cancel")) value_ = eWorkFlowPhase::WorkFlowPhase_Cancel;
    return true;
}

WorkFlowPhase::eWorkFlowPhase WorkFlowPhase::getValue() const
{
   return value_;
}

void WorkFlowPhase::setValue(WorkFlowPhase::eWorkFlowPhase const value)
{
   value_ = value;
}


}
}
}
}
}


