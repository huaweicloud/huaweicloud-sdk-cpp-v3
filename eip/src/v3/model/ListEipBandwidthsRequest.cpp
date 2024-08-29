

#include "huaweicloud/eip/v3/model/ListEipBandwidthsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListEipBandwidthsRequest::ListEipBandwidthsRequest()
{
    limit_ = "";
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    fieldsIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    bandwidthType_ = "";
    bandwidthTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nameLike_ = "";
    nameLikeIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    ingressSize_ = "";
    ingressSizeIsSet_ = false;
    adminState_ = "";
    adminStateIsSet_ = false;
    billingInfo_ = "";
    billingInfoIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    enableBandwidthRules_ = "";
    enableBandwidthRulesIsSet_ = false;
    ruleQuota_ = 0;
    ruleQuotaIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ListEipBandwidthsRequest::~ListEipBandwidthsRequest() = default;

void ListEipBandwidthsRequest::validate()
{
}

web::json::value ListEipBandwidthsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bandwidthTypeIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_type")] = ModelBase::toJson(bandwidthType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nameLikeIsSet_) {
        val[utility::conversions::to_string_t("name_like")] = ModelBase::toJson(nameLike_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(ingressSizeIsSet_) {
        val[utility::conversions::to_string_t("ingress_size")] = ModelBase::toJson(ingressSize_);
    }
    if(adminStateIsSet_) {
        val[utility::conversions::to_string_t("admin_state")] = ModelBase::toJson(adminState_);
    }
    if(billingInfoIsSet_) {
        val[utility::conversions::to_string_t("billing_info")] = ModelBase::toJson(billingInfo_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(enableBandwidthRulesIsSet_) {
        val[utility::conversions::to_string_t("enable_bandwidth_rules")] = ModelBase::toJson(enableBandwidthRules_);
    }
    if(ruleQuotaIsSet_) {
        val[utility::conversions::to_string_t("rule_quota")] = ModelBase::toJson(ruleQuota_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListEipBandwidthsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("bandwidth_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name_like"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_like"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameLike(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ingress_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ingress_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIngressSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("admin_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_bandwidth_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_bandwidth_rules"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_border_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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
    return ok;
}


std::string ListEipBandwidthsRequest::getLimit() const
{
    return limit_;
}

void ListEipBandwidthsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEipBandwidthsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListEipBandwidthsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListEipBandwidthsRequest::getMarker() const
{
    return marker_;
}

void ListEipBandwidthsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListEipBandwidthsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListEipBandwidthsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::vector<std::string>& ListEipBandwidthsRequest::getFields()
{
    return fields_;
}

void ListEipBandwidthsRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListEipBandwidthsRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListEipBandwidthsRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::string ListEipBandwidthsRequest::getId() const
{
    return id_;
}

void ListEipBandwidthsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListEipBandwidthsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListEipBandwidthsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListEipBandwidthsRequest::getBandwidthType() const
{
    return bandwidthType_;
}

void ListEipBandwidthsRequest::setBandwidthType(const std::string& value)
{
    bandwidthType_ = value;
    bandwidthTypeIsSet_ = true;
}

bool ListEipBandwidthsRequest::bandwidthTypeIsSet() const
{
    return bandwidthTypeIsSet_;
}

void ListEipBandwidthsRequest::unsetbandwidthType()
{
    bandwidthTypeIsSet_ = false;
}

std::string ListEipBandwidthsRequest::getName() const
{
    return name_;
}

void ListEipBandwidthsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListEipBandwidthsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListEipBandwidthsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListEipBandwidthsRequest::getNameLike() const
{
    return nameLike_;
}

void ListEipBandwidthsRequest::setNameLike(const std::string& value)
{
    nameLike_ = value;
    nameLikeIsSet_ = true;
}

bool ListEipBandwidthsRequest::nameLikeIsSet() const
{
    return nameLikeIsSet_;
}

void ListEipBandwidthsRequest::unsetnameLike()
{
    nameLikeIsSet_ = false;
}

std::string ListEipBandwidthsRequest::getTenantId() const
{
    return tenantId_;
}

void ListEipBandwidthsRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ListEipBandwidthsRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ListEipBandwidthsRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ListEipBandwidthsRequest::getIngressSize() const
{
    return ingressSize_;
}

void ListEipBandwidthsRequest::setIngressSize(const std::string& value)
{
    ingressSize_ = value;
    ingressSizeIsSet_ = true;
}

bool ListEipBandwidthsRequest::ingressSizeIsSet() const
{
    return ingressSizeIsSet_;
}

void ListEipBandwidthsRequest::unsetingressSize()
{
    ingressSizeIsSet_ = false;
}

std::string ListEipBandwidthsRequest::getAdminState() const
{
    return adminState_;
}

void ListEipBandwidthsRequest::setAdminState(const std::string& value)
{
    adminState_ = value;
    adminStateIsSet_ = true;
}

bool ListEipBandwidthsRequest::adminStateIsSet() const
{
    return adminStateIsSet_;
}

void ListEipBandwidthsRequest::unsetadminState()
{
    adminStateIsSet_ = false;
}

std::string ListEipBandwidthsRequest::getBillingInfo() const
{
    return billingInfo_;
}

void ListEipBandwidthsRequest::setBillingInfo(const std::string& value)
{
    billingInfo_ = value;
    billingInfoIsSet_ = true;
}

bool ListEipBandwidthsRequest::billingInfoIsSet() const
{
    return billingInfoIsSet_;
}

void ListEipBandwidthsRequest::unsetbillingInfo()
{
    billingInfoIsSet_ = false;
}

std::string ListEipBandwidthsRequest::getTags() const
{
    return tags_;
}

void ListEipBandwidthsRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListEipBandwidthsRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListEipBandwidthsRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string ListEipBandwidthsRequest::getEnableBandwidthRules() const
{
    return enableBandwidthRules_;
}

void ListEipBandwidthsRequest::setEnableBandwidthRules(const std::string& value)
{
    enableBandwidthRules_ = value;
    enableBandwidthRulesIsSet_ = true;
}

bool ListEipBandwidthsRequest::enableBandwidthRulesIsSet() const
{
    return enableBandwidthRulesIsSet_;
}

void ListEipBandwidthsRequest::unsetenableBandwidthRules()
{
    enableBandwidthRulesIsSet_ = false;
}

int32_t ListEipBandwidthsRequest::getRuleQuota() const
{
    return ruleQuota_;
}

void ListEipBandwidthsRequest::setRuleQuota(int32_t value)
{
    ruleQuota_ = value;
    ruleQuotaIsSet_ = true;
}

bool ListEipBandwidthsRequest::ruleQuotaIsSet() const
{
    return ruleQuotaIsSet_;
}

void ListEipBandwidthsRequest::unsetruleQuota()
{
    ruleQuotaIsSet_ = false;
}

std::string ListEipBandwidthsRequest::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void ListEipBandwidthsRequest::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool ListEipBandwidthsRequest::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void ListEipBandwidthsRequest::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

std::string ListEipBandwidthsRequest::getChargeMode() const
{
    return chargeMode_;
}

void ListEipBandwidthsRequest::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool ListEipBandwidthsRequest::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void ListEipBandwidthsRequest::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string ListEipBandwidthsRequest::getSize() const
{
    return size_;
}

void ListEipBandwidthsRequest::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListEipBandwidthsRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListEipBandwidthsRequest::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ListEipBandwidthsRequest::getType() const
{
    return type_;
}

void ListEipBandwidthsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListEipBandwidthsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListEipBandwidthsRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


