

#include "huaweicloud/gaussdb/v3/model/SwitchAccessControlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchAccessControlRequest::SwitchAccessControlRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchAccessControlRequest::~SwitchAccessControlRequest() = default;

void SwitchAccessControlRequest::validate()
{
}

web::json::value SwitchAccessControlRequest::toJson() const
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
bool SwitchAccessControlRequest::fromJson(const web::json::value& val)
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
            SwitchAccessControlRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchAccessControlRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchAccessControlRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchAccessControlRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchAccessControlRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SwitchAccessControlRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchAccessControlRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchAccessControlRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchAccessControlRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SwitchAccessControlRequest::getProxyId() const
{
    return proxyId_;
}

void SwitchAccessControlRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool SwitchAccessControlRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void SwitchAccessControlRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

SwitchAccessControlRequestBody SwitchAccessControlRequest::getBody() const
{
    return body_;
}

void SwitchAccessControlRequest::setBody(const SwitchAccessControlRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchAccessControlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchAccessControlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


