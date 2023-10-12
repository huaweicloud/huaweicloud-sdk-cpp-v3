

#include "huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceAliasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateGaussMySqlInstanceAliasRequest::UpdateGaussMySqlInstanceAliasRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGaussMySqlInstanceAliasRequest::~UpdateGaussMySqlInstanceAliasRequest() = default;

void UpdateGaussMySqlInstanceAliasRequest::validate()
{
}

web::json::value UpdateGaussMySqlInstanceAliasRequest::toJson() const
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
bool UpdateGaussMySqlInstanceAliasRequest::fromJson(const web::json::value& val)
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
            ModifyAliasRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateGaussMySqlInstanceAliasRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateGaussMySqlInstanceAliasRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateGaussMySqlInstanceAliasRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateGaussMySqlInstanceAliasRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateGaussMySqlInstanceAliasRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateGaussMySqlInstanceAliasRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateGaussMySqlInstanceAliasRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateGaussMySqlInstanceAliasRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ModifyAliasRequest UpdateGaussMySqlInstanceAliasRequest::getBody() const
{
    return body_;
}

void UpdateGaussMySqlInstanceAliasRequest::setBody(const ModifyAliasRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGaussMySqlInstanceAliasRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGaussMySqlInstanceAliasRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


