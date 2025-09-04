

#include "huaweicloud/gaussdb/v3/model/UpdateProxyPrivateDnsNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateProxyPrivateDnsNameRequest::UpdateProxyPrivateDnsNameRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProxyPrivateDnsNameRequest::~UpdateProxyPrivateDnsNameRequest() = default;

void UpdateProxyPrivateDnsNameRequest::validate()
{
}

web::json::value UpdateProxyPrivateDnsNameRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateProxyPrivateDnsNameRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateProxyPrivateDnsName refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProxyPrivateDnsNameRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateProxyPrivateDnsNameRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateProxyPrivateDnsNameRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateProxyPrivateDnsNameRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateProxyPrivateDnsNameRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateProxyPrivateDnsNameRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateProxyPrivateDnsNameRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateProxyPrivateDnsNameRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateProxyPrivateDnsNameRequest::getProxyId() const
{
    return proxyId_;
}

void UpdateProxyPrivateDnsNameRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool UpdateProxyPrivateDnsNameRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void UpdateProxyPrivateDnsNameRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

UpdateProxyPrivateDnsName UpdateProxyPrivateDnsNameRequest::getBody() const
{
    return body_;
}

void UpdateProxyPrivateDnsNameRequest::setBody(const UpdateProxyPrivateDnsName& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProxyPrivateDnsNameRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProxyPrivateDnsNameRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


