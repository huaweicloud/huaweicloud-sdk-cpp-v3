

#include "huaweicloud/cbr/v1/model/VaultGet.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultGet::VaultGet()
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
    sysLockSourceService_ = "";
    sysLockSourceServiceIsSet_ = false;
    locked_ = false;
    lockedIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

VaultGet::~VaultGet() = default;

void VaultGet::validate()
{
}

web::json::value VaultGet::toJson() const
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
    if(sysLockSourceServiceIsSet_) {
        val[utility::conversions::to_string_t("sys_lock_source_service")] = ModelBase::toJson(sysLockSourceService_);
    }
    if(lockedIsSet_) {
        val[utility::conversions::to_string_t("locked")] = ModelBase::toJson(locked_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool VaultGet::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sys_lock_source_service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_lock_source_service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysLockSourceService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("locked"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locked"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocked(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


Billing VaultGet::getBilling() const
{
    return billing_;
}

void VaultGet::setBilling(const Billing& value)
{
    billing_ = value;
    billingIsSet_ = true;
}

bool VaultGet::billingIsSet() const
{
    return billingIsSet_;
}

void VaultGet::unsetbilling()
{
    billingIsSet_ = false;
}

std::string VaultGet::getDescription() const
{
    return description_;
}

void VaultGet::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool VaultGet::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void VaultGet::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string VaultGet::getId() const
{
    return id_;
}

void VaultGet::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VaultGet::idIsSet() const
{
    return idIsSet_;
}

void VaultGet::unsetid()
{
    idIsSet_ = false;
}

std::string VaultGet::getName() const
{
    return name_;
}

void VaultGet::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VaultGet::nameIsSet() const
{
    return nameIsSet_;
}

void VaultGet::unsetname()
{
    nameIsSet_ = false;
}

std::string VaultGet::getProjectId() const
{
    return projectId_;
}

void VaultGet::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool VaultGet::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void VaultGet::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string VaultGet::getProviderId() const
{
    return providerId_;
}

void VaultGet::setProviderId(const std::string& value)
{
    providerId_ = value;
    providerIdIsSet_ = true;
}

bool VaultGet::providerIdIsSet() const
{
    return providerIdIsSet_;
}

void VaultGet::unsetproviderId()
{
    providerIdIsSet_ = false;
}

std::vector<ResourceResp>& VaultGet::getResources()
{
    return resources_;
}

void VaultGet::setResources(const std::vector<ResourceResp>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool VaultGet::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void VaultGet::unsetresources()
{
    resourcesIsSet_ = false;
}

std::vector<Tag>& VaultGet::getTags()
{
    return tags_;
}

void VaultGet::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool VaultGet::tagsIsSet() const
{
    return tagsIsSet_;
}

void VaultGet::unsettags()
{
    tagsIsSet_ = false;
}

std::string VaultGet::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void VaultGet::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool VaultGet::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void VaultGet::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool VaultGet::isAutoBind() const
{
    return autoBind_;
}

void VaultGet::setAutoBind(bool value)
{
    autoBind_ = value;
    autoBindIsSet_ = true;
}

bool VaultGet::autoBindIsSet() const
{
    return autoBindIsSet_;
}

void VaultGet::unsetautoBind()
{
    autoBindIsSet_ = false;
}

VaultBindRules VaultGet::getBindRules() const
{
    return bindRules_;
}

void VaultGet::setBindRules(const VaultBindRules& value)
{
    bindRules_ = value;
    bindRulesIsSet_ = true;
}

bool VaultGet::bindRulesIsSet() const
{
    return bindRulesIsSet_;
}

void VaultGet::unsetbindRules()
{
    bindRulesIsSet_ = false;
}

std::string VaultGet::getUserId() const
{
    return userId_;
}

void VaultGet::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool VaultGet::userIdIsSet() const
{
    return userIdIsSet_;
}

void VaultGet::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string VaultGet::getCreatedAt() const
{
    return createdAt_;
}

void VaultGet::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool VaultGet::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void VaultGet::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

bool VaultGet::isAutoExpand() const
{
    return autoExpand_;
}

void VaultGet::setAutoExpand(bool value)
{
    autoExpand_ = value;
    autoExpandIsSet_ = true;
}

bool VaultGet::autoExpandIsSet() const
{
    return autoExpandIsSet_;
}

void VaultGet::unsetautoExpand()
{
    autoExpandIsSet_ = false;
}

bool VaultGet::isSmnNotify() const
{
    return smnNotify_;
}

void VaultGet::setSmnNotify(bool value)
{
    smnNotify_ = value;
    smnNotifyIsSet_ = true;
}

bool VaultGet::smnNotifyIsSet() const
{
    return smnNotifyIsSet_;
}

void VaultGet::unsetsmnNotify()
{
    smnNotifyIsSet_ = false;
}

int32_t VaultGet::getThreshold() const
{
    return threshold_;
}

void VaultGet::setThreshold(int32_t value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool VaultGet::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void VaultGet::unsetthreshold()
{
    thresholdIsSet_ = false;
}

std::string VaultGet::getSysLockSourceService() const
{
    return sysLockSourceService_;
}

void VaultGet::setSysLockSourceService(const std::string& value)
{
    sysLockSourceService_ = value;
    sysLockSourceServiceIsSet_ = true;
}

bool VaultGet::sysLockSourceServiceIsSet() const
{
    return sysLockSourceServiceIsSet_;
}

void VaultGet::unsetsysLockSourceService()
{
    sysLockSourceServiceIsSet_ = false;
}

bool VaultGet::isLocked() const
{
    return locked_;
}

void VaultGet::setLocked(bool value)
{
    locked_ = value;
    lockedIsSet_ = true;
}

bool VaultGet::lockedIsSet() const
{
    return lockedIsSet_;
}

void VaultGet::unsetlocked()
{
    lockedIsSet_ = false;
}

std::string VaultGet::getUpdatedAt() const
{
    return updatedAt_;
}

void VaultGet::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool VaultGet::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void VaultGet::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string VaultGet::getVersion() const
{
    return version_;
}

void VaultGet::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool VaultGet::versionIsSet() const
{
    return versionIsSet_;
}

void VaultGet::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


