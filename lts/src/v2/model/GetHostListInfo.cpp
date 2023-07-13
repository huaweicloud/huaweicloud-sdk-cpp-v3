

#include "huaweicloud/lts/v2/model/GetHostListInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




GetHostListInfo::GetHostListInfo()
{
    hostId_ = "";
    hostIdIsSet_ = false;
    hostIp_ = "";
    hostIpIsSet_ = false;
    hostName_ = "";
    hostNameIsSet_ = false;
    hostStatus_ = "";
    hostStatusIsSet_ = false;
    hostType_ = "";
    hostTypeIsSet_ = false;
    hostVersion_ = "";
    hostVersionIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
}

GetHostListInfo::~GetHostListInfo() = default;

void GetHostListInfo::validate()
{
}

web::json::value GetHostListInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostIdIsSet_) {
        val[utility::conversions::to_string_t("host_id")] = ModelBase::toJson(hostId_);
    }
    if(hostIpIsSet_) {
        val[utility::conversions::to_string_t("host_ip")] = ModelBase::toJson(hostIp_);
    }
    if(hostNameIsSet_) {
        val[utility::conversions::to_string_t("host_name")] = ModelBase::toJson(hostName_);
    }
    if(hostStatusIsSet_) {
        val[utility::conversions::to_string_t("host_status")] = ModelBase::toJson(hostStatus_);
    }
    if(hostTypeIsSet_) {
        val[utility::conversions::to_string_t("host_type")] = ModelBase::toJson(hostType_);
    }
    if(hostVersionIsSet_) {
        val[utility::conversions::to_string_t("host_version")] = ModelBase::toJson(hostVersion_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}

bool GetHostListInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("host_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}

std::string GetHostListInfo::getHostId() const
{
    return hostId_;
}

void GetHostListInfo::setHostId(const std::string& value)
{
    hostId_ = value;
    hostIdIsSet_ = true;
}

bool GetHostListInfo::hostIdIsSet() const
{
    return hostIdIsSet_;
}

void GetHostListInfo::unsethostId()
{
    hostIdIsSet_ = false;
}

std::string GetHostListInfo::getHostIp() const
{
    return hostIp_;
}

void GetHostListInfo::setHostIp(const std::string& value)
{
    hostIp_ = value;
    hostIpIsSet_ = true;
}

bool GetHostListInfo::hostIpIsSet() const
{
    return hostIpIsSet_;
}

void GetHostListInfo::unsethostIp()
{
    hostIpIsSet_ = false;
}

std::string GetHostListInfo::getHostName() const
{
    return hostName_;
}

void GetHostListInfo::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool GetHostListInfo::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void GetHostListInfo::unsethostName()
{
    hostNameIsSet_ = false;
}

std::string GetHostListInfo::getHostStatus() const
{
    return hostStatus_;
}

void GetHostListInfo::setHostStatus(const std::string& value)
{
    hostStatus_ = value;
    hostStatusIsSet_ = true;
}

bool GetHostListInfo::hostStatusIsSet() const
{
    return hostStatusIsSet_;
}

void GetHostListInfo::unsethostStatus()
{
    hostStatusIsSet_ = false;
}

std::string GetHostListInfo::getHostType() const
{
    return hostType_;
}

void GetHostListInfo::setHostType(const std::string& value)
{
    hostType_ = value;
    hostTypeIsSet_ = true;
}

bool GetHostListInfo::hostTypeIsSet() const
{
    return hostTypeIsSet_;
}

void GetHostListInfo::unsethostType()
{
    hostTypeIsSet_ = false;
}

std::string GetHostListInfo::getHostVersion() const
{
    return hostVersion_;
}

void GetHostListInfo::setHostVersion(const std::string& value)
{
    hostVersion_ = value;
    hostVersionIsSet_ = true;
}

bool GetHostListInfo::hostVersionIsSet() const
{
    return hostVersionIsSet_;
}

void GetHostListInfo::unsethostVersion()
{
    hostVersionIsSet_ = false;
}

int64_t GetHostListInfo::getUpdateTime() const
{
    return updateTime_;
}

void GetHostListInfo::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool GetHostListInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void GetHostListInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


