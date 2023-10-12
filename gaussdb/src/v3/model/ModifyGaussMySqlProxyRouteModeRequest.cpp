

#include "huaweicloud/gaussdb/v3/model/ModifyGaussMySqlProxyRouteModeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyGaussMySqlProxyRouteModeRequest::ModifyGaussMySqlProxyRouteModeRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyGaussMySqlProxyRouteModeRequest::~ModifyGaussMySqlProxyRouteModeRequest() = default;

void ModifyGaussMySqlProxyRouteModeRequest::validate()
{
}

web::json::value ModifyGaussMySqlProxyRouteModeRequest::toJson() const
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
bool ModifyGaussMySqlProxyRouteModeRequest::fromJson(const web::json::value& val)
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
            ModifyGaussMySqlProxyRouteModeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyGaussMySqlProxyRouteModeRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifyGaussMySqlProxyRouteModeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifyGaussMySqlProxyRouteModeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifyGaussMySqlProxyRouteModeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ModifyGaussMySqlProxyRouteModeRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyGaussMySqlProxyRouteModeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyGaussMySqlProxyRouteModeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyGaussMySqlProxyRouteModeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ModifyGaussMySqlProxyRouteModeRequest::getProxyId() const
{
    return proxyId_;
}

void ModifyGaussMySqlProxyRouteModeRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool ModifyGaussMySqlProxyRouteModeRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void ModifyGaussMySqlProxyRouteModeRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

ModifyGaussMySqlProxyRouteModeRequestBody ModifyGaussMySqlProxyRouteModeRequest::getBody() const
{
    return body_;
}

void ModifyGaussMySqlProxyRouteModeRequest::setBody(const ModifyGaussMySqlProxyRouteModeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyGaussMySqlProxyRouteModeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyGaussMySqlProxyRouteModeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


