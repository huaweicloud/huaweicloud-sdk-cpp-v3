

#include "huaweicloud/rds/v3/model/SwitchMySqlProxyEipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SwitchMySqlProxyEipRequest::SwitchMySqlProxyEipRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchMySqlProxyEipRequest::~SwitchMySqlProxyEipRequest() = default;

void SwitchMySqlProxyEipRequest::validate()
{
}

web::json::value SwitchMySqlProxyEipRequest::toJson() const
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
bool SwitchMySqlProxyEipRequest::fromJson(const web::json::value& val)
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
            SwitchMySqlProxyEipRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchMySqlProxyEipRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchMySqlProxyEipRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchMySqlProxyEipRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchMySqlProxyEipRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SwitchMySqlProxyEipRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchMySqlProxyEipRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchMySqlProxyEipRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchMySqlProxyEipRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SwitchMySqlProxyEipRequest::getProxyId() const
{
    return proxyId_;
}

void SwitchMySqlProxyEipRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool SwitchMySqlProxyEipRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void SwitchMySqlProxyEipRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

SwitchMySqlProxyEipRequestBody SwitchMySqlProxyEipRequest::getBody() const
{
    return body_;
}

void SwitchMySqlProxyEipRequest::setBody(const SwitchMySqlProxyEipRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchMySqlProxyEipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchMySqlProxyEipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


