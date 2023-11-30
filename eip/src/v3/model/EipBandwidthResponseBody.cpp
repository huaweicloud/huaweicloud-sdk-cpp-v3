

#include "huaweicloud/eip/v3/model/EipBandwidthResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




EipBandwidthResponseBody::EipBandwidthResponseBody()
{
    adminState_ = "";
    adminStateIsSet_ = false;
    ingressSize_ = 0;
    ingressSizeIsSet_ = false;
    ruleQuota_ = 0;
    ruleQuotaIsSet_ = false;
    ratio95peakPlus_ = 0;
    ratio95peakPlusIsSet_ = false;
    enableBandwidthRules_ = false;
    enableBandwidthRulesIsSet_ = false;
    bandwidthRulesIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
    bandwidthType_ = "";
    bandwidthTypeIsSet_ = false;
    billinginfo_ = "";
    billinginfoIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    publicipInfoIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    tagsIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

EipBandwidthResponseBody::~EipBandwidthResponseBody() = default;

void EipBandwidthResponseBody::validate()
{
}

web::json::value EipBandwidthResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(adminStateIsSet_) {
        val[utility::conversions::to_string_t("admin_state")] = ModelBase::toJson(adminState_);
    }
    if(ingressSizeIsSet_) {
        val[utility::conversions::to_string_t("ingress_size")] = ModelBase::toJson(ingressSize_);
    }
    if(ruleQuotaIsSet_) {
        val[utility::conversions::to_string_t("rule_quota")] = ModelBase::toJson(ruleQuota_);
    }
    if(ratio95peakPlusIsSet_) {
        val[utility::conversions::to_string_t("ratio_95peak_plus")] = ModelBase::toJson(ratio95peakPlus_);
    }
    if(enableBandwidthRulesIsSet_) {
        val[utility::conversions::to_string_t("enable_bandwidth_rules")] = ModelBase::toJson(enableBandwidthRules_);
    }
    if(bandwidthRulesIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_rules")] = ModelBase::toJson(bandwidthRules_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }
    if(bandwidthTypeIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_type")] = ModelBase::toJson(bandwidthType_);
    }
    if(billinginfoIsSet_) {
        val[utility::conversions::to_string_t("billinginfo")] = ModelBase::toJson(billinginfo_);
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool EipBandwidthResponseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("admin_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ingress_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ingress_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIngressSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ratio_95peak_plus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ratio_95peak_plus"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRatio95peakPlus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("bandwidth_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<BandWidthRules> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthRules(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("bandwidth_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billinginfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billinginfo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillinginfo(refVal);
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
            std::vector<PublicipInfoResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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


std::string EipBandwidthResponseBody::getAdminState() const
{
    return adminState_;
}

void EipBandwidthResponseBody::setAdminState(const std::string& value)
{
    adminState_ = value;
    adminStateIsSet_ = true;
}

bool EipBandwidthResponseBody::adminStateIsSet() const
{
    return adminStateIsSet_;
}

void EipBandwidthResponseBody::unsetadminState()
{
    adminStateIsSet_ = false;
}

int32_t EipBandwidthResponseBody::getIngressSize() const
{
    return ingressSize_;
}

void EipBandwidthResponseBody::setIngressSize(int32_t value)
{
    ingressSize_ = value;
    ingressSizeIsSet_ = true;
}

bool EipBandwidthResponseBody::ingressSizeIsSet() const
{
    return ingressSizeIsSet_;
}

void EipBandwidthResponseBody::unsetingressSize()
{
    ingressSizeIsSet_ = false;
}

int32_t EipBandwidthResponseBody::getRuleQuota() const
{
    return ruleQuota_;
}

void EipBandwidthResponseBody::setRuleQuota(int32_t value)
{
    ruleQuota_ = value;
    ruleQuotaIsSet_ = true;
}

bool EipBandwidthResponseBody::ruleQuotaIsSet() const
{
    return ruleQuotaIsSet_;
}

void EipBandwidthResponseBody::unsetruleQuota()
{
    ruleQuotaIsSet_ = false;
}

int32_t EipBandwidthResponseBody::getRatio95peakPlus() const
{
    return ratio95peakPlus_;
}

void EipBandwidthResponseBody::setRatio95peakPlus(int32_t value)
{
    ratio95peakPlus_ = value;
    ratio95peakPlusIsSet_ = true;
}

bool EipBandwidthResponseBody::ratio95peakPlusIsSet() const
{
    return ratio95peakPlusIsSet_;
}

void EipBandwidthResponseBody::unsetratio95peakPlus()
{
    ratio95peakPlusIsSet_ = false;
}

bool EipBandwidthResponseBody::isEnableBandwidthRules() const
{
    return enableBandwidthRules_;
}

void EipBandwidthResponseBody::setEnableBandwidthRules(bool value)
{
    enableBandwidthRules_ = value;
    enableBandwidthRulesIsSet_ = true;
}

bool EipBandwidthResponseBody::enableBandwidthRulesIsSet() const
{
    return enableBandwidthRulesIsSet_;
}

void EipBandwidthResponseBody::unsetenableBandwidthRules()
{
    enableBandwidthRulesIsSet_ = false;
}

std::vector<BandWidthRules>& EipBandwidthResponseBody::getBandwidthRules()
{
    return bandwidthRules_;
}

void EipBandwidthResponseBody::setBandwidthRules(const std::vector<BandWidthRules>& value)
{
    bandwidthRules_ = value;
    bandwidthRulesIsSet_ = true;
}

bool EipBandwidthResponseBody::bandwidthRulesIsSet() const
{
    return bandwidthRulesIsSet_;
}

void EipBandwidthResponseBody::unsetbandwidthRules()
{
    bandwidthRulesIsSet_ = false;
}

std::string EipBandwidthResponseBody::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void EipBandwidthResponseBody::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool EipBandwidthResponseBody::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void EipBandwidthResponseBody::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

std::string EipBandwidthResponseBody::getBandwidthType() const
{
    return bandwidthType_;
}

void EipBandwidthResponseBody::setBandwidthType(const std::string& value)
{
    bandwidthType_ = value;
    bandwidthTypeIsSet_ = true;
}

bool EipBandwidthResponseBody::bandwidthTypeIsSet() const
{
    return bandwidthTypeIsSet_;
}

void EipBandwidthResponseBody::unsetbandwidthType()
{
    bandwidthTypeIsSet_ = false;
}

std::string EipBandwidthResponseBody::getBillinginfo() const
{
    return billinginfo_;
}

void EipBandwidthResponseBody::setBillinginfo(const std::string& value)
{
    billinginfo_ = value;
    billinginfoIsSet_ = true;
}

bool EipBandwidthResponseBody::billinginfoIsSet() const
{
    return billinginfoIsSet_;
}

void EipBandwidthResponseBody::unsetbillinginfo()
{
    billinginfoIsSet_ = false;
}

std::string EipBandwidthResponseBody::getId() const
{
    return id_;
}

void EipBandwidthResponseBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EipBandwidthResponseBody::idIsSet() const
{
    return idIsSet_;
}

void EipBandwidthResponseBody::unsetid()
{
    idIsSet_ = false;
}

std::string EipBandwidthResponseBody::getName() const
{
    return name_;
}

void EipBandwidthResponseBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EipBandwidthResponseBody::nameIsSet() const
{
    return nameIsSet_;
}

void EipBandwidthResponseBody::unsetname()
{
    nameIsSet_ = false;
}

std::vector<PublicipInfoResponseBody>& EipBandwidthResponseBody::getPublicipInfo()
{
    return publicipInfo_;
}

void EipBandwidthResponseBody::setPublicipInfo(const std::vector<PublicipInfoResponseBody>& value)
{
    publicipInfo_ = value;
    publicipInfoIsSet_ = true;
}

bool EipBandwidthResponseBody::publicipInfoIsSet() const
{
    return publicipInfoIsSet_;
}

void EipBandwidthResponseBody::unsetpublicipInfo()
{
    publicipInfoIsSet_ = false;
}

std::string EipBandwidthResponseBody::getType() const
{
    return type_;
}

void EipBandwidthResponseBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool EipBandwidthResponseBody::typeIsSet() const
{
    return typeIsSet_;
}

void EipBandwidthResponseBody::unsettype()
{
    typeIsSet_ = false;
}

int32_t EipBandwidthResponseBody::getSize() const
{
    return size_;
}

void EipBandwidthResponseBody::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool EipBandwidthResponseBody::sizeIsSet() const
{
    return sizeIsSet_;
}

void EipBandwidthResponseBody::unsetsize()
{
    sizeIsSet_ = false;
}

std::string EipBandwidthResponseBody::getTenantId() const
{
    return tenantId_;
}

void EipBandwidthResponseBody::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool EipBandwidthResponseBody::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void EipBandwidthResponseBody::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::vector<std::string>& EipBandwidthResponseBody::getTags()
{
    return tags_;
}

void EipBandwidthResponseBody::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool EipBandwidthResponseBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void EipBandwidthResponseBody::unsettags()
{
    tagsIsSet_ = false;
}

utility::datetime EipBandwidthResponseBody::getCreatedAt() const
{
    return createdAt_;
}

void EipBandwidthResponseBody::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool EipBandwidthResponseBody::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void EipBandwidthResponseBody::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime EipBandwidthResponseBody::getUpdatedAt() const
{
    return updatedAt_;
}

void EipBandwidthResponseBody::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool EipBandwidthResponseBody::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void EipBandwidthResponseBody::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


