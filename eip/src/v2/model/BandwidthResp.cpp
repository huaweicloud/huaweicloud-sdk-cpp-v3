

#include "huaweicloud/eip/v2/model/BandwidthResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BandwidthResp::BandwidthResp()
{
    bandwidthType_ = "";
    bandwidthTypeIsSet_ = false;
    billingInfo_ = "";
    billingInfoIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    publicipInfoIsSet_ = false;
    shareType_ = "";
    shareTypeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    enableBandwidthRules_ = false;
    enableBandwidthRulesIsSet_ = false;
    ruleQuota_ = 0;
    ruleQuotaIsSet_ = false;
    bandwidthRulesIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
}

BandwidthResp::~BandwidthResp() = default;

void BandwidthResp::validate()
{
}

web::json::value BandwidthResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthTypeIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_type")] = ModelBase::toJson(bandwidthType_);
    }
    if(billingInfoIsSet_) {
        val[utility::conversions::to_string_t("billing_info")] = ModelBase::toJson(billingInfo_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(publicipInfoIsSet_) {
        val[utility::conversions::to_string_t("publicip_info")] = ModelBase::toJson(publicipInfo_);
    }
    if(shareTypeIsSet_) {
        val[utility::conversions::to_string_t("share_type")] = ModelBase::toJson(shareType_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(enableBandwidthRulesIsSet_) {
        val[utility::conversions::to_string_t("enable_bandwidth_rules")] = ModelBase::toJson(enableBandwidthRules_);
    }
    if(ruleQuotaIsSet_) {
        val[utility::conversions::to_string_t("rule_quota")] = ModelBase::toJson(ruleQuota_);
    }
    if(bandwidthRulesIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_rules")] = ModelBase::toJson(bandwidthRules_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }

    return val;
}
bool BandwidthResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billing_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("publicip_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_info"));
        if(!fieldValue.is_null())
        {
            std::vector<PublicipInfoResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("share_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("share_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShareType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enable_bandwidth_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_bandwidth_rules"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableBandwidthRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<BandWidthRules> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthRules(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_border_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
        }
    }
    return ok;
}


std::string BandwidthResp::getBandwidthType() const
{
    return bandwidthType_;
}

void BandwidthResp::setBandwidthType(const std::string& value)
{
    bandwidthType_ = value;
    bandwidthTypeIsSet_ = true;
}

bool BandwidthResp::bandwidthTypeIsSet() const
{
    return bandwidthTypeIsSet_;
}

void BandwidthResp::unsetbandwidthType()
{
    bandwidthTypeIsSet_ = false;
}

std::string BandwidthResp::getBillingInfo() const
{
    return billingInfo_;
}

void BandwidthResp::setBillingInfo(const std::string& value)
{
    billingInfo_ = value;
    billingInfoIsSet_ = true;
}

bool BandwidthResp::billingInfoIsSet() const
{
    return billingInfoIsSet_;
}

void BandwidthResp::unsetbillingInfo()
{
    billingInfoIsSet_ = false;
}

std::string BandwidthResp::getChargeMode() const
{
    return chargeMode_;
}

void BandwidthResp::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool BandwidthResp::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void BandwidthResp::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string BandwidthResp::getId() const
{
    return id_;
}

void BandwidthResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BandwidthResp::idIsSet() const
{
    return idIsSet_;
}

void BandwidthResp::unsetid()
{
    idIsSet_ = false;
}

std::string BandwidthResp::getName() const
{
    return name_;
}

void BandwidthResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BandwidthResp::nameIsSet() const
{
    return nameIsSet_;
}

void BandwidthResp::unsetname()
{
    nameIsSet_ = false;
}

std::vector<PublicipInfoResp>& BandwidthResp::getPublicipInfo()
{
    return publicipInfo_;
}

void BandwidthResp::setPublicipInfo(const std::vector<PublicipInfoResp>& value)
{
    publicipInfo_ = value;
    publicipInfoIsSet_ = true;
}

bool BandwidthResp::publicipInfoIsSet() const
{
    return publicipInfoIsSet_;
}

void BandwidthResp::unsetpublicipInfo()
{
    publicipInfoIsSet_ = false;
}

std::string BandwidthResp::getShareType() const
{
    return shareType_;
}

void BandwidthResp::setShareType(const std::string& value)
{
    shareType_ = value;
    shareTypeIsSet_ = true;
}

bool BandwidthResp::shareTypeIsSet() const
{
    return shareTypeIsSet_;
}

void BandwidthResp::unsetshareType()
{
    shareTypeIsSet_ = false;
}

int32_t BandwidthResp::getSize() const
{
    return size_;
}

void BandwidthResp::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BandwidthResp::sizeIsSet() const
{
    return sizeIsSet_;
}

void BandwidthResp::unsetsize()
{
    sizeIsSet_ = false;
}

std::string BandwidthResp::getTenantId() const
{
    return tenantId_;
}

void BandwidthResp::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool BandwidthResp::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void BandwidthResp::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string BandwidthResp::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void BandwidthResp::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool BandwidthResp::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void BandwidthResp::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string BandwidthResp::getStatus() const
{
    return status_;
}

void BandwidthResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BandwidthResp::statusIsSet() const
{
    return statusIsSet_;
}

void BandwidthResp::unsetstatus()
{
    statusIsSet_ = false;
}

bool BandwidthResp::isEnableBandwidthRules() const
{
    return enableBandwidthRules_;
}

void BandwidthResp::setEnableBandwidthRules(bool value)
{
    enableBandwidthRules_ = value;
    enableBandwidthRulesIsSet_ = true;
}

bool BandwidthResp::enableBandwidthRulesIsSet() const
{
    return enableBandwidthRulesIsSet_;
}

void BandwidthResp::unsetenableBandwidthRules()
{
    enableBandwidthRulesIsSet_ = false;
}

int32_t BandwidthResp::getRuleQuota() const
{
    return ruleQuota_;
}

void BandwidthResp::setRuleQuota(int32_t value)
{
    ruleQuota_ = value;
    ruleQuotaIsSet_ = true;
}

bool BandwidthResp::ruleQuotaIsSet() const
{
    return ruleQuotaIsSet_;
}

void BandwidthResp::unsetruleQuota()
{
    ruleQuotaIsSet_ = false;
}

std::vector<BandWidthRules>& BandwidthResp::getBandwidthRules()
{
    return bandwidthRules_;
}

void BandwidthResp::setBandwidthRules(const std::vector<BandWidthRules>& value)
{
    bandwidthRules_ = value;
    bandwidthRulesIsSet_ = true;
}

bool BandwidthResp::bandwidthRulesIsSet() const
{
    return bandwidthRulesIsSet_;
}

void BandwidthResp::unsetbandwidthRules()
{
    bandwidthRulesIsSet_ = false;
}

std::string BandwidthResp::getCreatedAt() const
{
    return createdAt_;
}

void BandwidthResp::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool BandwidthResp::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void BandwidthResp::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string BandwidthResp::getUpdatedAt() const
{
    return updatedAt_;
}

void BandwidthResp::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool BandwidthResp::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void BandwidthResp::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string BandwidthResp::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void BandwidthResp::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool BandwidthResp::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void BandwidthResp::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

}
}
}
}
}


