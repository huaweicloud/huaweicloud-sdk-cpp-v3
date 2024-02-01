

#include "huaweicloud/rds/v3/model/DeleteRdSforMySqlProxyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteRdSforMySqlProxyRequest::DeleteRdSforMySqlProxyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

DeleteRdSforMySqlProxyRequest::~DeleteRdSforMySqlProxyRequest() = default;

void DeleteRdSforMySqlProxyRequest::validate()
{
}

web::json::value DeleteRdSforMySqlProxyRequest::toJson() const
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
bool DeleteRdSforMySqlProxyRequest::fromJson(const web::json::value& val)
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


std::string DeleteRdSforMySqlProxyRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteRdSforMySqlProxyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteRdSforMySqlProxyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteRdSforMySqlProxyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteRdSforMySqlProxyRequest::getProxyId() const
{
    return proxyId_;
}

void DeleteRdSforMySqlProxyRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool DeleteRdSforMySqlProxyRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void DeleteRdSforMySqlProxyRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

std::string DeleteRdSforMySqlProxyRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteRdSforMySqlProxyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteRdSforMySqlProxyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteRdSforMySqlProxyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


