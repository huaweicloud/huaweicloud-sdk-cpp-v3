

#include "huaweicloud/vpc/v2/model/ListFlowLogsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListFlowLogsResponse::ListFlowLogsResponse()
{
    flowLogsIsSet_ = false;
}

ListFlowLogsResponse::~ListFlowLogsResponse() = default;

void ListFlowLogsResponse::validate()
{
}

web::json::value ListFlowLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowLogsIsSet_) {
        val[utility::conversions::to_string_t("flow_logs")] = ModelBase::toJson(flowLogs_);
    }

    return val;
}

bool ListFlowLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flow_logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow_logs"));
        if(!fieldValue.is_null())
        {
            std::vector<FlowLogResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlowLogs(refVal);
        }
    }
    return ok;
}

std::vector<FlowLogResp>& ListFlowLogsResponse::getFlowLogs()
{
    return flowLogs_;
}

void ListFlowLogsResponse::setFlowLogs(const std::vector<FlowLogResp>& value)
{
    flowLogs_ = value;
    flowLogsIsSet_ = true;
}

bool ListFlowLogsResponse::flowLogsIsSet() const
{
    return flowLogsIsSet_;
}

void ListFlowLogsResponse::unsetflowLogs()
{
    flowLogsIsSet_ = false;
}

}
}
}
}
}


