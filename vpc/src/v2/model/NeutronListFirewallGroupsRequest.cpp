

#include "huaweicloud/vpc/v2/model/NeutronListFirewallGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronListFirewallGroupsRequest::NeutronListFirewallGroupsRequest()
{
    marker_ = "";
    markerIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    idIsSet_ = false;
    nameIsSet_ = false;
    descriptionIsSet_ = false;
    ingressFirewallPolicyId_ = "";
    ingressFirewallPolicyIdIsSet_ = false;
    egressFirewallPolicyId_ = "";
    egressFirewallPolicyIdIsSet_ = false;
}

NeutronListFirewallGroupsRequest::~NeutronListFirewallGroupsRequest() = default;

void NeutronListFirewallGroupsRequest::validate()
{
}

web::json::value NeutronListFirewallGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(ingressFirewallPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("ingress_firewall_policy_id")] = ModelBase::toJson(ingressFirewallPolicyId_);
    }
    if(egressFirewallPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("egress_firewall_policy_id")] = ModelBase::toJson(egressFirewallPolicyId_);
    }

    return val;
}
bool NeutronListFirewallGroupsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ingress_firewall_policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ingress_firewall_policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIngressFirewallPolicyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("egress_firewall_policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("egress_firewall_policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEgressFirewallPolicyId(refVal);
        }
    }
    return ok;
}


std::string NeutronListFirewallGroupsRequest::getMarker() const
{
    return marker_;
}

void NeutronListFirewallGroupsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool NeutronListFirewallGroupsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void NeutronListFirewallGroupsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t NeutronListFirewallGroupsRequest::getLimit() const
{
    return limit_;
}

void NeutronListFirewallGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool NeutronListFirewallGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void NeutronListFirewallGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<std::string>& NeutronListFirewallGroupsRequest::getId()
{
    return id_;
}

void NeutronListFirewallGroupsRequest::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronListFirewallGroupsRequest::idIsSet() const
{
    return idIsSet_;
}

void NeutronListFirewallGroupsRequest::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& NeutronListFirewallGroupsRequest::getName()
{
    return name_;
}

void NeutronListFirewallGroupsRequest::setName(const std::vector<std::string>& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronListFirewallGroupsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronListFirewallGroupsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& NeutronListFirewallGroupsRequest::getDescription()
{
    return description_;
}

void NeutronListFirewallGroupsRequest::setDescription(const std::vector<std::string>& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronListFirewallGroupsRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronListFirewallGroupsRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string NeutronListFirewallGroupsRequest::getIngressFirewallPolicyId() const
{
    return ingressFirewallPolicyId_;
}

void NeutronListFirewallGroupsRequest::setIngressFirewallPolicyId(const std::string& value)
{
    ingressFirewallPolicyId_ = value;
    ingressFirewallPolicyIdIsSet_ = true;
}

bool NeutronListFirewallGroupsRequest::ingressFirewallPolicyIdIsSet() const
{
    return ingressFirewallPolicyIdIsSet_;
}

void NeutronListFirewallGroupsRequest::unsetingressFirewallPolicyId()
{
    ingressFirewallPolicyIdIsSet_ = false;
}

std::string NeutronListFirewallGroupsRequest::getEgressFirewallPolicyId() const
{
    return egressFirewallPolicyId_;
}

void NeutronListFirewallGroupsRequest::setEgressFirewallPolicyId(const std::string& value)
{
    egressFirewallPolicyId_ = value;
    egressFirewallPolicyIdIsSet_ = true;
}

bool NeutronListFirewallGroupsRequest::egressFirewallPolicyIdIsSet() const
{
    return egressFirewallPolicyIdIsSet_;
}

void NeutronListFirewallGroupsRequest::unsetegressFirewallPolicyId()
{
    egressFirewallPolicyIdIsSet_ = false;
}

}
}
}
}
}


