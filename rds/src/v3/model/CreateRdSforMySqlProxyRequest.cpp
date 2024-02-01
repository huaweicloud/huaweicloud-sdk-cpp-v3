

#include "huaweicloud/rds/v3/model/CreateRdSforMySqlProxyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateRdSforMySqlProxyRequest::CreateRdSforMySqlProxyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateRdSforMySqlProxyRequest::~CreateRdSforMySqlProxyRequest() = default;

void CreateRdSforMySqlProxyRequest::validate()
{
}

web::json::value CreateRdSforMySqlProxyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateRdSforMySqlProxyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateMysqlMultiProxyRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateRdSforMySqlProxyRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateRdSforMySqlProxyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateRdSforMySqlProxyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateRdSforMySqlProxyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateRdSforMySqlProxyRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateRdSforMySqlProxyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateRdSforMySqlProxyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateRdSforMySqlProxyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreateMysqlMultiProxyRequest CreateRdSforMySqlProxyRequest::getBody() const
{
    return body_;
}

void CreateRdSforMySqlProxyRequest::setBody(const CreateMysqlMultiProxyRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRdSforMySqlProxyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRdSforMySqlProxyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


