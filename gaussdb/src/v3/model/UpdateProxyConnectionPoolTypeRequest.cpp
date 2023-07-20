

#include "huaweicloud/gaussdb/v3/model/UpdateProxyConnectionPoolTypeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateProxyConnectionPoolTypeRequest::UpdateProxyConnectionPoolTypeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProxyConnectionPoolTypeRequest::~UpdateProxyConnectionPoolTypeRequest() = default;

void UpdateProxyConnectionPoolTypeRequest::validate()
{
}

web::json::value UpdateProxyConnectionPoolTypeRequest::toJson() const
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

bool UpdateProxyConnectionPoolTypeRequest::fromJson(const web::json::value& val)
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
            ProxyUpdateProxyConnectionPoolTypeRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateProxyConnectionPoolTypeRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateProxyConnectionPoolTypeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateProxyConnectionPoolTypeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateProxyConnectionPoolTypeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateProxyConnectionPoolTypeRequest::getProxyId() const
{
    return proxyId_;
}

void UpdateProxyConnectionPoolTypeRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool UpdateProxyConnectionPoolTypeRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void UpdateProxyConnectionPoolTypeRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

std::string UpdateProxyConnectionPoolTypeRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateProxyConnectionPoolTypeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateProxyConnectionPoolTypeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateProxyConnectionPoolTypeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ProxyUpdateProxyConnectionPoolTypeRequest UpdateProxyConnectionPoolTypeRequest::getBody() const
{
    return body_;
}

void UpdateProxyConnectionPoolTypeRequest::setBody(const ProxyUpdateProxyConnectionPoolTypeRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProxyConnectionPoolTypeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProxyConnectionPoolTypeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


