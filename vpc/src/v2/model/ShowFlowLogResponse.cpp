

#include "huaweicloud/vpc/v2/model/ShowFlowLogResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowFlowLogResponse::ShowFlowLogResponse()
{
    flowLogIsSet_ = false;
}

ShowFlowLogResponse::~ShowFlowLogResponse() = default;

void ShowFlowLogResponse::validate()
{
}

web::json::value ShowFlowLogResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowLogIsSet_) {
        val[utility::conversions::to_string_t("flow_log")] = ModelBase::toJson(flowLog_);
    }

    return val;
}

bool ShowFlowLogResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flow_log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow_log"));
        if(!fieldValue.is_null())
        {
            FlowLogResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlowLog(refVal);
        }
    }
    return ok;
}

FlowLogResp ShowFlowLogResponse::getFlowLog() const
{
    return flowLog_;
}

void ShowFlowLogResponse::setFlowLog(const FlowLogResp& value)
{
    flowLog_ = value;
    flowLogIsSet_ = true;
}

bool ShowFlowLogResponse::flowLogIsSet() const
{
    return flowLogIsSet_;
}

void ShowFlowLogResponse::unsetflowLog()
{
    flowLogIsSet_ = false;
}

}
}
}
}
}


