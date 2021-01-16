

#include "huaweicloud/vpc/v2/model/NeutronListFirewallPoliciesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronListFirewallPoliciesRequest::NeutronListFirewallPoliciesRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    idIsSet_ = false;
    nameIsSet_ = false;
    descriptionIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
}

NeutronListFirewallPoliciesRequest::~NeutronListFirewallPoliciesRequest() = default;

void NeutronListFirewallPoliciesRequest::validate()
{
}

web::json::value NeutronListFirewallPoliciesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
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
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }

    return val;
}

bool NeutronListFirewallPoliciesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    return ok;
}


int32_t NeutronListFirewallPoliciesRequest::getLimit() const
{
    return limit_;
}

void NeutronListFirewallPoliciesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool NeutronListFirewallPoliciesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void NeutronListFirewallPoliciesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string NeutronListFirewallPoliciesRequest::getMarker() const
{
    return marker_;
}

void NeutronListFirewallPoliciesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool NeutronListFirewallPoliciesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void NeutronListFirewallPoliciesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::vector<std::string>& NeutronListFirewallPoliciesRequest::getId()
{
    return id_;
}

void NeutronListFirewallPoliciesRequest::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronListFirewallPoliciesRequest::idIsSet() const
{
    return idIsSet_;
}

void NeutronListFirewallPoliciesRequest::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& NeutronListFirewallPoliciesRequest::getName()
{
    return name_;
}

void NeutronListFirewallPoliciesRequest::setName(const std::vector<std::string>& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronListFirewallPoliciesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronListFirewallPoliciesRequest::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& NeutronListFirewallPoliciesRequest::getDescription()
{
    return description_;
}

void NeutronListFirewallPoliciesRequest::setDescription(const std::vector<std::string>& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronListFirewallPoliciesRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronListFirewallPoliciesRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string NeutronListFirewallPoliciesRequest::getTenantId() const
{
    return tenantId_;
}

void NeutronListFirewallPoliciesRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronListFirewallPoliciesRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronListFirewallPoliciesRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

}
}
}
}
}


