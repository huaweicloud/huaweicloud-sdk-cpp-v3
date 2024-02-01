

#include "huaweicloud/rds/v3/model/RestartRdSforMysqlProxyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestartRdSforMysqlProxyRequest::RestartRdSforMysqlProxyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

RestartRdSforMysqlProxyRequest::~RestartRdSforMysqlProxyRequest() = default;

void RestartRdSforMysqlProxyRequest::validate()
{
}

web::json::value RestartRdSforMysqlProxyRequest::toJson() const
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

    return val;
}
bool RestartRdSforMysqlProxyRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string RestartRdSforMysqlProxyRequest::getInstanceId() const
{
    return instanceId_;
}

void RestartRdSforMysqlProxyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RestartRdSforMysqlProxyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RestartRdSforMysqlProxyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RestartRdSforMysqlProxyRequest::getProxyId() const
{
    return proxyId_;
}

void RestartRdSforMysqlProxyRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool RestartRdSforMysqlProxyRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void RestartRdSforMysqlProxyRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

std::string RestartRdSforMysqlProxyRequest::getXLanguage() const
{
    return xLanguage_;
}

void RestartRdSforMysqlProxyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RestartRdSforMysqlProxyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RestartRdSforMysqlProxyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


