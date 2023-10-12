

#include "huaweicloud/vpc/v2/model/CreateFlowLogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateFlowLogResponse::CreateFlowLogResponse()
{
    flowLogIsSet_ = false;
}

CreateFlowLogResponse::~CreateFlowLogResponse() = default;

void CreateFlowLogResponse::validate()
{
}

web::json::value CreateFlowLogResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowLogIsSet_) {
        val[utility::conversions::to_string_t("flow_log")] = ModelBase::toJson(flowLog_);
    }

    return val;
}
bool CreateFlowLogResponse::fromJson(const web::json::value& val)
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


FlowLogResp CreateFlowLogResponse::getFlowLog() const
{
    return flowLog_;
}

void CreateFlowLogResponse::setFlowLog(const FlowLogResp& value)
{
    flowLog_ = value;
    flowLogIsSet_ = true;
}

bool CreateFlowLogResponse::flowLogIsSet() const
{
    return flowLogIsSet_;
}

void CreateFlowLogResponse::unsetflowLog()
{
    flowLogIsSet_ = false;
}

}
}
}
}
}


