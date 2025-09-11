

#include "huaweicloud/dbss/v1/model/ShowInstanceMonitorInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowInstanceMonitorInfoResponse::ShowInstanceMonitorInfoResponse()
{
    diskInfosIsSet_ = false;
    systemInfosIsSet_ = false;
    trafficInfosIsSet_ = false;
}

ShowInstanceMonitorInfoResponse::~ShowInstanceMonitorInfoResponse() = default;

void ShowInstanceMonitorInfoResponse::validate()
{
}

web::json::value ShowInstanceMonitorInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(diskInfosIsSet_) {
        val[utility::conversions::to_string_t("disk_infos")] = ModelBase::toJson(diskInfos_);
    }
    if(systemInfosIsSet_) {
        val[utility::conversions::to_string_t("system_infos")] = ModelBase::toJson(systemInfos_);
    }
    if(trafficInfosIsSet_) {
        val[utility::conversions::to_string_t("traffic_infos")] = ModelBase::toJson(trafficInfos_);
    }

    return val;
}
bool ShowInstanceMonitorInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disk_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_infos"));
        if(!fieldValue.is_null())
        {
            DiskInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("system_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<SystemInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traffic_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<TrafficInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficInfos(refVal);
        }
    }
    return ok;
}


DiskInfo ShowInstanceMonitorInfoResponse::getDiskInfos() const
{
    return diskInfos_;
}

void ShowInstanceMonitorInfoResponse::setDiskInfos(const DiskInfo& value)
{
    diskInfos_ = value;
    diskInfosIsSet_ = true;
}

bool ShowInstanceMonitorInfoResponse::diskInfosIsSet() const
{
    return diskInfosIsSet_;
}

void ShowInstanceMonitorInfoResponse::unsetdiskInfos()
{
    diskInfosIsSet_ = false;
}

std::vector<SystemInfo>& ShowInstanceMonitorInfoResponse::getSystemInfos()
{
    return systemInfos_;
}

void ShowInstanceMonitorInfoResponse::setSystemInfos(const std::vector<SystemInfo>& value)
{
    systemInfos_ = value;
    systemInfosIsSet_ = true;
}

bool ShowInstanceMonitorInfoResponse::systemInfosIsSet() const
{
    return systemInfosIsSet_;
}

void ShowInstanceMonitorInfoResponse::unsetsystemInfos()
{
    systemInfosIsSet_ = false;
}

std::vector<TrafficInfo>& ShowInstanceMonitorInfoResponse::getTrafficInfos()
{
    return trafficInfos_;
}

void ShowInstanceMonitorInfoResponse::setTrafficInfos(const std::vector<TrafficInfo>& value)
{
    trafficInfos_ = value;
    trafficInfosIsSet_ = true;
}

bool ShowInstanceMonitorInfoResponse::trafficInfosIsSet() const
{
    return trafficInfosIsSet_;
}

void ShowInstanceMonitorInfoResponse::unsettrafficInfos()
{
    trafficInfosIsSet_ = false;
}

}
}
}
}
}


