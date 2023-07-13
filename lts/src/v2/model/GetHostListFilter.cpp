

#include "huaweicloud/lts/v2/model/GetHostListFilter.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




GetHostListFilter::GetHostListFilter()
{
    hostNameListIsSet_ = false;
    hostIpListIsSet_ = false;
    hostStatus_ = "";
    hostStatusIsSet_ = false;
    hostVersion_ = "";
    hostVersionIsSet_ = false;
}

GetHostListFilter::~GetHostListFilter() = default;

void GetHostListFilter::validate()
{
}

web::json::value GetHostListFilter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostNameListIsSet_) {
        val[utility::conversions::to_string_t("host_name_list")] = ModelBase::toJson(hostNameList_);
    }
    if(hostIpListIsSet_) {
        val[utility::conversions::to_string_t("host_ip_list")] = ModelBase::toJson(hostIpList_);
    }
    if(hostStatusIsSet_) {
        val[utility::conversions::to_string_t("host_status")] = ModelBase::toJson(hostStatus_);
    }
    if(hostVersionIsSet_) {
        val[utility::conversions::to_string_t("host_version")] = ModelBase::toJson(hostVersion_);
    }

    return val;
}

bool GetHostListFilter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("host_name_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_name_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostNameList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_ip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_ip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostIpList(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("host_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostVersion(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& GetHostListFilter::getHostNameList()
{
    return hostNameList_;
}

void GetHostListFilter::setHostNameList(const std::vector<std::string>& value)
{
    hostNameList_ = value;
    hostNameListIsSet_ = true;
}

bool GetHostListFilter::hostNameListIsSet() const
{
    return hostNameListIsSet_;
}

void GetHostListFilter::unsethostNameList()
{
    hostNameListIsSet_ = false;
}

std::vector<std::string>& GetHostListFilter::getHostIpList()
{
    return hostIpList_;
}

void GetHostListFilter::setHostIpList(const std::vector<std::string>& value)
{
    hostIpList_ = value;
    hostIpListIsSet_ = true;
}

bool GetHostListFilter::hostIpListIsSet() const
{
    return hostIpListIsSet_;
}

void GetHostListFilter::unsethostIpList()
{
    hostIpListIsSet_ = false;
}

std::string GetHostListFilter::getHostStatus() const
{
    return hostStatus_;
}

void GetHostListFilter::setHostStatus(const std::string& value)
{
    hostStatus_ = value;
    hostStatusIsSet_ = true;
}

bool GetHostListFilter::hostStatusIsSet() const
{
    return hostStatusIsSet_;
}

void GetHostListFilter::unsethostStatus()
{
    hostStatusIsSet_ = false;
}

std::string GetHostListFilter::getHostVersion() const
{
    return hostVersion_;
}

void GetHostListFilter::setHostVersion(const std::string& value)
{
    hostVersion_ = value;
    hostVersionIsSet_ = true;
}

bool GetHostListFilter::hostVersionIsSet() const
{
    return hostVersionIsSet_;
}

void GetHostListFilter::unsethostVersion()
{
    hostVersionIsSet_ = false;
}

}
}
}
}
}


