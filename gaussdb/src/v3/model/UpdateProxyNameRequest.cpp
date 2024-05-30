

#include "huaweicloud/gaussdb/v3/model/UpdateProxyNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateProxyNameRequest::UpdateProxyNameRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProxyNameRequest::~UpdateProxyNameRequest() = default;

void UpdateProxyNameRequest::validate()
{
}

web::json::value UpdateProxyNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(proxyIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_id")] = ModelBase::toJson(proxyId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateProxyNameRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("proxy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ProxyUpdateProxyNameRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProxyNameRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateProxyNameRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateProxyNameRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateProxyNameRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateProxyNameRequest::getProxyId() const
{
    return proxyId_;
}

void UpdateProxyNameRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool UpdateProxyNameRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void UpdateProxyNameRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

std::string UpdateProxyNameRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateProxyNameRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateProxyNameRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateProxyNameRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ProxyUpdateProxyNameRequest UpdateProxyNameRequest::getBody() const
{
    return body_;
}

void UpdateProxyNameRequest::setBody(const ProxyUpdateProxyNameRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProxyNameRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProxyNameRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


