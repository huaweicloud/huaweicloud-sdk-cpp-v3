

#include "huaweicloud/vpc/v2/model/NeutronFirewallGroup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronFirewallGroup::NeutronFirewallGroup()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    adminStateUp_ = false;
    adminStateUpIsSet_ = false;
    egressFirewallPolicyId_ = "";
    egressFirewallPolicyIdIsSet_ = false;
    ingressFirewallPolicyId_ = "";
    ingressFirewallPolicyIdIsSet_ = false;
    portsIsSet_ = false;
    public_ = false;
    publicIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

NeutronFirewallGroup::~NeutronFirewallGroup() = default;

void NeutronFirewallGroup::validate()
{
}

web::json::value NeutronFirewallGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(adminStateUpIsSet_) {
        val[utility::conversions::to_string_t("admin_state_up")] = ModelBase::toJson(adminStateUp_);
    }
    if(egressFirewallPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("egress_firewall_policy_id")] = ModelBase::toJson(egressFirewallPolicyId_);
    }
    if(ingressFirewallPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("ingress_firewall_policy_id")] = ModelBase::toJson(ingressFirewallPolicyId_);
    }
    if(portsIsSet_) {
        val[utility::conversions::to_string_t("ports")] = ModelBase::toJson(ports_);
    }
    if(publicIsSet_) {
        val[utility::conversions::to_string_t("public")] = ModelBase::toJson(public_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool NeutronFirewallGroup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("admin_state_up"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_state_up"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminStateUp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ingress_firewall_policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ingress_firewall_policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIngressFirewallPolicyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ports"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ports"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPorts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


std::string NeutronFirewallGroup::getId() const
{
    return id_;
}

void NeutronFirewallGroup::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronFirewallGroup::idIsSet() const
{
    return idIsSet_;
}

void NeutronFirewallGroup::unsetid()
{
    idIsSet_ = false;
}

std::string NeutronFirewallGroup::getName() const
{
    return name_;
}

void NeutronFirewallGroup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronFirewallGroup::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronFirewallGroup::unsetname()
{
    nameIsSet_ = false;
}

std::string NeutronFirewallGroup::getDescription() const
{
    return description_;
}

void NeutronFirewallGroup::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronFirewallGroup::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronFirewallGroup::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool NeutronFirewallGroup::isAdminStateUp() const
{
    return adminStateUp_;
}

void NeutronFirewallGroup::setAdminStateUp(bool value)
{
    adminStateUp_ = value;
    adminStateUpIsSet_ = true;
}

bool NeutronFirewallGroup::adminStateUpIsSet() const
{
    return adminStateUpIsSet_;
}

void NeutronFirewallGroup::unsetadminStateUp()
{
    adminStateUpIsSet_ = false;
}

std::string NeutronFirewallGroup::getEgressFirewallPolicyId() const
{
    return egressFirewallPolicyId_;
}

void NeutronFirewallGroup::setEgressFirewallPolicyId(const std::string& value)
{
    egressFirewallPolicyId_ = value;
    egressFirewallPolicyIdIsSet_ = true;
}

bool NeutronFirewallGroup::egressFirewallPolicyIdIsSet() const
{
    return egressFirewallPolicyIdIsSet_;
}

void NeutronFirewallGroup::unsetegressFirewallPolicyId()
{
    egressFirewallPolicyIdIsSet_ = false;
}

std::string NeutronFirewallGroup::getIngressFirewallPolicyId() const
{
    return ingressFirewallPolicyId_;
}

void NeutronFirewallGroup::setIngressFirewallPolicyId(const std::string& value)
{
    ingressFirewallPolicyId_ = value;
    ingressFirewallPolicyIdIsSet_ = true;
}

bool NeutronFirewallGroup::ingressFirewallPolicyIdIsSet() const
{
    return ingressFirewallPolicyIdIsSet_;
}

void NeutronFirewallGroup::unsetingressFirewallPolicyId()
{
    ingressFirewallPolicyIdIsSet_ = false;
}

std::vector<std::string>& NeutronFirewallGroup::getPorts()
{
    return ports_;
}

void NeutronFirewallGroup::setPorts(const std::vector<std::string>& value)
{
    ports_ = value;
    portsIsSet_ = true;
}

bool NeutronFirewallGroup::portsIsSet() const
{
    return portsIsSet_;
}

void NeutronFirewallGroup::unsetports()
{
    portsIsSet_ = false;
}

bool NeutronFirewallGroup::isPublic() const
{
    return public_;
}

void NeutronFirewallGroup::setPublic(bool value)
{
    public_ = value;
    publicIsSet_ = true;
}

bool NeutronFirewallGroup::publicIsSet() const
{
    return publicIsSet_;
}

void NeutronFirewallGroup::unsetpublic()
{
    publicIsSet_ = false;
}

std::string NeutronFirewallGroup::getStatus() const
{
    return status_;
}

void NeutronFirewallGroup::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NeutronFirewallGroup::statusIsSet() const
{
    return statusIsSet_;
}

void NeutronFirewallGroup::unsetstatus()
{
    statusIsSet_ = false;
}

std::string NeutronFirewallGroup::getTenantId() const
{
    return tenantId_;
}

void NeutronFirewallGroup::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronFirewallGroup::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronFirewallGroup::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string NeutronFirewallGroup::getProjectId() const
{
    return projectId_;
}

void NeutronFirewallGroup::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool NeutronFirewallGroup::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void NeutronFirewallGroup::unsetprojectId()
{
    projectIdIsSet_ = false;
}

utility::datetime NeutronFirewallGroup::getCreatedAt() const
{
    return createdAt_;
}

void NeutronFirewallGroup::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool NeutronFirewallGroup::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void NeutronFirewallGroup::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime NeutronFirewallGroup::getUpdatedAt() const
{
    return updatedAt_;
}

void NeutronFirewallGroup::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool NeutronFirewallGroup::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void NeutronFirewallGroup::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


