

#include "huaweicloud/rds/v3/model/ShowDnsNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowDnsNameRequest::ShowDnsNameRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    dnsType_ = "";
    dnsTypeIsSet_ = false;
}

ShowDnsNameRequest::~ShowDnsNameRequest() = default;

void ShowDnsNameRequest::validate()
{
}

web::json::value ShowDnsNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(dnsTypeIsSet_) {
        val[utility::conversions::to_string_t("dns_type")] = ModelBase::toJson(dnsType_);
    }

    return val;
}
bool ShowDnsNameRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dns_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dns_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnsType(refVal);
        }
    }
    return ok;
}


std::string ShowDnsNameRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDnsNameRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDnsNameRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDnsNameRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDnsNameRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowDnsNameRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowDnsNameRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowDnsNameRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowDnsNameRequest::getDnsType() const
{
    return dnsType_;
}

void ShowDnsNameRequest::setDnsType(const std::string& value)
{
    dnsType_ = value;
    dnsTypeIsSet_ = true;
}

bool ShowDnsNameRequest::dnsTypeIsSet() const
{
    return dnsTypeIsSet_;
}

void ShowDnsNameRequest::unsetdnsType()
{
    dnsTypeIsSet_ = false;
}

}
}
}
}
}


