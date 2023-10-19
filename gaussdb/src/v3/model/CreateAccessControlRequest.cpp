

#include "huaweicloud/gaussdb/v3/model/CreateAccessControlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateAccessControlRequest::CreateAccessControlRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAccessControlRequest::~CreateAccessControlRequest() = default;

void CreateAccessControlRequest::validate()
{
}

web::json::value CreateAccessControlRequest::toJson() const
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
bool CreateAccessControlRequest::fromJson(const web::json::value& val)
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
            CreateAccessControlRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAccessControlRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateAccessControlRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateAccessControlRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateAccessControlRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateAccessControlRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateAccessControlRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateAccessControlRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateAccessControlRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateAccessControlRequest::getProxyId() const
{
    return proxyId_;
}

void CreateAccessControlRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool CreateAccessControlRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void CreateAccessControlRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

CreateAccessControlRequestBody CreateAccessControlRequest::getBody() const
{
    return body_;
}

void CreateAccessControlRequest::setBody(const CreateAccessControlRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAccessControlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAccessControlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


