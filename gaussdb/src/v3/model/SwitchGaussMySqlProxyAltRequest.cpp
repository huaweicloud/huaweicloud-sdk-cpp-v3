

#include "huaweicloud/gaussdb/v3/model/SwitchGaussMySqlProxyAltRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchGaussMySqlProxyAltRequest::SwitchGaussMySqlProxyAltRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchGaussMySqlProxyAltRequest::~SwitchGaussMySqlProxyAltRequest() = default;

void SwitchGaussMySqlProxyAltRequest::validate()
{
}

web::json::value SwitchGaussMySqlProxyAltRequest::toJson() const
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
bool SwitchGaussMySqlProxyAltRequest::fromJson(const web::json::value& val)
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
            SwitchGaussMySqlProxyAltRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchGaussMySqlProxyAltRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchGaussMySqlProxyAltRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchGaussMySqlProxyAltRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchGaussMySqlProxyAltRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SwitchGaussMySqlProxyAltRequest::getProxyId() const
{
    return proxyId_;
}

void SwitchGaussMySqlProxyAltRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool SwitchGaussMySqlProxyAltRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void SwitchGaussMySqlProxyAltRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

std::string SwitchGaussMySqlProxyAltRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchGaussMySqlProxyAltRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchGaussMySqlProxyAltRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchGaussMySqlProxyAltRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

SwitchGaussMySqlProxyAltRequestBody SwitchGaussMySqlProxyAltRequest::getBody() const
{
    return body_;
}

void SwitchGaussMySqlProxyAltRequest::setBody(const SwitchGaussMySqlProxyAltRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchGaussMySqlProxyAltRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchGaussMySqlProxyAltRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


