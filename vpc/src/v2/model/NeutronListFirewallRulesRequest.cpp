

#include "huaweicloud/vpc/v2/model/NeutronListFirewallRulesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronListFirewallRulesRequest::NeutronListFirewallRulesRequest()
{
    marker_ = "";
    markerIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    idIsSet_ = false;
    nameIsSet_ = false;
    descriptionIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
}

NeutronListFirewallRulesRequest::~NeutronListFirewallRulesRequest() = default;

void NeutronListFirewallRulesRequest::validate()
{
}

web::json::value NeutronListFirewallRulesRequest::toJson() const
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
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }

    return val;
}

bool NeutronListFirewallRulesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
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


std::string NeutronListFirewallRulesRequest::getMarker() const
{
    return marker_;
}

void NeutronListFirewallRulesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool NeutronListFirewallRulesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void NeutronListFirewallRulesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t NeutronListFirewallRulesRequest::getLimit() const
{
    return limit_;
}

void NeutronListFirewallRulesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool NeutronListFirewallRulesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void NeutronListFirewallRulesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<std::string>& NeutronListFirewallRulesRequest::getId()
{
    return id_;
}

void NeutronListFirewallRulesRequest::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronListFirewallRulesRequest::idIsSet() const
{
    return idIsSet_;
}

void NeutronListFirewallRulesRequest::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& NeutronListFirewallRulesRequest::getName()
{
    return name_;
}

void NeutronListFirewallRulesRequest::setName(const std::vector<std::string>& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronListFirewallRulesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronListFirewallRulesRequest::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& NeutronListFirewallRulesRequest::getDescription()
{
    return description_;
}

void NeutronListFirewallRulesRequest::setDescription(const std::vector<std::string>& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronListFirewallRulesRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronListFirewallRulesRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string NeutronListFirewallRulesRequest::getAction() const
{
    return action_;
}

void NeutronListFirewallRulesRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool NeutronListFirewallRulesRequest::actionIsSet() const
{
    return actionIsSet_;
}

void NeutronListFirewallRulesRequest::unsetaction()
{
    actionIsSet_ = false;
}

std::string NeutronListFirewallRulesRequest::getTenantId() const
{
    return tenantId_;
}

void NeutronListFirewallRulesRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronListFirewallRulesRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronListFirewallRulesRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

}
}
}
}
}


