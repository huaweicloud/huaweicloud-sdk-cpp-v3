

#include "huaweicloud/gaussdb/v3/model/SetGaussMySqlProxyWeightRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetGaussMySqlProxyWeightRequest::SetGaussMySqlProxyWeightRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetGaussMySqlProxyWeightRequest::~SetGaussMySqlProxyWeightRequest() = default;

void SetGaussMySqlProxyWeightRequest::validate()
{
}

web::json::value SetGaussMySqlProxyWeightRequest::toJson() const
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

bool SetGaussMySqlProxyWeightRequest::fromJson(const web::json::value& val)
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
            TaurusModifyProxyWeightRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string SetGaussMySqlProxyWeightRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetGaussMySqlProxyWeightRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetGaussMySqlProxyWeightRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetGaussMySqlProxyWeightRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SetGaussMySqlProxyWeightRequest::getInstanceId() const
{
    return instanceId_;
}

void SetGaussMySqlProxyWeightRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetGaussMySqlProxyWeightRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetGaussMySqlProxyWeightRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SetGaussMySqlProxyWeightRequest::getProxyId() const
{
    return proxyId_;
}

void SetGaussMySqlProxyWeightRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool SetGaussMySqlProxyWeightRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void SetGaussMySqlProxyWeightRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

TaurusModifyProxyWeightRequest SetGaussMySqlProxyWeightRequest::getBody() const
{
    return body_;
}

void SetGaussMySqlProxyWeightRequest::setBody(const TaurusModifyProxyWeightRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetGaussMySqlProxyWeightRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetGaussMySqlProxyWeightRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


