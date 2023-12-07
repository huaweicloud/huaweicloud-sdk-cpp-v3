

#include "huaweicloud/gaussdb/v3/model/SwitchGaussMySqlProxySslRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchGaussMySqlProxySslRequest::SwitchGaussMySqlProxySslRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchGaussMySqlProxySslRequest::~SwitchGaussMySqlProxySslRequest() = default;

void SwitchGaussMySqlProxySslRequest::validate()
{
}

web::json::value SwitchGaussMySqlProxySslRequest::toJson() const
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
bool SwitchGaussMySqlProxySslRequest::fromJson(const web::json::value& val)
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
            SwitchProxySSLRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchGaussMySqlProxySslRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchGaussMySqlProxySslRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchGaussMySqlProxySslRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchGaussMySqlProxySslRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SwitchGaussMySqlProxySslRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchGaussMySqlProxySslRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchGaussMySqlProxySslRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchGaussMySqlProxySslRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SwitchGaussMySqlProxySslRequest::getProxyId() const
{
    return proxyId_;
}

void SwitchGaussMySqlProxySslRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool SwitchGaussMySqlProxySslRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void SwitchGaussMySqlProxySslRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

SwitchProxySSLRequest SwitchGaussMySqlProxySslRequest::getBody() const
{
    return body_;
}

void SwitchGaussMySqlProxySslRequest::setBody(const SwitchProxySSLRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchGaussMySqlProxySslRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchGaussMySqlProxySslRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


