

#include "huaweicloud/eip/v2/model/BandwidthRespInsert.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BandwidthRespInsert::BandwidthRespInsert()
{
    bandwidthType_ = "";
    bandwidthTypeIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    publicipInfoIsSet_ = false;
    billingInfo_ = "";
    billingInfoIsSet_ = false;
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
}

BandwidthRespInsert::~BandwidthRespInsert() = default;

void BandwidthRespInsert::validate()
{
}

web::json::value BandwidthRespInsert::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthTypeIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_type")] = ModelBase::toJson(bandwidthType_);
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
    if(billingInfoIsSet_) {
        val[utility::conversions::to_string_t("billing_info")] = ModelBase::toJson(billingInfo_);
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

    return val;
}
bool BandwidthRespInsert::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("billing_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingInfo(refVal);
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
    return ok;
}


std::string BandwidthRespInsert::getBandwidthType() const
{
    return bandwidthType_;
}

void BandwidthRespInsert::setBandwidthType(const std::string& value)
{
    bandwidthType_ = value;
    bandwidthTypeIsSet_ = true;
}

bool BandwidthRespInsert::bandwidthTypeIsSet() const
{
    return bandwidthTypeIsSet_;
}

void BandwidthRespInsert::unsetbandwidthType()
{
    bandwidthTypeIsSet_ = false;
}

std::string BandwidthRespInsert::getChargeMode() const
{
    return chargeMode_;
}

void BandwidthRespInsert::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool BandwidthRespInsert::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void BandwidthRespInsert::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string BandwidthRespInsert::getId() const
{
    return id_;
}

void BandwidthRespInsert::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BandwidthRespInsert::idIsSet() const
{
    return idIsSet_;
}

void BandwidthRespInsert::unsetid()
{
    idIsSet_ = false;
}

std::string BandwidthRespInsert::getName() const
{
    return name_;
}

void BandwidthRespInsert::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BandwidthRespInsert::nameIsSet() const
{
    return nameIsSet_;
}

void BandwidthRespInsert::unsetname()
{
    nameIsSet_ = false;
}

std::vector<PublicipInfoResp>& BandwidthRespInsert::getPublicipInfo()
{
    return publicipInfo_;
}

void BandwidthRespInsert::setPublicipInfo(const std::vector<PublicipInfoResp>& value)
{
    publicipInfo_ = value;
    publicipInfoIsSet_ = true;
}

bool BandwidthRespInsert::publicipInfoIsSet() const
{
    return publicipInfoIsSet_;
}

void BandwidthRespInsert::unsetpublicipInfo()
{
    publicipInfoIsSet_ = false;
}

std::string BandwidthRespInsert::getBillingInfo() const
{
    return billingInfo_;
}

void BandwidthRespInsert::setBillingInfo(const std::string& value)
{
    billingInfo_ = value;
    billingInfoIsSet_ = true;
}

bool BandwidthRespInsert::billingInfoIsSet() const
{
    return billingInfoIsSet_;
}

void BandwidthRespInsert::unsetbillingInfo()
{
    billingInfoIsSet_ = false;
}

std::string BandwidthRespInsert::getShareType() const
{
    return shareType_;
}

void BandwidthRespInsert::setShareType(const std::string& value)
{
    shareType_ = value;
    shareTypeIsSet_ = true;
}

bool BandwidthRespInsert::shareTypeIsSet() const
{
    return shareTypeIsSet_;
}

void BandwidthRespInsert::unsetshareType()
{
    shareTypeIsSet_ = false;
}

int32_t BandwidthRespInsert::getSize() const
{
    return size_;
}

void BandwidthRespInsert::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BandwidthRespInsert::sizeIsSet() const
{
    return sizeIsSet_;
}

void BandwidthRespInsert::unsetsize()
{
    sizeIsSet_ = false;
}

std::string BandwidthRespInsert::getTenantId() const
{
    return tenantId_;
}

void BandwidthRespInsert::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool BandwidthRespInsert::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void BandwidthRespInsert::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string BandwidthRespInsert::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void BandwidthRespInsert::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool BandwidthRespInsert::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void BandwidthRespInsert::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string BandwidthRespInsert::getStatus() const
{
    return status_;
}

void BandwidthRespInsert::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BandwidthRespInsert::statusIsSet() const
{
    return statusIsSet_;
}

void BandwidthRespInsert::unsetstatus()
{
    statusIsSet_ = false;
}

bool BandwidthRespInsert::isEnableBandwidthRules() const
{
    return enableBandwidthRules_;
}

void BandwidthRespInsert::setEnableBandwidthRules(bool value)
{
    enableBandwidthRules_ = value;
    enableBandwidthRulesIsSet_ = true;
}

bool BandwidthRespInsert::enableBandwidthRulesIsSet() const
{
    return enableBandwidthRulesIsSet_;
}

void BandwidthRespInsert::unsetenableBandwidthRules()
{
    enableBandwidthRulesIsSet_ = false;
}

int32_t BandwidthRespInsert::getRuleQuota() const
{
    return ruleQuota_;
}

void BandwidthRespInsert::setRuleQuota(int32_t value)
{
    ruleQuota_ = value;
    ruleQuotaIsSet_ = true;
}

bool BandwidthRespInsert::ruleQuotaIsSet() const
{
    return ruleQuotaIsSet_;
}

void BandwidthRespInsert::unsetruleQuota()
{
    ruleQuotaIsSet_ = false;
}

std::vector<BandWidthRules>& BandwidthRespInsert::getBandwidthRules()
{
    return bandwidthRules_;
}

void BandwidthRespInsert::setBandwidthRules(const std::vector<BandWidthRules>& value)
{
    bandwidthRules_ = value;
    bandwidthRulesIsSet_ = true;
}

bool BandwidthRespInsert::bandwidthRulesIsSet() const
{
    return bandwidthRulesIsSet_;
}

void BandwidthRespInsert::unsetbandwidthRules()
{
    bandwidthRulesIsSet_ = false;
}

}
}
}
}
}


