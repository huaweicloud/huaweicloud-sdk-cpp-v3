

#include "huaweicloud/gaussdb/v3/model/DeleteGaussMySqlProxyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteGaussMySqlProxyRequest::DeleteGaussMySqlProxyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteGaussMySqlProxyRequest::~DeleteGaussMySqlProxyRequest() = default;

void DeleteGaussMySqlProxyRequest::validate()
{
}

web::json::value DeleteGaussMySqlProxyRequest::toJson() const
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
bool DeleteGaussMySqlProxyRequest::fromJson(const web::json::value& val)
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
            CloseMysqlProxyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteGaussMySqlProxyRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteGaussMySqlProxyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteGaussMySqlProxyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteGaussMySqlProxyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteGaussMySqlProxyRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteGaussMySqlProxyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteGaussMySqlProxyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteGaussMySqlProxyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CloseMysqlProxyRequestBody DeleteGaussMySqlProxyRequest::getBody() const
{
    return body_;
}

void DeleteGaussMySqlProxyRequest::setBody(const CloseMysqlProxyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteGaussMySqlProxyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteGaussMySqlProxyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


