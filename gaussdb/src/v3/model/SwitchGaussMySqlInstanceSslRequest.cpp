

#include "huaweicloud/gaussdb/v3/model/SwitchGaussMySqlInstanceSslRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchGaussMySqlInstanceSslRequest::SwitchGaussMySqlInstanceSslRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchGaussMySqlInstanceSslRequest::~SwitchGaussMySqlInstanceSslRequest() = default;

void SwitchGaussMySqlInstanceSslRequest::validate()
{
}

web::json::value SwitchGaussMySqlInstanceSslRequest::toJson() const
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
bool SwitchGaussMySqlInstanceSslRequest::fromJson(const web::json::value& val)
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
            SwitchSSLRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchGaussMySqlInstanceSslRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchGaussMySqlInstanceSslRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchGaussMySqlInstanceSslRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchGaussMySqlInstanceSslRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SwitchGaussMySqlInstanceSslRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchGaussMySqlInstanceSslRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchGaussMySqlInstanceSslRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchGaussMySqlInstanceSslRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SwitchSSLRequest SwitchGaussMySqlInstanceSslRequest::getBody() const
{
    return body_;
}

void SwitchGaussMySqlInstanceSslRequest::setBody(const SwitchSSLRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchGaussMySqlInstanceSslRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchGaussMySqlInstanceSslRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


