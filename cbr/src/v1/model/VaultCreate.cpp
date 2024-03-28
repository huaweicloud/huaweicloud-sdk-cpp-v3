

#include "huaweicloud/cbr/v1/model/VaultCreate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultCreate::VaultCreate()
{
    backupPolicyId_ = "";
    backupPolicyIdIsSet_ = false;
    billingIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    resourcesIsSet_ = false;
    tagsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    autoBind_ = false;
    autoBindIsSet_ = false;
    bindRulesIsSet_ = false;
    autoExpand_ = false;
    autoExpandIsSet_ = false;
    threshold_ = 0;
    thresholdIsSet_ = false;
    smnNotify_ = false;
    smnNotifyIsSet_ = false;
    backupNamePrefix_ = "";
    backupNamePrefixIsSet_ = false;
    demandBilling_ = false;
    demandBillingIsSet_ = false;
    sysLockSourceService_ = "";
    sysLockSourceServiceIsSet_ = false;
}

VaultCreate::~VaultCreate() = default;

void VaultCreate::validate()
{
}

web::json::value VaultCreate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("backup_policy_id")] = ModelBase::toJson(backupPolicyId_);
    }
    if(billingIsSet_) {
        val[utility::conversions::to_string_t("billing")] = ModelBase::toJson(billing_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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
    if(autoExpandIsSet_) {
        val[utility::conversions::to_string_t("auto_expand")] = ModelBase::toJson(autoExpand_);
    }
    if(thresholdIsSet_) {
        val[utility::conversions::to_string_t("threshold")] = ModelBase::toJson(threshold_);
    }
    if(smnNotifyIsSet_) {
        val[utility::conversions::to_string_t("smn_notify")] = ModelBase::toJson(smnNotify_);
    }
    if(backupNamePrefixIsSet_) {
        val[utility::conversions::to_string_t("backup_name_prefix")] = ModelBase::toJson(backupNamePrefix_);
    }
    if(demandBillingIsSet_) {
        val[utility::conversions::to_string_t("demand_billing")] = ModelBase::toJson(demandBilling_);
    }
    if(sysLockSourceServiceIsSet_) {
        val[utility::conversions::to_string_t("sys_lock_source_service")] = ModelBase::toJson(sysLockSourceService_);
    }

    return val;
}
bool VaultCreate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupPolicyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing"));
        if(!fieldValue.is_null())
        {
            BillingCreate refVal;
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceCreate> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("auto_expand"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_expand"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoExpand(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("smn_notify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smn_notify"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmnNotify(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_name_prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_name_prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupNamePrefix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("demand_billing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("demand_billing"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDemandBilling(refVal);
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
    return ok;
}


std::string VaultCreate::getBackupPolicyId() const
{
    return backupPolicyId_;
}

void VaultCreate::setBackupPolicyId(const std::string& value)
{
    backupPolicyId_ = value;
    backupPolicyIdIsSet_ = true;
}

bool VaultCreate::backupPolicyIdIsSet() const
{
    return backupPolicyIdIsSet_;
}

void VaultCreate::unsetbackupPolicyId()
{
    backupPolicyIdIsSet_ = false;
}

BillingCreate VaultCreate::getBilling() const
{
    return billing_;
}

void VaultCreate::setBilling(const BillingCreate& value)
{
    billing_ = value;
    billingIsSet_ = true;
}

bool VaultCreate::billingIsSet() const
{
    return billingIsSet_;
}

void VaultCreate::unsetbilling()
{
    billingIsSet_ = false;
}

std::string VaultCreate::getDescription() const
{
    return description_;
}

void VaultCreate::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool VaultCreate::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void VaultCreate::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string VaultCreate::getName() const
{
    return name_;
}

void VaultCreate::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VaultCreate::nameIsSet() const
{
    return nameIsSet_;
}

void VaultCreate::unsetname()
{
    nameIsSet_ = false;
}

std::vector<ResourceCreate>& VaultCreate::getResources()
{
    return resources_;
}

void VaultCreate::setResources(const std::vector<ResourceCreate>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool VaultCreate::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void VaultCreate::unsetresources()
{
    resourcesIsSet_ = false;
}

std::vector<Tag>& VaultCreate::getTags()
{
    return tags_;
}

void VaultCreate::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool VaultCreate::tagsIsSet() const
{
    return tagsIsSet_;
}

void VaultCreate::unsettags()
{
    tagsIsSet_ = false;
}

std::string VaultCreate::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void VaultCreate::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool VaultCreate::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void VaultCreate::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool VaultCreate::isAutoBind() const
{
    return autoBind_;
}

void VaultCreate::setAutoBind(bool value)
{
    autoBind_ = value;
    autoBindIsSet_ = true;
}

bool VaultCreate::autoBindIsSet() const
{
    return autoBindIsSet_;
}

void VaultCreate::unsetautoBind()
{
    autoBindIsSet_ = false;
}

VaultBindRules VaultCreate::getBindRules() const
{
    return bindRules_;
}

void VaultCreate::setBindRules(const VaultBindRules& value)
{
    bindRules_ = value;
    bindRulesIsSet_ = true;
}

bool VaultCreate::bindRulesIsSet() const
{
    return bindRulesIsSet_;
}

void VaultCreate::unsetbindRules()
{
    bindRulesIsSet_ = false;
}

bool VaultCreate::isAutoExpand() const
{
    return autoExpand_;
}

void VaultCreate::setAutoExpand(bool value)
{
    autoExpand_ = value;
    autoExpandIsSet_ = true;
}

bool VaultCreate::autoExpandIsSet() const
{
    return autoExpandIsSet_;
}

void VaultCreate::unsetautoExpand()
{
    autoExpandIsSet_ = false;
}

int32_t VaultCreate::getThreshold() const
{
    return threshold_;
}

void VaultCreate::setThreshold(int32_t value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool VaultCreate::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void VaultCreate::unsetthreshold()
{
    thresholdIsSet_ = false;
}

bool VaultCreate::isSmnNotify() const
{
    return smnNotify_;
}

void VaultCreate::setSmnNotify(bool value)
{
    smnNotify_ = value;
    smnNotifyIsSet_ = true;
}

bool VaultCreate::smnNotifyIsSet() const
{
    return smnNotifyIsSet_;
}

void VaultCreate::unsetsmnNotify()
{
    smnNotifyIsSet_ = false;
}

std::string VaultCreate::getBackupNamePrefix() const
{
    return backupNamePrefix_;
}

void VaultCreate::setBackupNamePrefix(const std::string& value)
{
    backupNamePrefix_ = value;
    backupNamePrefixIsSet_ = true;
}

bool VaultCreate::backupNamePrefixIsSet() const
{
    return backupNamePrefixIsSet_;
}

void VaultCreate::unsetbackupNamePrefix()
{
    backupNamePrefixIsSet_ = false;
}

bool VaultCreate::isDemandBilling() const
{
    return demandBilling_;
}

void VaultCreate::setDemandBilling(bool value)
{
    demandBilling_ = value;
    demandBillingIsSet_ = true;
}

bool VaultCreate::demandBillingIsSet() const
{
    return demandBillingIsSet_;
}

void VaultCreate::unsetdemandBilling()
{
    demandBillingIsSet_ = false;
}

std::string VaultCreate::getSysLockSourceService() const
{
    return sysLockSourceService_;
}

void VaultCreate::setSysLockSourceService(const std::string& value)
{
    sysLockSourceService_ = value;
    sysLockSourceServiceIsSet_ = true;
}

bool VaultCreate::sysLockSourceServiceIsSet() const
{
    return sysLockSourceServiceIsSet_;
}

void VaultCreate::unsetsysLockSourceService()
{
    sysLockSourceServiceIsSet_ = false;
}

}
}
}
}
}


