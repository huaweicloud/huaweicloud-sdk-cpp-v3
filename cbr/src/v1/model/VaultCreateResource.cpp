

#include "huaweicloud/cbr/v1/model/VaultCreateResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultCreateResource::VaultCreateResource()
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
    errText_ = "";
    errTextIsSet_ = false;
    retCode_ = "";
    retCodeIsSet_ = false;
    ordersIsSet_ = false;
    backupNamePrefix_ = "";
    backupNamePrefixIsSet_ = false;
    demandBilling_ = false;
    demandBillingIsSet_ = false;
    cbcDeleteCount_ = 0;
    cbcDeleteCountIsSet_ = false;
    frozen_ = false;
    frozenIsSet_ = false;
    sysLockSourceService_ = "";
    sysLockSourceServiceIsSet_ = false;
}

VaultCreateResource::~VaultCreateResource() = default;

void VaultCreateResource::validate()
{
}

web::json::value VaultCreateResource::toJson() const
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
    if(errTextIsSet_) {
        val[utility::conversions::to_string_t("errText")] = ModelBase::toJson(errText_);
    }
    if(retCodeIsSet_) {
        val[utility::conversions::to_string_t("retCode")] = ModelBase::toJson(retCode_);
    }
    if(ordersIsSet_) {
        val[utility::conversions::to_string_t("orders")] = ModelBase::toJson(orders_);
    }
    if(backupNamePrefixIsSet_) {
        val[utility::conversions::to_string_t("backup_name_prefix")] = ModelBase::toJson(backupNamePrefix_);
    }
    if(demandBillingIsSet_) {
        val[utility::conversions::to_string_t("demand_billing")] = ModelBase::toJson(demandBilling_);
    }
    if(cbcDeleteCountIsSet_) {
        val[utility::conversions::to_string_t("cbc_delete_count")] = ModelBase::toJson(cbcDeleteCount_);
    }
    if(frozenIsSet_) {
        val[utility::conversions::to_string_t("frozen")] = ModelBase::toJson(frozen_);
    }
    if(sysLockSourceServiceIsSet_) {
        val[utility::conversions::to_string_t("sys_lock_source_service")] = ModelBase::toJson(sysLockSourceService_);
    }

    return val;
}
bool VaultCreateResource::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("errText"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errText"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("orders"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("orders"));
        if(!fieldValue.is_null())
        {
            std::vector<CbcOrderResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrders(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cbc_delete_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cbc_delete_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCbcDeleteCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frozen"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frozen"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrozen(refVal);
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


Billing VaultCreateResource::getBilling() const
{
    return billing_;
}

void VaultCreateResource::setBilling(const Billing& value)
{
    billing_ = value;
    billingIsSet_ = true;
}

bool VaultCreateResource::billingIsSet() const
{
    return billingIsSet_;
}

void VaultCreateResource::unsetbilling()
{
    billingIsSet_ = false;
}

std::string VaultCreateResource::getDescription() const
{
    return description_;
}

void VaultCreateResource::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool VaultCreateResource::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void VaultCreateResource::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string VaultCreateResource::getId() const
{
    return id_;
}

void VaultCreateResource::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VaultCreateResource::idIsSet() const
{
    return idIsSet_;
}

void VaultCreateResource::unsetid()
{
    idIsSet_ = false;
}

std::string VaultCreateResource::getName() const
{
    return name_;
}

void VaultCreateResource::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VaultCreateResource::nameIsSet() const
{
    return nameIsSet_;
}

void VaultCreateResource::unsetname()
{
    nameIsSet_ = false;
}

std::string VaultCreateResource::getProjectId() const
{
    return projectId_;
}

void VaultCreateResource::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool VaultCreateResource::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void VaultCreateResource::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string VaultCreateResource::getProviderId() const
{
    return providerId_;
}

void VaultCreateResource::setProviderId(const std::string& value)
{
    providerId_ = value;
    providerIdIsSet_ = true;
}

bool VaultCreateResource::providerIdIsSet() const
{
    return providerIdIsSet_;
}

void VaultCreateResource::unsetproviderId()
{
    providerIdIsSet_ = false;
}

std::vector<ResourceResp>& VaultCreateResource::getResources()
{
    return resources_;
}

void VaultCreateResource::setResources(const std::vector<ResourceResp>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool VaultCreateResource::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void VaultCreateResource::unsetresources()
{
    resourcesIsSet_ = false;
}

std::vector<Tag>& VaultCreateResource::getTags()
{
    return tags_;
}

void VaultCreateResource::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool VaultCreateResource::tagsIsSet() const
{
    return tagsIsSet_;
}

void VaultCreateResource::unsettags()
{
    tagsIsSet_ = false;
}

std::string VaultCreateResource::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void VaultCreateResource::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool VaultCreateResource::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void VaultCreateResource::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool VaultCreateResource::isAutoBind() const
{
    return autoBind_;
}

void VaultCreateResource::setAutoBind(bool value)
{
    autoBind_ = value;
    autoBindIsSet_ = true;
}

bool VaultCreateResource::autoBindIsSet() const
{
    return autoBindIsSet_;
}

void VaultCreateResource::unsetautoBind()
{
    autoBindIsSet_ = false;
}

VaultBindRules VaultCreateResource::getBindRules() const
{
    return bindRules_;
}

void VaultCreateResource::setBindRules(const VaultBindRules& value)
{
    bindRules_ = value;
    bindRulesIsSet_ = true;
}

bool VaultCreateResource::bindRulesIsSet() const
{
    return bindRulesIsSet_;
}

void VaultCreateResource::unsetbindRules()
{
    bindRulesIsSet_ = false;
}

std::string VaultCreateResource::getUserId() const
{
    return userId_;
}

void VaultCreateResource::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool VaultCreateResource::userIdIsSet() const
{
    return userIdIsSet_;
}

void VaultCreateResource::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string VaultCreateResource::getCreatedAt() const
{
    return createdAt_;
}

void VaultCreateResource::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool VaultCreateResource::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void VaultCreateResource::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

bool VaultCreateResource::isAutoExpand() const
{
    return autoExpand_;
}

void VaultCreateResource::setAutoExpand(bool value)
{
    autoExpand_ = value;
    autoExpandIsSet_ = true;
}

bool VaultCreateResource::autoExpandIsSet() const
{
    return autoExpandIsSet_;
}

void VaultCreateResource::unsetautoExpand()
{
    autoExpandIsSet_ = false;
}

bool VaultCreateResource::isSmnNotify() const
{
    return smnNotify_;
}

void VaultCreateResource::setSmnNotify(bool value)
{
    smnNotify_ = value;
    smnNotifyIsSet_ = true;
}

bool VaultCreateResource::smnNotifyIsSet() const
{
    return smnNotifyIsSet_;
}

void VaultCreateResource::unsetsmnNotify()
{
    smnNotifyIsSet_ = false;
}

int32_t VaultCreateResource::getThreshold() const
{
    return threshold_;
}

void VaultCreateResource::setThreshold(int32_t value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool VaultCreateResource::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void VaultCreateResource::unsetthreshold()
{
    thresholdIsSet_ = false;
}

std::string VaultCreateResource::getErrText() const
{
    return errText_;
}

void VaultCreateResource::setErrText(const std::string& value)
{
    errText_ = value;
    errTextIsSet_ = true;
}

bool VaultCreateResource::errTextIsSet() const
{
    return errTextIsSet_;
}

void VaultCreateResource::unseterrText()
{
    errTextIsSet_ = false;
}

std::string VaultCreateResource::getRetCode() const
{
    return retCode_;
}

void VaultCreateResource::setRetCode(const std::string& value)
{
    retCode_ = value;
    retCodeIsSet_ = true;
}

bool VaultCreateResource::retCodeIsSet() const
{
    return retCodeIsSet_;
}

void VaultCreateResource::unsetretCode()
{
    retCodeIsSet_ = false;
}

std::vector<CbcOrderResult>& VaultCreateResource::getOrders()
{
    return orders_;
}

void VaultCreateResource::setOrders(const std::vector<CbcOrderResult>& value)
{
    orders_ = value;
    ordersIsSet_ = true;
}

bool VaultCreateResource::ordersIsSet() const
{
    return ordersIsSet_;
}

void VaultCreateResource::unsetorders()
{
    ordersIsSet_ = false;
}

std::string VaultCreateResource::getBackupNamePrefix() const
{
    return backupNamePrefix_;
}

void VaultCreateResource::setBackupNamePrefix(const std::string& value)
{
    backupNamePrefix_ = value;
    backupNamePrefixIsSet_ = true;
}

bool VaultCreateResource::backupNamePrefixIsSet() const
{
    return backupNamePrefixIsSet_;
}

void VaultCreateResource::unsetbackupNamePrefix()
{
    backupNamePrefixIsSet_ = false;
}

bool VaultCreateResource::isDemandBilling() const
{
    return demandBilling_;
}

void VaultCreateResource::setDemandBilling(bool value)
{
    demandBilling_ = value;
    demandBillingIsSet_ = true;
}

bool VaultCreateResource::demandBillingIsSet() const
{
    return demandBillingIsSet_;
}

void VaultCreateResource::unsetdemandBilling()
{
    demandBillingIsSet_ = false;
}

int32_t VaultCreateResource::getCbcDeleteCount() const
{
    return cbcDeleteCount_;
}

void VaultCreateResource::setCbcDeleteCount(int32_t value)
{
    cbcDeleteCount_ = value;
    cbcDeleteCountIsSet_ = true;
}

bool VaultCreateResource::cbcDeleteCountIsSet() const
{
    return cbcDeleteCountIsSet_;
}

void VaultCreateResource::unsetcbcDeleteCount()
{
    cbcDeleteCountIsSet_ = false;
}

bool VaultCreateResource::isFrozen() const
{
    return frozen_;
}

void VaultCreateResource::setFrozen(bool value)
{
    frozen_ = value;
    frozenIsSet_ = true;
}

bool VaultCreateResource::frozenIsSet() const
{
    return frozenIsSet_;
}

void VaultCreateResource::unsetfrozen()
{
    frozenIsSet_ = false;
}

std::string VaultCreateResource::getSysLockSourceService() const
{
    return sysLockSourceService_;
}

void VaultCreateResource::setSysLockSourceService(const std::string& value)
{
    sysLockSourceService_ = value;
    sysLockSourceServiceIsSet_ = true;
}

bool VaultCreateResource::sysLockSourceServiceIsSet() const
{
    return sysLockSourceServiceIsSet_;
}

void VaultCreateResource::unsetsysLockSourceService()
{
    sysLockSourceServiceIsSet_ = false;
}

}
}
}
}
}


