

#include "huaweicloud/rds/v3/model/ShowMsdtcLocalHostResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowMsdtcLocalHostResponse::ShowMsdtcLocalHostResponse()
{
    status_ = "";
    statusIsSet_ = false;
    hostsIsSet_ = false;
}

ShowMsdtcLocalHostResponse::~ShowMsdtcLocalHostResponse() = default;

void ShowMsdtcLocalHostResponse::validate()
{
}

web::json::value ShowMsdtcLocalHostResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(hostsIsSet_) {
        val[utility::conversions::to_string_t("hosts")] = ModelBase::toJson(hosts_);
    }

    return val;
}
bool ShowMsdtcLocalHostResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hosts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hosts"));
        if(!fieldValue.is_null())
        {
            std::vector<MsdtcHostResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHosts(refVal);
        }
    }
    return ok;
}


std::string ShowMsdtcLocalHostResponse::getStatus() const
{
    return status_;
}

void ShowMsdtcLocalHostResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowMsdtcLocalHostResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowMsdtcLocalHostResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<MsdtcHostResult>& ShowMsdtcLocalHostResponse::getHosts()
{
    return hosts_;
}

void ShowMsdtcLocalHostResponse::setHosts(const std::vector<MsdtcHostResult>& value)
{
    hosts_ = value;
    hostsIsSet_ = true;
}

bool ShowMsdtcLocalHostResponse::hostsIsSet() const
{
    return hostsIsSet_;
}

void ShowMsdtcLocalHostResponse::unsethosts()
{
    hostsIsSet_ = false;
}

}
}
}
}
}


