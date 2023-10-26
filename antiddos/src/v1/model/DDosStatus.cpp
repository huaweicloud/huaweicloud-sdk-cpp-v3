

#include "huaweicloud/antiddos/v1/model/DDosStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




DDosStatus::DDosStatus()
{
    floatingIpId_ = "";
    floatingIpIdIsSet_ = false;
    floatingIpAddress_ = "";
    floatingIpAddressIsSet_ = false;
    networkType_ = "";
    networkTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    blackholeEndtime_ = 0L;
    blackholeEndtimeIsSet_ = false;
    protectType_ = "";
    protectTypeIsSet_ = false;
    trafficThreshold_ = 0L;
    trafficThresholdIsSet_ = false;
    httpThreshold_ = 0L;
    httpThresholdIsSet_ = false;
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
    if(networkTypeIsSet_) {
        val[utility::conversions::to_string_t("network_type")] = ModelBase::toJson(networkType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(blackholeEndtimeIsSet_) {
        val[utility::conversions::to_string_t("blackhole_endtime")] = ModelBase::toJson(blackholeEndtime_);
    }
    if(protectTypeIsSet_) {
        val[utility::conversions::to_string_t("protect_type")] = ModelBase::toJson(protectType_);
    }
    if(trafficThresholdIsSet_) {
        val[utility::conversions::to_string_t("traffic_threshold")] = ModelBase::toJson(trafficThreshold_);
    }
    if(httpThresholdIsSet_) {
        val[utility::conversions::to_string_t("http_threshold")] = ModelBase::toJson(httpThreshold_);
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
    if(val.has_field(utility::conversions::to_string_t("network_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("blackhole_endtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blackhole_endtime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlackholeEndtime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protect_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protect_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traffic_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_threshold"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_threshold"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpThreshold(refVal);
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

std::string DDosStatus::getNetworkType() const
{
    return networkType_;
}

void DDosStatus::setNetworkType(const std::string& value)
{
    networkType_ = value;
    networkTypeIsSet_ = true;
}

bool DDosStatus::networkTypeIsSet() const
{
    return networkTypeIsSet_;
}

void DDosStatus::unsetnetworkType()
{
    networkTypeIsSet_ = false;
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

int64_t DDosStatus::getBlackholeEndtime() const
{
    return blackholeEndtime_;
}

void DDosStatus::setBlackholeEndtime(int64_t value)
{
    blackholeEndtime_ = value;
    blackholeEndtimeIsSet_ = true;
}

bool DDosStatus::blackholeEndtimeIsSet() const
{
    return blackholeEndtimeIsSet_;
}

void DDosStatus::unsetblackholeEndtime()
{
    blackholeEndtimeIsSet_ = false;
}

std::string DDosStatus::getProtectType() const
{
    return protectType_;
}

void DDosStatus::setProtectType(const std::string& value)
{
    protectType_ = value;
    protectTypeIsSet_ = true;
}

bool DDosStatus::protectTypeIsSet() const
{
    return protectTypeIsSet_;
}

void DDosStatus::unsetprotectType()
{
    protectTypeIsSet_ = false;
}

int64_t DDosStatus::getTrafficThreshold() const
{
    return trafficThreshold_;
}

void DDosStatus::setTrafficThreshold(int64_t value)
{
    trafficThreshold_ = value;
    trafficThresholdIsSet_ = true;
}

bool DDosStatus::trafficThresholdIsSet() const
{
    return trafficThresholdIsSet_;
}

void DDosStatus::unsettrafficThreshold()
{
    trafficThresholdIsSet_ = false;
}

int64_t DDosStatus::getHttpThreshold() const
{
    return httpThreshold_;
}

void DDosStatus::setHttpThreshold(int64_t value)
{
    httpThreshold_ = value;
    httpThresholdIsSet_ = true;
}

bool DDosStatus::httpThresholdIsSet() const
{
    return httpThresholdIsSet_;
}

void DDosStatus::unsethttpThreshold()
{
    httpThresholdIsSet_ = false;
}

}
}
}
}
}


