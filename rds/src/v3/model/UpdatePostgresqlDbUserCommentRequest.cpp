

#include "huaweicloud/rds/v3/model/UpdatePostgresqlDbUserCommentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdatePostgresqlDbUserCommentRequest::UpdatePostgresqlDbUserCommentRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePostgresqlDbUserCommentRequest::~UpdatePostgresqlDbUserCommentRequest() = default;

void UpdatePostgresqlDbUserCommentRequest::validate()
{
}

web::json::value UpdatePostgresqlDbUserCommentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdatePostgresqlDbUserCommentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateDbUserReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePostgresqlDbUserCommentRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdatePostgresqlDbUserCommentRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdatePostgresqlDbUserCommentRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdatePostgresqlDbUserCommentRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdatePostgresqlDbUserCommentRequest::getUserName() const
{
    return userName_;
}

void UpdatePostgresqlDbUserCommentRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool UpdatePostgresqlDbUserCommentRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void UpdatePostgresqlDbUserCommentRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

UpdateDbUserReq UpdatePostgresqlDbUserCommentRequest::getBody() const
{
    return body_;
}

void UpdatePostgresqlDbUserCommentRequest::setBody(const UpdateDbUserReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePostgresqlDbUserCommentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePostgresqlDbUserCommentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


