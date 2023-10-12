

#include "huaweicloud/vpc/v2/model/UpdateFlowLogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateFlowLogResponse::UpdateFlowLogResponse()
{
    flowLogIsSet_ = false;
}

UpdateFlowLogResponse::~UpdateFlowLogResponse() = default;

void UpdateFlowLogResponse::validate()
{
}

web::json::value UpdateFlowLogResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowLogIsSet_) {
        val[utility::conversions::to_string_t("flow_log")] = ModelBase::toJson(flowLog_);
    }

    return val;
}
bool UpdateFlowLogResponse::fromJson(const web::json::value& val)
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


FlowLogResp UpdateFlowLogResponse::getFlowLog() const
{
    return flowLog_;
}

void UpdateFlowLogResponse::setFlowLog(const FlowLogResp& value)
{
    flowLog_ = value;
    flowLogIsSet_ = true;
}

bool UpdateFlowLogResponse::flowLogIsSet() const
{
    return flowLogIsSet_;
}

void UpdateFlowLogResponse::unsetflowLog()
{
    flowLogIsSet_ = false;
}

}
}
}
}
}


