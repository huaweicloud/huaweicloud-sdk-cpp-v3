

#include "huaweicloud/antiddos/v1/model/ListDailyReportRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




ListDailyReportRequest::ListDailyReportRequest()
{
    floatingIpId_ = "";
    floatingIpIdIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
}

ListDailyReportRequest::~ListDailyReportRequest() = default;

void ListDailyReportRequest::validate()
{
}

web::json::value ListDailyReportRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(floatingIpIdIsSet_) {
        val[utility::conversions::to_string_t("floating_ip_id")] = ModelBase::toJson(floatingIpId_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }

    return val;
}
bool ListDailyReportRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    return ok;
}


std::string ListDailyReportRequest::getFloatingIpId() const
{
    return floatingIpId_;
}

void ListDailyReportRequest::setFloatingIpId(const std::string& value)
{
    floatingIpId_ = value;
    floatingIpIdIsSet_ = true;
}

bool ListDailyReportRequest::floatingIpIdIsSet() const
{
    return floatingIpIdIsSet_;
}

void ListDailyReportRequest::unsetfloatingIpId()
{
    floatingIpIdIsSet_ = false;
}

std::string ListDailyReportRequest::getIp() const
{
    return ip_;
}

void ListDailyReportRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ListDailyReportRequest::ipIsSet() const
{
    return ipIsSet_;
}

void ListDailyReportRequest::unsetip()
{
    ipIsSet_ = false;
}

}
}
}
}
}


