

#include "huaweicloud/iotda/v5/model/ListRoutingBacklogPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListRoutingBacklogPolicyResponse::ListRoutingBacklogPolicyResponse()
{
    backlogPoliciesIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListRoutingBacklogPolicyResponse::~ListRoutingBacklogPolicyResponse() = default;

void ListRoutingBacklogPolicyResponse::validate()
{
}

web::json::value ListRoutingBacklogPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backlogPoliciesIsSet_) {
        val[utility::conversions::to_string_t("backlog_policies")] = ModelBase::toJson(backlogPolicies_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListRoutingBacklogPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backlog_policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backlog_policies"));
        if(!fieldValue.is_null())
        {
            std::vector<BacklogPolicyInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBacklogPolicies(refVal);
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


std::vector<BacklogPolicyInfo>& ListRoutingBacklogPolicyResponse::getBacklogPolicies()
{
    return backlogPolicies_;
}

void ListRoutingBacklogPolicyResponse::setBacklogPolicies(const std::vector<BacklogPolicyInfo>& value)
{
    backlogPolicies_ = value;
    backlogPoliciesIsSet_ = true;
}

bool ListRoutingBacklogPolicyResponse::backlogPoliciesIsSet() const
{
    return backlogPoliciesIsSet_;
}

void ListRoutingBacklogPolicyResponse::unsetbacklogPolicies()
{
    backlogPoliciesIsSet_ = false;
}

int32_t ListRoutingBacklogPolicyResponse::getCount() const
{
    return count_;
}

void ListRoutingBacklogPolicyResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListRoutingBacklogPolicyResponse::countIsSet() const
{
    return countIsSet_;
}

void ListRoutingBacklogPolicyResponse::unsetcount()
{
    countIsSet_ = false;
}

std::string ListRoutingBacklogPolicyResponse::getMarker() const
{
    return marker_;
}

void ListRoutingBacklogPolicyResponse::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListRoutingBacklogPolicyResponse::markerIsSet() const
{
    return markerIsSet_;
}

void ListRoutingBacklogPolicyResponse::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


