

#include "huaweicloud/organizations/v1/model/ListEntitiesForDryRunPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListEntitiesForDryRunPolicyRequest::ListEntitiesForDryRunPolicyRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListEntitiesForDryRunPolicyRequest::~ListEntitiesForDryRunPolicyRequest() = default;

void ListEntitiesForDryRunPolicyRequest::validate()
{
}

web::json::value ListEntitiesForDryRunPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListEntitiesForDryRunPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyId(refVal);
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
    return ok;
}


std::string ListEntitiesForDryRunPolicyRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListEntitiesForDryRunPolicyRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListEntitiesForDryRunPolicyRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListEntitiesForDryRunPolicyRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListEntitiesForDryRunPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void ListEntitiesForDryRunPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool ListEntitiesForDryRunPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void ListEntitiesForDryRunPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

int32_t ListEntitiesForDryRunPolicyRequest::getLimit() const
{
    return limit_;
}

void ListEntitiesForDryRunPolicyRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEntitiesForDryRunPolicyRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListEntitiesForDryRunPolicyRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListEntitiesForDryRunPolicyRequest::getMarker() const
{
    return marker_;
}

void ListEntitiesForDryRunPolicyRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListEntitiesForDryRunPolicyRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListEntitiesForDryRunPolicyRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


