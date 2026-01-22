

#include "huaweicloud/cfw/v1/model/AddCustomDnsServerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddCustomDnsServerRequest::AddCustomDnsServerRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    serverIp_ = "";
    serverIpIsSet_ = false;
}

AddCustomDnsServerRequest::~AddCustomDnsServerRequest() = default;

void AddCustomDnsServerRequest::validate()
{
}

web::json::value AddCustomDnsServerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(serverIpIsSet_) {
        val[utility::conversions::to_string_t("server_ip")] = ModelBase::toJson(serverIp_);
    }

    return val;
}
bool AddCustomDnsServerRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerIp(refVal);
        }
    }
    return ok;
}


std::string AddCustomDnsServerRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void AddCustomDnsServerRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool AddCustomDnsServerRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void AddCustomDnsServerRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string AddCustomDnsServerRequest::getServerIp() const
{
    return serverIp_;
}

void AddCustomDnsServerRequest::setServerIp(const std::string& value)
{
    serverIp_ = value;
    serverIpIsSet_ = true;
}

bool AddCustomDnsServerRequest::serverIpIsSet() const
{
    return serverIpIsSet_;
}

void AddCustomDnsServerRequest::unsetserverIp()
{
    serverIpIsSet_ = false;
}

}
}
}
}
}


