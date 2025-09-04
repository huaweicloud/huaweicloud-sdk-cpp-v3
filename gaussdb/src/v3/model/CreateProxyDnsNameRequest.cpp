

#include "huaweicloud/gaussdb/v3/model/CreateProxyDnsNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateProxyDnsNameRequest::CreateProxyDnsNameRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
}

CreateProxyDnsNameRequest::~CreateProxyDnsNameRequest() = default;

void CreateProxyDnsNameRequest::validate()
{
}

web::json::value CreateProxyDnsNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(proxyIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_id")] = ModelBase::toJson(proxyId_);
    }

    return val;
}
bool CreateProxyDnsNameRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyId(refVal);
        }
    }
    return ok;
}


std::string CreateProxyDnsNameRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateProxyDnsNameRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateProxyDnsNameRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateProxyDnsNameRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateProxyDnsNameRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateProxyDnsNameRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateProxyDnsNameRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateProxyDnsNameRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateProxyDnsNameRequest::getProxyId() const
{
    return proxyId_;
}

void CreateProxyDnsNameRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool CreateProxyDnsNameRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void CreateProxyDnsNameRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

}
}
}
}
}


