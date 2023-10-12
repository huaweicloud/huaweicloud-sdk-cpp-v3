

#include "huaweicloud/gaussdb/v3/model/UpdateGaussMySqlDatabaseCommentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateGaussMySqlDatabaseCommentRequest::UpdateGaussMySqlDatabaseCommentRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGaussMySqlDatabaseCommentRequest::~UpdateGaussMySqlDatabaseCommentRequest() = default;

void UpdateGaussMySqlDatabaseCommentRequest::validate()
{
}

web::json::value UpdateGaussMySqlDatabaseCommentRequest::toJson() const
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
bool UpdateGaussMySqlDatabaseCommentRequest::fromJson(const web::json::value& val)
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
            UpdateDatabaseCommentRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateGaussMySqlDatabaseCommentRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateGaussMySqlDatabaseCommentRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateGaussMySqlDatabaseCommentRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateGaussMySqlDatabaseCommentRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateGaussMySqlDatabaseCommentRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateGaussMySqlDatabaseCommentRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateGaussMySqlDatabaseCommentRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateGaussMySqlDatabaseCommentRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateDatabaseCommentRequest UpdateGaussMySqlDatabaseCommentRequest::getBody() const
{
    return body_;
}

void UpdateGaussMySqlDatabaseCommentRequest::setBody(const UpdateDatabaseCommentRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGaussMySqlDatabaseCommentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGaussMySqlDatabaseCommentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


