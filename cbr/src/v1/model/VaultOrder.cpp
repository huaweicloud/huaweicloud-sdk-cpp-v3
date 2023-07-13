

#include "huaweicloud/cbr/v1/model/VaultOrder.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultOrder::VaultOrder()
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
}

VaultOrder::~VaultOrder() = default;

void VaultOrder::validate()
{
}

web::json::value VaultOrder::toJson() const
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

    return val;
}

bool VaultOrder::fromJson(const web::json::value& val)
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
            BillingCreate refVal;
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
    return ok;
}

std::string VaultOrder::getName() const
{
    return name_;
}

void VaultOrder::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VaultOrder::nameIsSet() const
{
    return nameIsSet_;
}

void VaultOrder::unsetname()
{
    nameIsSet_ = false;
}

BillingCreate VaultOrder::getBilling() const
{
    return billing_;
}

void VaultOrder::setBilling(const BillingCreate& value)
{
    billing_ = value;
    billingIsSet_ = true;
}

bool VaultOrder::billingIsSet() const
{
    return billingIsSet_;
}

void VaultOrder::unsetbilling()
{
    billingIsSet_ = false;
}

std::vector<ResourceCreate>& VaultOrder::getResources()
{
    return resources_;
}

void VaultOrder::setResources(const std::vector<ResourceCreate>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool VaultOrder::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void VaultOrder::unsetresources()
{
    resourcesIsSet_ = false;
}

std::string VaultOrder::getDescription() const
{
    return description_;
}

void VaultOrder::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool VaultOrder::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void VaultOrder::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string VaultOrder::getBackupPolicyId() const
{
    return backupPolicyId_;
}

void VaultOrder::setBackupPolicyId(const std::string& value)
{
    backupPolicyId_ = value;
    backupPolicyIdIsSet_ = true;
}

bool VaultOrder::backupPolicyIdIsSet() const
{
    return backupPolicyIdIsSet_;
}

void VaultOrder::unsetbackupPolicyId()
{
    backupPolicyIdIsSet_ = false;
}

std::vector<Tag>& VaultOrder::getTags()
{
    return tags_;
}

void VaultOrder::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool VaultOrder::tagsIsSet() const
{
    return tagsIsSet_;
}

void VaultOrder::unsettags()
{
    tagsIsSet_ = false;
}

std::string VaultOrder::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void VaultOrder::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool VaultOrder::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void VaultOrder::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool VaultOrder::isAutoBind() const
{
    return autoBind_;
}

void VaultOrder::setAutoBind(bool value)
{
    autoBind_ = value;
    autoBindIsSet_ = true;
}

bool VaultOrder::autoBindIsSet() const
{
    return autoBindIsSet_;
}

void VaultOrder::unsetautoBind()
{
    autoBindIsSet_ = false;
}

VaultBindRules VaultOrder::getBindRules() const
{
    return bindRules_;
}

void VaultOrder::setBindRules(const VaultBindRules& value)
{
    bindRules_ = value;
    bindRulesIsSet_ = true;
}

bool VaultOrder::bindRulesIsSet() const
{
    return bindRulesIsSet_;
}

void VaultOrder::unsetbindRules()
{
    bindRulesIsSet_ = false;
}

int32_t VaultOrder::getThreshold() const
{
    return threshold_;
}

void VaultOrder::setThreshold(int32_t value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool VaultOrder::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void VaultOrder::unsetthreshold()
{
    thresholdIsSet_ = false;
}

bool VaultOrder::isSmnNotify() const
{
    return smnNotify_;
}

void VaultOrder::setSmnNotify(bool value)
{
    smnNotify_ = value;
    smnNotifyIsSet_ = true;
}

bool VaultOrder::smnNotifyIsSet() const
{
    return smnNotifyIsSet_;
}

void VaultOrder::unsetsmnNotify()
{
    smnNotifyIsSet_ = false;
}

VaultCreateParameters VaultOrder::getParameters() const
{
    return parameters_;
}

void VaultOrder::setParameters(const VaultCreateParameters& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool VaultOrder::parametersIsSet() const
{
    return parametersIsSet_;
}

void VaultOrder::unsetparameters()
{
    parametersIsSet_ = false;
}

bool VaultOrder::isAutoExpand() const
{
    return autoExpand_;
}

void VaultOrder::setAutoExpand(bool value)
{
    autoExpand_ = value;
    autoExpandIsSet_ = true;
}

bool VaultOrder::autoExpandIsSet() const
{
    return autoExpandIsSet_;
}

void VaultOrder::unsetautoExpand()
{
    autoExpandIsSet_ = false;
}

}
}
}
}
}


