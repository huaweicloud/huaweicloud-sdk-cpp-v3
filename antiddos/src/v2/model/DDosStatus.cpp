

#include "huaweicloud/antiddos/v2/model/DDosStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V2 {
namespace Model {




DDosStatus::DDosStatus()
{
    floatingIpId_ = "";
    floatingIpIdIsSet_ = false;
    floatingIpAddress_ = "";
    floatingIpAddressIsSet_ = false;
    productType_ = "";
    productTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    cleanThreshold_ = 0L;
    cleanThresholdIsSet_ = false;
    blockThreshold_ = "";
    blockThresholdIsSet_ = false;
}

DDosStatus::~DDosStatus() = default;

void DDosStatus::validate()
{
}

web::json::value DDosStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(floatingIpIdIsSet_) {
        val[utility::conversions::to_string_t("floating_ip_id")] = ModelBase::toJson(floatingIpId_);
    }
    if(floatingIpAddressIsSet_) {
        val[utility::conversions::to_string_t("floating_ip_address")] = ModelBase::toJson(floatingIpAddress_);
    }
    if(productTypeIsSet_) {
        val[utility::conversions::to_string_t("product_type")] = ModelBase::toJson(productType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(cleanThresholdIsSet_) {
        val[utility::conversions::to_string_t("clean_threshold")] = ModelBase::toJson(cleanThreshold_);
    }
    if(blockThresholdIsSet_) {
        val[utility::conversions::to_string_t("block_threshold")] = ModelBase::toJson(blockThreshold_);
    }

    return val;
}
bool DDosStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("floating_ip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floating_ip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingIpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("floating_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floating_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("clean_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clean_threshold"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCleanThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("block_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_threshold"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockThreshold(refVal);
        }
    }
    return ok;
}


std::string DDosStatus::getFloatingIpId() const
{
    return floatingIpId_;
}

void DDosStatus::setFloatingIpId(const std::string& value)
{
    floatingIpId_ = value;
    floatingIpIdIsSet_ = true;
}

bool DDosStatus::floatingIpIdIsSet() const
{
    return floatingIpIdIsSet_;
}

void DDosStatus::unsetfloatingIpId()
{
    floatingIpIdIsSet_ = false;
}

std::string DDosStatus::getFloatingIpAddress() const
{
    return floatingIpAddress_;
}

void DDosStatus::setFloatingIpAddress(const std::string& value)
{
    floatingIpAddress_ = value;
    floatingIpAddressIsSet_ = true;
}

bool DDosStatus::floatingIpAddressIsSet() const
{
    return floatingIpAddressIsSet_;
}

void DDosStatus::unsetfloatingIpAddress()
{
    floatingIpAddressIsSet_ = false;
}

std::string DDosStatus::getProductType() const
{
    return productType_;
}

void DDosStatus::setProductType(const std::string& value)
{
    productType_ = value;
    productTypeIsSet_ = true;
}

bool DDosStatus::productTypeIsSet() const
{
    return productTypeIsSet_;
}

void DDosStatus::unsetproductType()
{
    productTypeIsSet_ = false;
}

std::string DDosStatus::getStatus() const
{
    return status_;
}

void DDosStatus::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DDosStatus::statusIsSet() const
{
    return statusIsSet_;
}

void DDosStatus::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t DDosStatus::getCleanThreshold() const
{
    return cleanThreshold_;
}

void DDosStatus::setCleanThreshold(int64_t value)
{
    cleanThreshold_ = value;
    cleanThresholdIsSet_ = true;
}

bool DDosStatus::cleanThresholdIsSet() const
{
    return cleanThresholdIsSet_;
}

void DDosStatus::unsetcleanThreshold()
{
    cleanThresholdIsSet_ = false;
}

std::string DDosStatus::getBlockThreshold() const
{
    return blockThreshold_;
}

void DDosStatus::setBlockThreshold(const std::string& value)
{
    blockThreshold_ = value;
    blockThresholdIsSet_ = true;
}

bool DDosStatus::blockThresholdIsSet() const
{
    return blockThresholdIsSet_;
}

void DDosStatus::unsetblockThreshold()
{
    blockThresholdIsSet_ = false;
}

}
}
}
}
}


