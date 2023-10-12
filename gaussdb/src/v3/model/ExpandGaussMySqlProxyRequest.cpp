

#include "huaweicloud/gaussdb/v3/model/ExpandGaussMySqlProxyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ExpandGaussMySqlProxyRequest::ExpandGaussMySqlProxyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExpandGaussMySqlProxyRequest::~ExpandGaussMySqlProxyRequest() = default;

void ExpandGaussMySqlProxyRequest::validate()
{
}

web::json::value ExpandGaussMySqlProxyRequest::toJson() const
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
bool ExpandGaussMySqlProxyRequest::fromJson(const web::json::value& val)
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
            EnlargeProxyRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExpandGaussMySqlProxyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExpandGaussMySqlProxyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExpandGaussMySqlProxyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExpandGaussMySqlProxyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ExpandGaussMySqlProxyRequest::getInstanceId() const
{
    return instanceId_;
}

void ExpandGaussMySqlProxyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExpandGaussMySqlProxyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExpandGaussMySqlProxyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

EnlargeProxyRequest ExpandGaussMySqlProxyRequest::getBody() const
{
    return body_;
}

void ExpandGaussMySqlProxyRequest::setBody(const EnlargeProxyRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExpandGaussMySqlProxyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExpandGaussMySqlProxyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


