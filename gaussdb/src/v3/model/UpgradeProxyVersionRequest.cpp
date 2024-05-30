

#include "huaweicloud/gaussdb/v3/model/UpgradeProxyVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpgradeProxyVersionRequest::UpgradeProxyVersionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpgradeProxyVersionRequest::~UpgradeProxyVersionRequest() = default;

void UpgradeProxyVersionRequest::validate()
{
}

web::json::value UpgradeProxyVersionRequest::toJson() const
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
bool UpgradeProxyVersionRequest::fromJson(const web::json::value& val)
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
            ProxyUpgradeProxyVersionRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpgradeProxyVersionRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpgradeProxyVersionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpgradeProxyVersionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpgradeProxyVersionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpgradeProxyVersionRequest::getInstanceId() const
{
    return instanceId_;
}

void UpgradeProxyVersionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpgradeProxyVersionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpgradeProxyVersionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpgradeProxyVersionRequest::getProxyId() const
{
    return proxyId_;
}

void UpgradeProxyVersionRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool UpgradeProxyVersionRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void UpgradeProxyVersionRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

ProxyUpgradeProxyVersionRequest UpgradeProxyVersionRequest::getBody() const
{
    return body_;
}

void UpgradeProxyVersionRequest::setBody(const ProxyUpgradeProxyVersionRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeProxyVersionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeProxyVersionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


