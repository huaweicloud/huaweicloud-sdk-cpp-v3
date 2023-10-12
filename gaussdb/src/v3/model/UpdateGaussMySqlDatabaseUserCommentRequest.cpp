

#include "huaweicloud/gaussdb/v3/model/UpdateGaussMySqlDatabaseUserCommentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateGaussMySqlDatabaseUserCommentRequest::UpdateGaussMySqlDatabaseUserCommentRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGaussMySqlDatabaseUserCommentRequest::~UpdateGaussMySqlDatabaseUserCommentRequest() = default;

void UpdateGaussMySqlDatabaseUserCommentRequest::validate()
{
}

web::json::value UpdateGaussMySqlDatabaseUserCommentRequest::toJson() const
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
bool UpdateGaussMySqlDatabaseUserCommentRequest::fromJson(const web::json::value& val)
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
            UpdateDatabaseUserCommentRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateGaussMySqlDatabaseUserCommentRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateGaussMySqlDatabaseUserCommentRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateGaussMySqlDatabaseUserCommentRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateGaussMySqlDatabaseUserCommentRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateGaussMySqlDatabaseUserCommentRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateGaussMySqlDatabaseUserCommentRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateGaussMySqlDatabaseUserCommentRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateGaussMySqlDatabaseUserCommentRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateDatabaseUserCommentRequest UpdateGaussMySqlDatabaseUserCommentRequest::getBody() const
{
    return body_;
}

void UpdateGaussMySqlDatabaseUserCommentRequest::setBody(const UpdateDatabaseUserCommentRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGaussMySqlDatabaseUserCommentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGaussMySqlDatabaseUserCommentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


