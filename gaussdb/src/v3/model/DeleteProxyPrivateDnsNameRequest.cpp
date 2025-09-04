

#include "huaweicloud/gaussdb/v3/model/DeleteProxyPrivateDnsNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteProxyPrivateDnsNameRequest::DeleteProxyPrivateDnsNameRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
}

DeleteProxyPrivateDnsNameRequest::~DeleteProxyPrivateDnsNameRequest() = default;

void DeleteProxyPrivateDnsNameRequest::validate()
{
}

web::json::value DeleteProxyPrivateDnsNameRequest::toJson() const
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
bool DeleteProxyPrivateDnsNameRequest::fromJson(const web::json::value& val)
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


std::string DeleteProxyPrivateDnsNameRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteProxyPrivateDnsNameRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteProxyPrivateDnsNameRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteProxyPrivateDnsNameRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteProxyPrivateDnsNameRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteProxyPrivateDnsNameRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteProxyPrivateDnsNameRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteProxyPrivateDnsNameRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteProxyPrivateDnsNameRequest::getProxyId() const
{
    return proxyId_;
}

void DeleteProxyPrivateDnsNameRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool DeleteProxyPrivateDnsNameRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void DeleteProxyPrivateDnsNameRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

}
}
}
}
}


