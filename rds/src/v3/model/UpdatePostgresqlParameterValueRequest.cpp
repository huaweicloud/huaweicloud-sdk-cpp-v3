

#include "huaweicloud/rds/v3/model/UpdatePostgresqlParameterValueRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdatePostgresqlParameterValueRequest::UpdatePostgresqlParameterValueRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePostgresqlParameterValueRequest::~UpdatePostgresqlParameterValueRequest() = default;

void UpdatePostgresqlParameterValueRequest::validate()
{
}

web::json::value UpdatePostgresqlParameterValueRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdatePostgresqlParameterValueRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyParamRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePostgresqlParameterValueRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdatePostgresqlParameterValueRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdatePostgresqlParameterValueRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdatePostgresqlParameterValueRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdatePostgresqlParameterValueRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdatePostgresqlParameterValueRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdatePostgresqlParameterValueRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdatePostgresqlParameterValueRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdatePostgresqlParameterValueRequest::getName() const
{
    return name_;
}

void UpdatePostgresqlParameterValueRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdatePostgresqlParameterValueRequest::nameIsSet() const
{
    return nameIsSet_;
}

void UpdatePostgresqlParameterValueRequest::unsetname()
{
    nameIsSet_ = false;
}

ModifyParamRequest UpdatePostgresqlParameterValueRequest::getBody() const
{
    return body_;
}

void UpdatePostgresqlParameterValueRequest::setBody(const ModifyParamRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePostgresqlParameterValueRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePostgresqlParameterValueRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


