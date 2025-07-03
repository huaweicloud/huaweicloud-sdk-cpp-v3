

#include "huaweicloud/live/v1/model/CreateFlowsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateFlowsResponse::CreateFlowsResponse()
{
    flowIsSet_ = false;
}

CreateFlowsResponse::~CreateFlowsResponse() = default;

void CreateFlowsResponse::validate()
{
}

web::json::value CreateFlowsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowIsSet_) {
        val[utility::conversions::to_string_t("flow")] = ModelBase::toJson(flow_);
    }

    return val;
}
bool CreateFlowsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flow"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow"));
        if(!fieldValue.is_null())
        {
            FlowDetailRespBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlow(refVal);
        }
    }
    return ok;
}


FlowDetailRespBody CreateFlowsResponse::getFlow() const
{
    return flow_;
}

void CreateFlowsResponse::setFlow(const FlowDetailRespBody& value)
{
    flow_ = value;
    flowIsSet_ = true;
}

bool CreateFlowsResponse::flowIsSet() const
{
    return flowIsSet_;
}

void CreateFlowsResponse::unsetflow()
{
    flowIsSet_ = false;
}

}
}
}
}
}


