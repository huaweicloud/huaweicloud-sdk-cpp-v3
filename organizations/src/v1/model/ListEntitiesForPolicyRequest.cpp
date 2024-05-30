

#include "huaweicloud/organizations/v1/model/ListEntitiesForPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListEntitiesForPolicyRequest::ListEntitiesForPolicyRequest()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListEntitiesForPolicyRequest::~ListEntitiesForPolicyRequest() = default;

void ListEntitiesForPolicyRequest::validate()
{
}

web::json::value ListEntitiesForPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool ListEntitiesForPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ListEntitiesForPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void ListEntitiesForPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool ListEntitiesForPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void ListEntitiesForPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

int32_t ListEntitiesForPolicyRequest::getLimit() const
{
    return limit_;
}

void ListEntitiesForPolicyRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEntitiesForPolicyRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListEntitiesForPolicyRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListEntitiesForPolicyRequest::getMarker() const
{
    return marker_;
}

void ListEntitiesForPolicyRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListEntitiesForPolicyRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListEntitiesForPolicyRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


