

#include "huaweicloud/gaussdbforopengauss/v3/model/BindedEipResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BindedEipResult::BindedEipResult()
{
    publicIpId_ = "";
    publicIpIdIsSet_ = false;
    publicIpType_ = "";
    publicIpTypeIsSet_ = false;
    portId_ = "";
    portIdIsSet_ = false;
    publicIpAddress_ = "";
    publicIpAddressIsSet_ = false;
    privateIpAddress_ = "";
    privateIpAddressIsSet_ = false;
    bandwidthId_ = "";
    bandwidthIdIsSet_ = false;
    bandwidthName_ = "";
    bandwidthNameIsSet_ = false;
    bandwidthShareType_ = "";
    bandwidthShareTypeIsSet_ = false;
    bandwidthSize_ = 0;
    bandwidthSizeIsSet_ = false;
    appliedAt_ = "";
    appliedAtIsSet_ = false;
}

BindedEipResult::~BindedEipResult() = default;

void BindedEipResult::validate()
{
}

web::json::value BindedEipResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicIpIdIsSet_) {
        val[utility::conversions::to_string_t("public_ip_id")] = ModelBase::toJson(publicIpId_);
    }
    if(publicIpTypeIsSet_) {
        val[utility::conversions::to_string_t("public_ip_type")] = ModelBase::toJson(publicIpType_);
    }
    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(publicIpAddressIsSet_) {
        val[utility::conversions::to_string_t("public_ip_address")] = ModelBase::toJson(publicIpAddress_);
    }
    if(privateIpAddressIsSet_) {
        val[utility::conversions::to_string_t("private_ip_address")] = ModelBase::toJson(privateIpAddress_);
    }
    if(bandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_id")] = ModelBase::toJson(bandwidthId_);
    }
    if(bandwidthNameIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_name")] = ModelBase::toJson(bandwidthName_);
    }
    if(bandwidthShareTypeIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_share_type")] = ModelBase::toJson(bandwidthShareType_);
    }
    if(bandwidthSizeIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_size")] = ModelBase::toJson(bandwidthSize_);
    }
    if(appliedAtIsSet_) {
        val[utility::conversions::to_string_t("applied_at")] = ModelBase::toJson(appliedAt_);
    }

    return val;
}

bool BindedEipResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("public_ip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth_share_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_share_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthShareType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("applied_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applied_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppliedAt(refVal);
        }
    }
    return ok;
}

std::string BindedEipResult::getPublicIpId() const
{
    return publicIpId_;
}

void BindedEipResult::setPublicIpId(const std::string& value)
{
    publicIpId_ = value;
    publicIpIdIsSet_ = true;
}

bool BindedEipResult::publicIpIdIsSet() const
{
    return publicIpIdIsSet_;
}

void BindedEipResult::unsetpublicIpId()
{
    publicIpIdIsSet_ = false;
}

std::string BindedEipResult::getPublicIpType() const
{
    return publicIpType_;
}

void BindedEipResult::setPublicIpType(const std::string& value)
{
    publicIpType_ = value;
    publicIpTypeIsSet_ = true;
}

bool BindedEipResult::publicIpTypeIsSet() const
{
    return publicIpTypeIsSet_;
}

void BindedEipResult::unsetpublicIpType()
{
    publicIpTypeIsSet_ = false;
}

std::string BindedEipResult::getPortId() const
{
    return portId_;
}

void BindedEipResult::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool BindedEipResult::portIdIsSet() const
{
    return portIdIsSet_;
}

void BindedEipResult::unsetportId()
{
    portIdIsSet_ = false;
}

std::string BindedEipResult::getPublicIpAddress() const
{
    return publicIpAddress_;
}

void BindedEipResult::setPublicIpAddress(const std::string& value)
{
    publicIpAddress_ = value;
    publicIpAddressIsSet_ = true;
}

bool BindedEipResult::publicIpAddressIsSet() const
{
    return publicIpAddressIsSet_;
}

void BindedEipResult::unsetpublicIpAddress()
{
    publicIpAddressIsSet_ = false;
}

std::string BindedEipResult::getPrivateIpAddress() const
{
    return privateIpAddress_;
}

void BindedEipResult::setPrivateIpAddress(const std::string& value)
{
    privateIpAddress_ = value;
    privateIpAddressIsSet_ = true;
}

bool BindedEipResult::privateIpAddressIsSet() const
{
    return privateIpAddressIsSet_;
}

void BindedEipResult::unsetprivateIpAddress()
{
    privateIpAddressIsSet_ = false;
}

std::string BindedEipResult::getBandwidthId() const
{
    return bandwidthId_;
}

void BindedEipResult::setBandwidthId(const std::string& value)
{
    bandwidthId_ = value;
    bandwidthIdIsSet_ = true;
}

bool BindedEipResult::bandwidthIdIsSet() const
{
    return bandwidthIdIsSet_;
}

void BindedEipResult::unsetbandwidthId()
{
    bandwidthIdIsSet_ = false;
}

std::string BindedEipResult::getBandwidthName() const
{
    return bandwidthName_;
}

void BindedEipResult::setBandwidthName(const std::string& value)
{
    bandwidthName_ = value;
    bandwidthNameIsSet_ = true;
}

bool BindedEipResult::bandwidthNameIsSet() const
{
    return bandwidthNameIsSet_;
}

void BindedEipResult::unsetbandwidthName()
{
    bandwidthNameIsSet_ = false;
}

std::string BindedEipResult::getBandwidthShareType() const
{
    return bandwidthShareType_;
}

void BindedEipResult::setBandwidthShareType(const std::string& value)
{
    bandwidthShareType_ = value;
    bandwidthShareTypeIsSet_ = true;
}

bool BindedEipResult::bandwidthShareTypeIsSet() const
{
    return bandwidthShareTypeIsSet_;
}

void BindedEipResult::unsetbandwidthShareType()
{
    bandwidthShareTypeIsSet_ = false;
}

int32_t BindedEipResult::getBandwidthSize() const
{
    return bandwidthSize_;
}

void BindedEipResult::setBandwidthSize(int32_t value)
{
    bandwidthSize_ = value;
    bandwidthSizeIsSet_ = true;
}

bool BindedEipResult::bandwidthSizeIsSet() const
{
    return bandwidthSizeIsSet_;
}

void BindedEipResult::unsetbandwidthSize()
{
    bandwidthSizeIsSet_ = false;
}

std::string BindedEipResult::getAppliedAt() const
{
    return appliedAt_;
}

void BindedEipResult::setAppliedAt(const std::string& value)
{
    appliedAt_ = value;
    appliedAtIsSet_ = true;
}

bool BindedEipResult::appliedAtIsSet() const
{
    return appliedAtIsSet_;
}

void BindedEipResult::unsetappliedAt()
{
    appliedAtIsSet_ = false;
}

}
}
}
}
}


