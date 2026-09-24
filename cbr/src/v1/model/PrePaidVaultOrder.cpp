

#include "huaweicloud/cbr/v1/model/PrePaidVaultOrder.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




PrePaidVaultOrder::PrePaidVaultOrder()
{
    name_ = "";
    nameIsSet_ = false;
    billingIsSet_ = false;
    resourcesIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    backupPolicyId_ = "";
    backupPolicyIdIsSet_ = false;
    tagsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    autoBind_ = false;
    autoBindIsSet_ = false;
    bindRulesIsSet_ = false;
    threshold_ = 0;
    thresholdIsSet_ = false;
    smnNotify_ = false;
    smnNotifyIsSet_ = false;
    parametersIsSet_ = false;
    autoExpand_ = false;
    autoExpandIsSet_ = false;
    locked_ = false;
    lockedIsSet_ = false;
    crossAccount_ = false;
    crossAccountIsSet_ = false;
    dataEncryptionIsSet_ = false;
}

PrePaidVaultOrder::~PrePaidVaultOrder() = default;

void PrePaidVaultOrder::validate()
{
}

web::json::value PrePaidVaultOrder::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(billingIsSet_) {
        val[utility::conversions::to_string_t("billing")] = ModelBase::toJson(billing_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(backupPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("backup_policy_id")] = ModelBase::toJson(backupPolicyId_);
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
    if(thresholdIsSet_) {
        val[utility::conversions::to_string_t("threshold")] = ModelBase::toJson(threshold_);
    }
    if(smnNotifyIsSet_) {
        val[utility::conversions::to_string_t("smn_notify")] = ModelBase::toJson(smnNotify_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(autoExpandIsSet_) {
        val[utility::conversions::to_string_t("auto_expand")] = ModelBase::toJson(autoExpand_);
    }
    if(lockedIsSet_) {
        val[utility::conversions::to_string_t("locked")] = ModelBase::toJson(locked_);
    }
    if(crossAccountIsSet_) {
        val[utility::conversions::to_string_t("cross_account")] = ModelBase::toJson(crossAccount_);
    }
    if(dataEncryptionIsSet_) {
        val[utility::conversions::to_string_t("data_encryption")] = ModelBase::toJson(dataEncryption_);
    }

    return val;
}
bool PrePaidVaultOrder::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing"));
        if(!fieldValue.is_null())
        {
            PrePaidBillingCreate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBilling(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupPolicyId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            VaultCreateParameters refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("locked"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locked"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocked(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cross_account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cross_account"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCrossAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_encryption"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_encryption"));
        if(!fieldValue.is_null())
        {
            DataEncryption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataEncryption(refVal);
        }
    }
    return ok;
}


std::string PrePaidVaultOrder::getName() const
{
    return name_;
}

void PrePaidVaultOrder::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PrePaidVaultOrder::nameIsSet() const
{
    return nameIsSet_;
}

void PrePaidVaultOrder::unsetname()
{
    nameIsSet_ = false;
}

PrePaidBillingCreate PrePaidVaultOrder::getBilling() const
{
    return billing_;
}

void PrePaidVaultOrder::setBilling(const PrePaidBillingCreate& value)
{
    billing_ = value;
    billingIsSet_ = true;
}

bool PrePaidVaultOrder::billingIsSet() const
{
    return billingIsSet_;
}

void PrePaidVaultOrder::unsetbilling()
{
    billingIsSet_ = false;
}

std::vector<ResourceCreate>& PrePaidVaultOrder::getResources()
{
    return resources_;
}

void PrePaidVaultOrder::setResources(const std::vector<ResourceCreate>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool PrePaidVaultOrder::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void PrePaidVaultOrder::unsetresources()
{
    resourcesIsSet_ = false;
}

std::string PrePaidVaultOrder::getDescription() const
{
    return description_;
}

void PrePaidVaultOrder::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PrePaidVaultOrder::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PrePaidVaultOrder::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PrePaidVaultOrder::getBackupPolicyId() const
{
    return backupPolicyId_;
}

void PrePaidVaultOrder::setBackupPolicyId(const std::string& value)
{
    backupPolicyId_ = value;
    backupPolicyIdIsSet_ = true;
}

bool PrePaidVaultOrder::backupPolicyIdIsSet() const
{
    return backupPolicyIdIsSet_;
}

void PrePaidVaultOrder::unsetbackupPolicyId()
{
    backupPolicyIdIsSet_ = false;
}

std::vector<Tag>& PrePaidVaultOrder::getTags()
{
    return tags_;
}

void PrePaidVaultOrder::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool PrePaidVaultOrder::tagsIsSet() const
{
    return tagsIsSet_;
}

void PrePaidVaultOrder::unsettags()
{
    tagsIsSet_ = false;
}

std::string PrePaidVaultOrder::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void PrePaidVaultOrder::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool PrePaidVaultOrder::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void PrePaidVaultOrder::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool PrePaidVaultOrder::isAutoBind() const
{
    return autoBind_;
}

void PrePaidVaultOrder::setAutoBind(bool value)
{
    autoBind_ = value;
    autoBindIsSet_ = true;
}

bool PrePaidVaultOrder::autoBindIsSet() const
{
    return autoBindIsSet_;
}

void PrePaidVaultOrder::unsetautoBind()
{
    autoBindIsSet_ = false;
}

VaultBindRules PrePaidVaultOrder::getBindRules() const
{
    return bindRules_;
}

void PrePaidVaultOrder::setBindRules(const VaultBindRules& value)
{
    bindRules_ = value;
    bindRulesIsSet_ = true;
}

bool PrePaidVaultOrder::bindRulesIsSet() const
{
    return bindRulesIsSet_;
}

void PrePaidVaultOrder::unsetbindRules()
{
    bindRulesIsSet_ = false;
}

int32_t PrePaidVaultOrder::getThreshold() const
{
    return threshold_;
}

void PrePaidVaultOrder::setThreshold(int32_t value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool PrePaidVaultOrder::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void PrePaidVaultOrder::unsetthreshold()
{
    thresholdIsSet_ = false;
}

bool PrePaidVaultOrder::isSmnNotify() const
{
    return smnNotify_;
}

void PrePaidVaultOrder::setSmnNotify(bool value)
{
    smnNotify_ = value;
    smnNotifyIsSet_ = true;
}

bool PrePaidVaultOrder::smnNotifyIsSet() const
{
    return smnNotifyIsSet_;
}

void PrePaidVaultOrder::unsetsmnNotify()
{
    smnNotifyIsSet_ = false;
}

VaultCreateParameters PrePaidVaultOrder::getParameters() const
{
    return parameters_;
}

void PrePaidVaultOrder::setParameters(const VaultCreateParameters& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool PrePaidVaultOrder::parametersIsSet() const
{
    return parametersIsSet_;
}

void PrePaidVaultOrder::unsetparameters()
{
    parametersIsSet_ = false;
}

bool PrePaidVaultOrder::isAutoExpand() const
{
    return autoExpand_;
}

void PrePaidVaultOrder::setAutoExpand(bool value)
{
    autoExpand_ = value;
    autoExpandIsSet_ = true;
}

bool PrePaidVaultOrder::autoExpandIsSet() const
{
    return autoExpandIsSet_;
}

void PrePaidVaultOrder::unsetautoExpand()
{
    autoExpandIsSet_ = false;
}

bool PrePaidVaultOrder::isLocked() const
{
    return locked_;
}

void PrePaidVaultOrder::setLocked(bool value)
{
    locked_ = value;
    lockedIsSet_ = true;
}

bool PrePaidVaultOrder::lockedIsSet() const
{
    return lockedIsSet_;
}

void PrePaidVaultOrder::unsetlocked()
{
    lockedIsSet_ = false;
}

bool PrePaidVaultOrder::isCrossAccount() const
{
    return crossAccount_;
}

void PrePaidVaultOrder::setCrossAccount(bool value)
{
    crossAccount_ = value;
    crossAccountIsSet_ = true;
}

bool PrePaidVaultOrder::crossAccountIsSet() const
{
    return crossAccountIsSet_;
}

void PrePaidVaultOrder::unsetcrossAccount()
{
    crossAccountIsSet_ = false;
}

DataEncryption PrePaidVaultOrder::getDataEncryption() const
{
    return dataEncryption_;
}

void PrePaidVaultOrder::setDataEncryption(const DataEncryption& value)
{
    dataEncryption_ = value;
    dataEncryptionIsSet_ = true;
}

bool PrePaidVaultOrder::dataEncryptionIsSet() const
{
    return dataEncryptionIsSet_;
}

void PrePaidVaultOrder::unsetdataEncryption()
{
    dataEncryptionIsSet_ = false;
}

}
}
}
}
}


