

#include "huaweicloud/iotda/v5/model/ListRoutingFlowControlPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListRoutingFlowControlPolicyResponse::ListRoutingFlowControlPolicyResponse()
{
    flowcontrolPoliciesIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListRoutingFlowControlPolicyResponse::~ListRoutingFlowControlPolicyResponse() = default;

void ListRoutingFlowControlPolicyResponse::validate()
{
}

web::json::value ListRoutingFlowControlPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowcontrolPoliciesIsSet_) {
        val[utility::conversions::to_string_t("flowcontrol_policies")] = ModelBase::toJson(flowcontrolPolicies_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListRoutingFlowControlPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flowcontrol_policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flowcontrol_policies"));
        if(!fieldValue.is_null())
        {
            std::vector<FlowControlPolicyInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlowcontrolPolicies(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    return ok;
}


std::vector<FlowControlPolicyInfo>& ListRoutingFlowControlPolicyResponse::getFlowcontrolPolicies()
{
    return flowcontrolPolicies_;
}

void ListRoutingFlowControlPolicyResponse::setFlowcontrolPolicies(const std::vector<FlowControlPolicyInfo>& value)
{
    flowcontrolPolicies_ = value;
    flowcontrolPoliciesIsSet_ = true;
}

bool ListRoutingFlowControlPolicyResponse::flowcontrolPoliciesIsSet() const
{
    return flowcontrolPoliciesIsSet_;
}

void ListRoutingFlowControlPolicyResponse::unsetflowcontrolPolicies()
{
    flowcontrolPoliciesIsSet_ = false;
}

int32_t ListRoutingFlowControlPolicyResponse::getCount() const
{
    return count_;
}

void ListRoutingFlowControlPolicyResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListRoutingFlowControlPolicyResponse::countIsSet() const
{
    return countIsSet_;
}

void ListRoutingFlowControlPolicyResponse::unsetcount()
{
    countIsSet_ = false;
}

std::string ListRoutingFlowControlPolicyResponse::getMarker() const
{
    return marker_;
}

void ListRoutingFlowControlPolicyResponse::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListRoutingFlowControlPolicyResponse::markerIsSet() const
{
    return markerIsSet_;
}

void ListRoutingFlowControlPolicyResponse::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


