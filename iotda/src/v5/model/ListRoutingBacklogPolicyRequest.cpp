

#include "huaweicloud/iotda/v5/model/ListRoutingBacklogPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListRoutingBacklogPolicyRequest::ListRoutingBacklogPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    policyName_ = "";
    policyNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListRoutingBacklogPolicyRequest::~ListRoutingBacklogPolicyRequest() = default;

void ListRoutingBacklogPolicyRequest::validate()
{
}

web::json::value ListRoutingBacklogPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(policyNameIsSet_) {
        val[utility::conversions::to_string_t("policy_name")] = ModelBase::toJson(policyName_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListRoutingBacklogPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListRoutingBacklogPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ListRoutingBacklogPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListRoutingBacklogPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListRoutingBacklogPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListRoutingBacklogPolicyRequest::getPolicyName() const
{
    return policyName_;
}

void ListRoutingBacklogPolicyRequest::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool ListRoutingBacklogPolicyRequest::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void ListRoutingBacklogPolicyRequest::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

int32_t ListRoutingBacklogPolicyRequest::getLimit() const
{
    return limit_;
}

void ListRoutingBacklogPolicyRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRoutingBacklogPolicyRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRoutingBacklogPolicyRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRoutingBacklogPolicyRequest::getMarker() const
{
    return marker_;
}

void ListRoutingBacklogPolicyRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListRoutingBacklogPolicyRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListRoutingBacklogPolicyRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListRoutingBacklogPolicyRequest::getOffset() const
{
    return offset_;
}

void ListRoutingBacklogPolicyRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRoutingBacklogPolicyRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRoutingBacklogPolicyRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


