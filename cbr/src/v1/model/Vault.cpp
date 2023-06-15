

#include "huaweicloud/cbr/v1/model/Vault.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




Vault::Vault()
{
    billingIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    providerId_ = "";
    providerIdIsSet_ = false;
    resourcesIsSet_ = false;
    tagsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    autoBind_ = false;
    autoBindIsSet_ = false;
    bindRulesIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    autoExpand_ = false;
    autoExpandIsSet_ = false;
    smnNotify_ = false;
    smnNotifyIsSet_ = false;
    threshold_ = 0;
    thresholdIsSet_ = false;
}

Vault::~Vault() = default;

void Vault::validate()
{
}

web::json::value Vault::toJson() const
{
    web::json::value val = web::json::value::object();

    if(billingIsSet_) {
        val[utility::conversions::to_string_t("billing")] = ModelBase::toJson(billing_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(providerIdIsSet_) {
        val[utility::conversions::to_string_t("provider_id")] = ModelBase::toJson(providerId_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(autoBindIsSet_) {
        val[utility::conversions::to_string_t("auto_bind")] = ModelBase::toJson(autoBind_);
    }
    if(bindRulesIsSet_) {
        val[utility::conversions::to_string_t("bind_rules")] = ModelBase::toJson(bindRules_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(autoExpandIsSet_) {
        val[utility::conversions::to_string_t("auto_expand")] = ModelBase::toJson(autoExpand_);
    }
    if(smnNotifyIsSet_) {
        val[utility::conversions::to_string_t("smn_notify")] = ModelBase::toJson(smnNotify_);
    }
    if(thresholdIsSet_) {
        val[utility::conversions::to_string_t("threshold")] = ModelBase::toJson(threshold_);
    }

    return val;
}

bool Vault::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("billing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing"));
        if(!fieldValue.is_null())
        {
            Billing refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBilling(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("provider_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provider_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProviderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_bind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_bind"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoBind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bind_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bind_rules"));
        if(!fieldValue.is_null())
        {
            VaultBindRules refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_expand"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_expand"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoExpand(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smn_notify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smn_notify"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmnNotify(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThreshold(refVal);
        }
    }
    return ok;
}


Billing Vault::getBilling() const
{
    return billing_;
}

void Vault::setBilling(const Billing& value)
{
    billing_ = value;
    billingIsSet_ = true;
}

bool Vault::billingIsSet() const
{
    return billingIsSet_;
}

void Vault::unsetbilling()
{
    billingIsSet_ = false;
}

std::string Vault::getDescription() const
{
    return description_;
}

void Vault::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Vault::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Vault::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string Vault::getId() const
{
    return id_;
}

void Vault::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Vault::idIsSet() const
{
    return idIsSet_;
}

void Vault::unsetid()
{
    idIsSet_ = false;
}

std::string Vault::getName() const
{
    return name_;
}

void Vault::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Vault::nameIsSet() const
{
    return nameIsSet_;
}

void Vault::unsetname()
{
    nameIsSet_ = false;
}

std::string Vault::getProjectId() const
{
    return projectId_;
}

void Vault::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool Vault::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void Vault::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string Vault::getProviderId() const
{
    return providerId_;
}

void Vault::setProviderId(const std::string& value)
{
    providerId_ = value;
    providerIdIsSet_ = true;
}

bool Vault::providerIdIsSet() const
{
    return providerIdIsSet_;
}

void Vault::unsetproviderId()
{
    providerIdIsSet_ = false;
}

std::vector<ResourceResp>& Vault::getResources()
{
    return resources_;
}

void Vault::setResources(const std::vector<ResourceResp>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool Vault::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void Vault::unsetresources()
{
    resourcesIsSet_ = false;
}

std::vector<Tag>& Vault::getTags()
{
    return tags_;
}

void Vault::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool Vault::tagsIsSet() const
{
    return tagsIsSet_;
}

void Vault::unsettags()
{
    tagsIsSet_ = false;
}

std::string Vault::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void Vault::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool Vault::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void Vault::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool Vault::isAutoBind() const
{
    return autoBind_;
}

void Vault::setAutoBind(bool value)
{
    autoBind_ = value;
    autoBindIsSet_ = true;
}

bool Vault::autoBindIsSet() const
{
    return autoBindIsSet_;
}

void Vault::unsetautoBind()
{
    autoBindIsSet_ = false;
}

VaultBindRules Vault::getBindRules() const
{
    return bindRules_;
}

void Vault::setBindRules(const VaultBindRules& value)
{
    bindRules_ = value;
    bindRulesIsSet_ = true;
}

bool Vault::bindRulesIsSet() const
{
    return bindRulesIsSet_;
}

void Vault::unsetbindRules()
{
    bindRulesIsSet_ = false;
}

std::string Vault::getUserId() const
{
    return userId_;
}

void Vault::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool Vault::userIdIsSet() const
{
    return userIdIsSet_;
}

void Vault::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string Vault::getCreatedAt() const
{
    return createdAt_;
}

void Vault::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool Vault::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void Vault::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

bool Vault::isAutoExpand() const
{
    return autoExpand_;
}

void Vault::setAutoExpand(bool value)
{
    autoExpand_ = value;
    autoExpandIsSet_ = true;
}

bool Vault::autoExpandIsSet() const
{
    return autoExpandIsSet_;
}

void Vault::unsetautoExpand()
{
    autoExpandIsSet_ = false;
}

bool Vault::isSmnNotify() const
{
    return smnNotify_;
}

void Vault::setSmnNotify(bool value)
{
    smnNotify_ = value;
    smnNotifyIsSet_ = true;
}

bool Vault::smnNotifyIsSet() const
{
    return smnNotifyIsSet_;
}

void Vault::unsetsmnNotify()
{
    smnNotifyIsSet_ = false;
}

int32_t Vault::getThreshold() const
{
    return threshold_;
}

void Vault::setThreshold(int32_t value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool Vault::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void Vault::unsetthreshold()
{
    thresholdIsSet_ = false;
}

}
}
}
}
}


