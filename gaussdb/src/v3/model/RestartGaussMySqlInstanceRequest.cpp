

#include "huaweicloud/gaussdb/v3/model/RestartGaussMySqlInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RestartGaussMySqlInstanceRequest::RestartGaussMySqlInstanceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

RestartGaussMySqlInstanceRequest::~RestartGaussMySqlInstanceRequest() = default;

void RestartGaussMySqlInstanceRequest::validate()
{
}

web::json::value RestartGaussMySqlInstanceRequest::toJson() const
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
bool RestartGaussMySqlInstanceRequest::fromJson(const web::json::value& val)
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
            TaurusRestartInstanceRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RestartGaussMySqlInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void RestartGaussMySqlInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RestartGaussMySqlInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RestartGaussMySqlInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string RestartGaussMySqlInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void RestartGaussMySqlInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RestartGaussMySqlInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RestartGaussMySqlInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

TaurusRestartInstanceRequest RestartGaussMySqlInstanceRequest::getBody() const
{
    return body_;
}

void RestartGaussMySqlInstanceRequest::setBody(const TaurusRestartInstanceRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RestartGaussMySqlInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RestartGaussMySqlInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


