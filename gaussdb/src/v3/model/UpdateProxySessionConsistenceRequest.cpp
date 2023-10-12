

#include "huaweicloud/gaussdb/v3/model/UpdateProxySessionConsistenceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateProxySessionConsistenceRequest::UpdateProxySessionConsistenceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProxySessionConsistenceRequest::~UpdateProxySessionConsistenceRequest() = default;

void UpdateProxySessionConsistenceRequest::validate()
{
}

web::json::value UpdateProxySessionConsistenceRequest::toJson() const
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
bool UpdateProxySessionConsistenceRequest::fromJson(const web::json::value& val)
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
            ModifyProxyConsistRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProxySessionConsistenceRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateProxySessionConsistenceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateProxySessionConsistenceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateProxySessionConsistenceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateProxySessionConsistenceRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateProxySessionConsistenceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateProxySessionConsistenceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateProxySessionConsistenceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateProxySessionConsistenceRequest::getProxyId() const
{
    return proxyId_;
}

void UpdateProxySessionConsistenceRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool UpdateProxySessionConsistenceRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void UpdateProxySessionConsistenceRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

ModifyProxyConsistRequest UpdateProxySessionConsistenceRequest::getBody() const
{
    return body_;
}

void UpdateProxySessionConsistenceRequest::setBody(const ModifyProxyConsistRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProxySessionConsistenceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProxySessionConsistenceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


