

#include "huaweicloud/gaussdb/v3/model/SwitchGaussMySqlProxyEipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchGaussMySqlProxyEipRequest::SwitchGaussMySqlProxyEipRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchGaussMySqlProxyEipRequest::~SwitchGaussMySqlProxyEipRequest() = default;

void SwitchGaussMySqlProxyEipRequest::validate()
{
}

web::json::value SwitchGaussMySqlProxyEipRequest::toJson() const
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
bool SwitchGaussMySqlProxyEipRequest::fromJson(const web::json::value& val)
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
            SwitchGaussMySqlProxyEipRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchGaussMySqlProxyEipRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchGaussMySqlProxyEipRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchGaussMySqlProxyEipRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchGaussMySqlProxyEipRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SwitchGaussMySqlProxyEipRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchGaussMySqlProxyEipRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchGaussMySqlProxyEipRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchGaussMySqlProxyEipRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SwitchGaussMySqlProxyEipRequest::getProxyId() const
{
    return proxyId_;
}

void SwitchGaussMySqlProxyEipRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool SwitchGaussMySqlProxyEipRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void SwitchGaussMySqlProxyEipRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

SwitchGaussMySqlProxyEipRequestBody SwitchGaussMySqlProxyEipRequest::getBody() const
{
    return body_;
}

void SwitchGaussMySqlProxyEipRequest::setBody(const SwitchGaussMySqlProxyEipRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchGaussMySqlProxyEipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchGaussMySqlProxyEipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


