

#include "huaweicloud/drs/v5/model/CustomizedDns.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CustomizedDns::CustomizedDns()
{
    isSetDns_ = false;
    isSetDnsIsSet_ = false;
    setDnsAction_ = "";
    setDnsActionIsSet_ = false;
    dnsIp_ = "";
    dnsIpIsSet_ = false;
}

CustomizedDns::~CustomizedDns() = default;

void CustomizedDns::validate()
{
}

web::json::value CustomizedDns::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isSetDnsIsSet_) {
        val[utility::conversions::to_string_t("is_set_dns")] = ModelBase::toJson(isSetDns_);
    }
    if(setDnsActionIsSet_) {
        val[utility::conversions::to_string_t("set_dns_action")] = ModelBase::toJson(setDnsAction_);
    }
    if(dnsIpIsSet_) {
        val[utility::conversions::to_string_t("dns_ip")] = ModelBase::toJson(dnsIp_);
    }

    return val;
}
bool CustomizedDns::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_set_dns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_set_dns"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSetDns(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("set_dns_action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_dns_action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetDnsAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dns_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dns_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnsIp(refVal);
        }
    }
    return ok;
}


bool CustomizedDns::isIsSetDns() const
{
    return isSetDns_;
}

void CustomizedDns::setIsSetDns(bool value)
{
    isSetDns_ = value;
    isSetDnsIsSet_ = true;
}

bool CustomizedDns::isSetDnsIsSet() const
{
    return isSetDnsIsSet_;
}

void CustomizedDns::unsetisSetDns()
{
    isSetDnsIsSet_ = false;
}

std::string CustomizedDns::getSetDnsAction() const
{
    return setDnsAction_;
}

void CustomizedDns::setSetDnsAction(const std::string& value)
{
    setDnsAction_ = value;
    setDnsActionIsSet_ = true;
}

bool CustomizedDns::setDnsActionIsSet() const
{
    return setDnsActionIsSet_;
}

void CustomizedDns::unsetsetDnsAction()
{
    setDnsActionIsSet_ = false;
}

std::string CustomizedDns::getDnsIp() const
{
    return dnsIp_;
}

void CustomizedDns::setDnsIp(const std::string& value)
{
    dnsIp_ = value;
    dnsIpIsSet_ = true;
}

bool CustomizedDns::dnsIpIsSet() const
{
    return dnsIpIsSet_;
}

void CustomizedDns::unsetdnsIp()
{
    dnsIpIsSet_ = false;
}

}
}
}
}
}


