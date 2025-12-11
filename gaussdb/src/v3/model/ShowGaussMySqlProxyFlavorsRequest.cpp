

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlProxyFlavorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlProxyFlavorsRequest::ShowGaussMySqlProxyFlavorsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    queryType_ = "";
    queryTypeIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
}

ShowGaussMySqlProxyFlavorsRequest::~ShowGaussMySqlProxyFlavorsRequest() = default;

void ShowGaussMySqlProxyFlavorsRequest::validate()
{
}

web::json::value ShowGaussMySqlProxyFlavorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(queryTypeIsSet_) {
        val[utility::conversions::to_string_t("query_type")] = ModelBase::toJson(queryType_);
    }
    if(proxyIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_id")] = ModelBase::toJson(proxyId_);
    }

    return val;
}
bool ShowGaussMySqlProxyFlavorsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("query_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryType(refVal);
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
    return ok;
}


std::string ShowGaussMySqlProxyFlavorsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowGaussMySqlProxyFlavorsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowGaussMySqlProxyFlavorsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowGaussMySqlProxyFlavorsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowGaussMySqlProxyFlavorsRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowGaussMySqlProxyFlavorsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowGaussMySqlProxyFlavorsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowGaussMySqlProxyFlavorsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowGaussMySqlProxyFlavorsRequest::getQueryType() const
{
    return queryType_;
}

void ShowGaussMySqlProxyFlavorsRequest::setQueryType(const std::string& value)
{
    queryType_ = value;
    queryTypeIsSet_ = true;
}

bool ShowGaussMySqlProxyFlavorsRequest::queryTypeIsSet() const
{
    return queryTypeIsSet_;
}

void ShowGaussMySqlProxyFlavorsRequest::unsetqueryType()
{
    queryTypeIsSet_ = false;
}

std::string ShowGaussMySqlProxyFlavorsRequest::getProxyId() const
{
    return proxyId_;
}

void ShowGaussMySqlProxyFlavorsRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool ShowGaussMySqlProxyFlavorsRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void ShowGaussMySqlProxyFlavorsRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

}
}
}
}
}


