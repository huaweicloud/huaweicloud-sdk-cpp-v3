

#include "huaweicloud/eip/v2/model/BatchBandwidthResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchBandwidthResp::BatchBandwidthResp()
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
    status_ = "";
    statusIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
}

BatchBandwidthResp::~BatchBandwidthResp() = default;

void BatchBandwidthResp::validate()
{
}

web::json::value BatchBandwidthResp::toJson() const
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }

    return val;
}

bool BatchBandwidthResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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

std::string BatchBandwidthResp::getBandwidthType() const
{
    return bandwidthType_;
}

void BatchBandwidthResp::setBandwidthType(const std::string& value)
{
    bandwidthType_ = value;
    bandwidthTypeIsSet_ = true;
}

bool BatchBandwidthResp::bandwidthTypeIsSet() const
{
    return bandwidthTypeIsSet_;
}

void BatchBandwidthResp::unsetbandwidthType()
{
    bandwidthTypeIsSet_ = false;
}

std::string BatchBandwidthResp::getBillingInfo() const
{
    return billingInfo_;
}

void BatchBandwidthResp::setBillingInfo(const std::string& value)
{
    billingInfo_ = value;
    billingInfoIsSet_ = true;
}

bool BatchBandwidthResp::billingInfoIsSet() const
{
    return billingInfoIsSet_;
}

void BatchBandwidthResp::unsetbillingInfo()
{
    billingInfoIsSet_ = false;
}

std::string BatchBandwidthResp::getChargeMode() const
{
    return chargeMode_;
}

void BatchBandwidthResp::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool BatchBandwidthResp::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void BatchBandwidthResp::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string BatchBandwidthResp::getId() const
{
    return id_;
}

void BatchBandwidthResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchBandwidthResp::idIsSet() const
{
    return idIsSet_;
}

void BatchBandwidthResp::unsetid()
{
    idIsSet_ = false;
}

std::string BatchBandwidthResp::getName() const
{
    return name_;
}

void BatchBandwidthResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BatchBandwidthResp::nameIsSet() const
{
    return nameIsSet_;
}

void BatchBandwidthResp::unsetname()
{
    nameIsSet_ = false;
}

std::vector<PublicipInfoResp>& BatchBandwidthResp::getPublicipInfo()
{
    return publicipInfo_;
}

void BatchBandwidthResp::setPublicipInfo(const std::vector<PublicipInfoResp>& value)
{
    publicipInfo_ = value;
    publicipInfoIsSet_ = true;
}

bool BatchBandwidthResp::publicipInfoIsSet() const
{
    return publicipInfoIsSet_;
}

void BatchBandwidthResp::unsetpublicipInfo()
{
    publicipInfoIsSet_ = false;
}

std::string BatchBandwidthResp::getShareType() const
{
    return shareType_;
}

void BatchBandwidthResp::setShareType(const std::string& value)
{
    shareType_ = value;
    shareTypeIsSet_ = true;
}

bool BatchBandwidthResp::shareTypeIsSet() const
{
    return shareTypeIsSet_;
}

void BatchBandwidthResp::unsetshareType()
{
    shareTypeIsSet_ = false;
}

int32_t BatchBandwidthResp::getSize() const
{
    return size_;
}

void BatchBandwidthResp::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BatchBandwidthResp::sizeIsSet() const
{
    return sizeIsSet_;
}

void BatchBandwidthResp::unsetsize()
{
    sizeIsSet_ = false;
}

std::string BatchBandwidthResp::getTenantId() const
{
    return tenantId_;
}

void BatchBandwidthResp::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool BatchBandwidthResp::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void BatchBandwidthResp::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string BatchBandwidthResp::getStatus() const
{
    return status_;
}

void BatchBandwidthResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchBandwidthResp::statusIsSet() const
{
    return statusIsSet_;
}

void BatchBandwidthResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BatchBandwidthResp::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void BatchBandwidthResp::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool BatchBandwidthResp::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void BatchBandwidthResp::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

}
}
}
}
}


