

#include "huaweicloud/eip/v3/model/ListBandwidthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListBandwidthRequest::ListBandwidthRequest()
{
    limit_ = "";
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    bandwidthType_ = "";
    bandwidthTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nameLike_ = "";
    nameLikeIsSet_ = false;
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

ListBandwidthRequest::~ListBandwidthRequest() = default;

void ListBandwidthRequest::validate()
{
}

web::json::value ListBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
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
bool ListBandwidthRequest::fromJson(const web::json::value& val)
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


std::string ListBandwidthRequest::getLimit() const
{
    return limit_;
}

void ListBandwidthRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBandwidthRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBandwidthRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListBandwidthRequest::getMarker() const
{
    return marker_;
}

void ListBandwidthRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListBandwidthRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListBandwidthRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListBandwidthRequest::getId() const
{
    return id_;
}

void ListBandwidthRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListBandwidthRequest::idIsSet() const
{
    return idIsSet_;
}

void ListBandwidthRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListBandwidthRequest::getBandwidthType() const
{
    return bandwidthType_;
}

void ListBandwidthRequest::setBandwidthType(const std::string& value)
{
    bandwidthType_ = value;
    bandwidthTypeIsSet_ = true;
}

bool ListBandwidthRequest::bandwidthTypeIsSet() const
{
    return bandwidthTypeIsSet_;
}

void ListBandwidthRequest::unsetbandwidthType()
{
    bandwidthTypeIsSet_ = false;
}

std::string ListBandwidthRequest::getName() const
{
    return name_;
}

void ListBandwidthRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListBandwidthRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListBandwidthRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListBandwidthRequest::getNameLike() const
{
    return nameLike_;
}

void ListBandwidthRequest::setNameLike(const std::string& value)
{
    nameLike_ = value;
    nameLikeIsSet_ = true;
}

bool ListBandwidthRequest::nameLikeIsSet() const
{
    return nameLikeIsSet_;
}

void ListBandwidthRequest::unsetnameLike()
{
    nameLikeIsSet_ = false;
}

std::string ListBandwidthRequest::getIngressSize() const
{
    return ingressSize_;
}

void ListBandwidthRequest::setIngressSize(const std::string& value)
{
    ingressSize_ = value;
    ingressSizeIsSet_ = true;
}

bool ListBandwidthRequest::ingressSizeIsSet() const
{
    return ingressSizeIsSet_;
}

void ListBandwidthRequest::unsetingressSize()
{
    ingressSizeIsSet_ = false;
}

std::string ListBandwidthRequest::getAdminState() const
{
    return adminState_;
}

void ListBandwidthRequest::setAdminState(const std::string& value)
{
    adminState_ = value;
    adminStateIsSet_ = true;
}

bool ListBandwidthRequest::adminStateIsSet() const
{
    return adminStateIsSet_;
}

void ListBandwidthRequest::unsetadminState()
{
    adminStateIsSet_ = false;
}

std::string ListBandwidthRequest::getBillingInfo() const
{
    return billingInfo_;
}

void ListBandwidthRequest::setBillingInfo(const std::string& value)
{
    billingInfo_ = value;
    billingInfoIsSet_ = true;
}

bool ListBandwidthRequest::billingInfoIsSet() const
{
    return billingInfoIsSet_;
}

void ListBandwidthRequest::unsetbillingInfo()
{
    billingInfoIsSet_ = false;
}

std::string ListBandwidthRequest::getTags() const
{
    return tags_;
}

void ListBandwidthRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListBandwidthRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListBandwidthRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string ListBandwidthRequest::getEnableBandwidthRules() const
{
    return enableBandwidthRules_;
}

void ListBandwidthRequest::setEnableBandwidthRules(const std::string& value)
{
    enableBandwidthRules_ = value;
    enableBandwidthRulesIsSet_ = true;
}

bool ListBandwidthRequest::enableBandwidthRulesIsSet() const
{
    return enableBandwidthRulesIsSet_;
}

void ListBandwidthRequest::unsetenableBandwidthRules()
{
    enableBandwidthRulesIsSet_ = false;
}

int32_t ListBandwidthRequest::getRuleQuota() const
{
    return ruleQuota_;
}

void ListBandwidthRequest::setRuleQuota(int32_t value)
{
    ruleQuota_ = value;
    ruleQuotaIsSet_ = true;
}

bool ListBandwidthRequest::ruleQuotaIsSet() const
{
    return ruleQuotaIsSet_;
}

void ListBandwidthRequest::unsetruleQuota()
{
    ruleQuotaIsSet_ = false;
}

std::string ListBandwidthRequest::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void ListBandwidthRequest::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool ListBandwidthRequest::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void ListBandwidthRequest::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

std::string ListBandwidthRequest::getChargeMode() const
{
    return chargeMode_;
}

void ListBandwidthRequest::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool ListBandwidthRequest::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void ListBandwidthRequest::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string ListBandwidthRequest::getSize() const
{
    return size_;
}

void ListBandwidthRequest::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListBandwidthRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListBandwidthRequest::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ListBandwidthRequest::getType() const
{
    return type_;
}

void ListBandwidthRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListBandwidthRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListBandwidthRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


