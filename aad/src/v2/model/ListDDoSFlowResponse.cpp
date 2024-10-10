

#include "huaweicloud/aad/v2/model/ListDDoSFlowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListDDoSFlowResponse::ListDDoSFlowResponse()
{
    flowBpsIsSet_ = false;
    flowPpsIsSet_ = false;
}

ListDDoSFlowResponse::~ListDDoSFlowResponse() = default;

void ListDDoSFlowResponse::validate()
{
}

web::json::value ListDDoSFlowResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowBpsIsSet_) {
        val[utility::conversions::to_string_t("flow_bps")] = ModelBase::toJson(flowBps_);
    }
    if(flowPpsIsSet_) {
        val[utility::conversions::to_string_t("flow_pps")] = ModelBase::toJson(flowPps_);
    }

    return val;
}
bool ListDDoSFlowResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flow_bps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow_bps"));
        if(!fieldValue.is_null())
        {
            std::vector<FlowBps> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlowBps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flow_pps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow_pps"));
        if(!fieldValue.is_null())
        {
            std::vector<FlowPps> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlowPps(refVal);
        }
    }
    return ok;
}


std::vector<FlowBps>& ListDDoSFlowResponse::getFlowBps()
{
    return flowBps_;
}

void ListDDoSFlowResponse::setFlowBps(const std::vector<FlowBps>& value)
{
    flowBps_ = value;
    flowBpsIsSet_ = true;
}

bool ListDDoSFlowResponse::flowBpsIsSet() const
{
    return flowBpsIsSet_;
}

void ListDDoSFlowResponse::unsetflowBps()
{
    flowBpsIsSet_ = false;
}

std::vector<FlowPps>& ListDDoSFlowResponse::getFlowPps()
{
    return flowPps_;
}

void ListDDoSFlowResponse::setFlowPps(const std::vector<FlowPps>& value)
{
    flowPps_ = value;
    flowPpsIsSet_ = true;
}

bool ListDDoSFlowResponse::flowPpsIsSet() const
{
    return flowPpsIsSet_;
}

void ListDDoSFlowResponse::unsetflowPps()
{
    flowPpsIsSet_ = false;
}

}
}
}
}
}


