

#include "huaweicloud/gaussdb/v3/model/ResetGaussMySqlPasswordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ResetGaussMySqlPasswordRequest::ResetGaussMySqlPasswordRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResetGaussMySqlPasswordRequest::~ResetGaussMySqlPasswordRequest() = default;

void ResetGaussMySqlPasswordRequest::validate()
{
}

web::json::value ResetGaussMySqlPasswordRequest::toJson() const
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
bool ResetGaussMySqlPasswordRequest::fromJson(const web::json::value& val)
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
            MysqlResetPasswordRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResetGaussMySqlPasswordRequest::getXLanguage() const
{
    return xLanguage_;
}

void ResetGaussMySqlPasswordRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ResetGaussMySqlPasswordRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ResetGaussMySqlPasswordRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ResetGaussMySqlPasswordRequest::getInstanceId() const
{
    return instanceId_;
}

void ResetGaussMySqlPasswordRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResetGaussMySqlPasswordRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResetGaussMySqlPasswordRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

MysqlResetPasswordRequest ResetGaussMySqlPasswordRequest::getBody() const
{
    return body_;
}

void ResetGaussMySqlPasswordRequest::setBody(const MysqlResetPasswordRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetGaussMySqlPasswordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetGaussMySqlPasswordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


