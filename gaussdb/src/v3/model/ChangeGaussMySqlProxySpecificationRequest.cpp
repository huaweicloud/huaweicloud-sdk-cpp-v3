

#include "huaweicloud/gaussdb/v3/model/ChangeGaussMySqlProxySpecificationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChangeGaussMySqlProxySpecificationRequest::ChangeGaussMySqlProxySpecificationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeGaussMySqlProxySpecificationRequest::~ChangeGaussMySqlProxySpecificationRequest() = default;

void ChangeGaussMySqlProxySpecificationRequest::validate()
{
}

web::json::value ChangeGaussMySqlProxySpecificationRequest::toJson() const
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
bool ChangeGaussMySqlProxySpecificationRequest::fromJson(const web::json::value& val)
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
            TaurusProxyScaleRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeGaussMySqlProxySpecificationRequest::getXLanguage() const
{
    return xLanguage_;
}

void ChangeGaussMySqlProxySpecificationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ChangeGaussMySqlProxySpecificationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ChangeGaussMySqlProxySpecificationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ChangeGaussMySqlProxySpecificationRequest::getInstanceId() const
{
    return instanceId_;
}

void ChangeGaussMySqlProxySpecificationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ChangeGaussMySqlProxySpecificationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ChangeGaussMySqlProxySpecificationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ChangeGaussMySqlProxySpecificationRequest::getProxyId() const
{
    return proxyId_;
}

void ChangeGaussMySqlProxySpecificationRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool ChangeGaussMySqlProxySpecificationRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void ChangeGaussMySqlProxySpecificationRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

TaurusProxyScaleRequest ChangeGaussMySqlProxySpecificationRequest::getBody() const
{
    return body_;
}

void ChangeGaussMySqlProxySpecificationRequest::setBody(const TaurusProxyScaleRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeGaussMySqlProxySpecificationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeGaussMySqlProxySpecificationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


