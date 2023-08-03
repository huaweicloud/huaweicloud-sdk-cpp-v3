

#include "huaweicloud/rds/v3/model/UpdateDbUserCommentRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateDbUserCommentRequest::UpdateDbUserCommentRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDbUserCommentRequest::~UpdateDbUserCommentRequest() = default;

void UpdateDbUserCommentRequest::validate()
{
}

web::json::value UpdateDbUserCommentRequest::toJson() const
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

bool UpdateDbUserCommentRequest::fromJson(const web::json::value& val)
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

std::string UpdateDbUserCommentRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateDbUserCommentRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateDbUserCommentRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateDbUserCommentRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateDbUserCommentRequest::getUserName() const
{
    return userName_;
}

void UpdateDbUserCommentRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool UpdateDbUserCommentRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void UpdateDbUserCommentRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

UpdateDbUserReq UpdateDbUserCommentRequest::getBody() const
{
    return body_;
}

void UpdateDbUserCommentRequest::setBody(const UpdateDbUserReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDbUserCommentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDbUserCommentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


