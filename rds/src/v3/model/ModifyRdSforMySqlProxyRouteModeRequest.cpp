

#include "huaweicloud/rds/v3/model/ModifyRdSforMySqlProxyRouteModeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyRdSforMySqlProxyRouteModeRequest::ModifyRdSforMySqlProxyRouteModeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyRdSforMySqlProxyRouteModeRequest::~ModifyRdSforMySqlProxyRouteModeRequest() = default;

void ModifyRdSforMySqlProxyRouteModeRequest::validate()
{
}

web::json::value ModifyRdSforMySqlProxyRouteModeRequest::toJson() const
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
bool ModifyRdSforMySqlProxyRouteModeRequest::fromJson(const web::json::value& val)
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
            ModifyMySqlProxyRouteModeRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyRdSforMySqlProxyRouteModeRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyRdSforMySqlProxyRouteModeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyRdSforMySqlProxyRouteModeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyRdSforMySqlProxyRouteModeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ModifyRdSforMySqlProxyRouteModeRequest::getProxyId() const
{
    return proxyId_;
}

void ModifyRdSforMySqlProxyRouteModeRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool ModifyRdSforMySqlProxyRouteModeRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void ModifyRdSforMySqlProxyRouteModeRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

std::string ModifyRdSforMySqlProxyRouteModeRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifyRdSforMySqlProxyRouteModeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifyRdSforMySqlProxyRouteModeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifyRdSforMySqlProxyRouteModeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ModifyMySqlProxyRouteModeRequest ModifyRdSforMySqlProxyRouteModeRequest::getBody() const
{
    return body_;
}

void ModifyRdSforMySqlProxyRouteModeRequest::setBody(const ModifyMySqlProxyRouteModeRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyRdSforMySqlProxyRouteModeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyRdSforMySqlProxyRouteModeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


