

#include "huaweicloud/rds/v3/model/SetPostgresqlDbUserPwdRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetPostgresqlDbUserPwdRequest::SetPostgresqlDbUserPwdRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetPostgresqlDbUserPwdRequest::~SetPostgresqlDbUserPwdRequest() = default;

void SetPostgresqlDbUserPwdRequest::validate()
{
}

web::json::value SetPostgresqlDbUserPwdRequest::toJson() const
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

bool SetPostgresqlDbUserPwdRequest::fromJson(const web::json::value& val)
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
            DbUserPwdRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string SetPostgresqlDbUserPwdRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetPostgresqlDbUserPwdRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetPostgresqlDbUserPwdRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetPostgresqlDbUserPwdRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SetPostgresqlDbUserPwdRequest::getInstanceId() const
{
    return instanceId_;
}

void SetPostgresqlDbUserPwdRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetPostgresqlDbUserPwdRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetPostgresqlDbUserPwdRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DbUserPwdRequest SetPostgresqlDbUserPwdRequest::getBody() const
{
    return body_;
}

void SetPostgresqlDbUserPwdRequest::setBody(const DbUserPwdRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetPostgresqlDbUserPwdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetPostgresqlDbUserPwdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


