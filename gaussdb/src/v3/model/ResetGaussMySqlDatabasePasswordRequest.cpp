

#include "huaweicloud/gaussdb/v3/model/ResetGaussMySqlDatabasePasswordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ResetGaussMySqlDatabasePasswordRequest::ResetGaussMySqlDatabasePasswordRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResetGaussMySqlDatabasePasswordRequest::~ResetGaussMySqlDatabasePasswordRequest() = default;

void ResetGaussMySqlDatabasePasswordRequest::validate()
{
}

web::json::value ResetGaussMySqlDatabasePasswordRequest::toJson() const
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
bool ResetGaussMySqlDatabasePasswordRequest::fromJson(const web::json::value& val)
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
            ResetDatabasePasswordRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResetGaussMySqlDatabasePasswordRequest::getXLanguage() const
{
    return xLanguage_;
}

void ResetGaussMySqlDatabasePasswordRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ResetGaussMySqlDatabasePasswordRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ResetGaussMySqlDatabasePasswordRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ResetGaussMySqlDatabasePasswordRequest::getInstanceId() const
{
    return instanceId_;
}

void ResetGaussMySqlDatabasePasswordRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResetGaussMySqlDatabasePasswordRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResetGaussMySqlDatabasePasswordRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ResetDatabasePasswordRequest ResetGaussMySqlDatabasePasswordRequest::getBody() const
{
    return body_;
}

void ResetGaussMySqlDatabasePasswordRequest::setBody(const ResetDatabasePasswordRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetGaussMySqlDatabasePasswordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetGaussMySqlDatabasePasswordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


