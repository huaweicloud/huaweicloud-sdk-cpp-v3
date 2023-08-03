

#include "huaweicloud/rds/v3/model/ShowDomainNameRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowDomainNameRequest::ShowDomainNameRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dnsType_ = "";
    dnsTypeIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowDomainNameRequest::~ShowDomainNameRequest() = default;

void ShowDomainNameRequest::validate()
{
}

web::json::value ShowDomainNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(dnsTypeIsSet_) {
        val[utility::conversions::to_string_t("dns_type")] = ModelBase::toJson(dnsType_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}

bool ShowDomainNameRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("dns_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dns_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnsType(refVal);
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
    return ok;
}

std::string ShowDomainNameRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDomainNameRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDomainNameRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDomainNameRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDomainNameRequest::getDnsType() const
{
    return dnsType_;
}

void ShowDomainNameRequest::setDnsType(const std::string& value)
{
    dnsType_ = value;
    dnsTypeIsSet_ = true;
}

bool ShowDomainNameRequest::dnsTypeIsSet() const
{
    return dnsTypeIsSet_;
}

void ShowDomainNameRequest::unsetdnsType()
{
    dnsTypeIsSet_ = false;
}

std::string ShowDomainNameRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowDomainNameRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowDomainNameRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowDomainNameRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


