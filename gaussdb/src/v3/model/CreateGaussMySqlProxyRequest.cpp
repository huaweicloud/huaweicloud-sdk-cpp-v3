

#include "huaweicloud/gaussdb/v3/model/CreateGaussMySqlProxyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateGaussMySqlProxyRequest::CreateGaussMySqlProxyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateGaussMySqlProxyRequest::~CreateGaussMySqlProxyRequest() = default;

void CreateGaussMySqlProxyRequest::validate()
{
}

web::json::value CreateGaussMySqlProxyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateGaussMySqlProxyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            OpenMysqlProxyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateGaussMySqlProxyRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateGaussMySqlProxyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateGaussMySqlProxyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateGaussMySqlProxyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateGaussMySqlProxyRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateGaussMySqlProxyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateGaussMySqlProxyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateGaussMySqlProxyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

OpenMysqlProxyRequestBody CreateGaussMySqlProxyRequest::getBody() const
{
    return body_;
}

void CreateGaussMySqlProxyRequest::setBody(const OpenMysqlProxyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateGaussMySqlProxyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateGaussMySqlProxyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


