

#include "huaweicloud/projectman/v4/model/ReviewCommentEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ReviewCommentEntity::ReviewCommentEntity()
{
    id_ = "";
    idIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    otherUserId_ = "";
    otherUserIdIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
}

ReviewCommentEntity::~ReviewCommentEntity() = default;

void ReviewCommentEntity::validate()
{
}

web::json::value ReviewCommentEntity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(otherUserIdIsSet_) {
        val[utility::conversions::to_string_t("other_user_id")] = ModelBase::toJson(otherUserId_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }

    return val;
}
bool ReviewCommentEntity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("other_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("other_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOtherUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
        }
    }
    return ok;
}


std::string ReviewCommentEntity::getId() const
{
    return id_;
}

void ReviewCommentEntity::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ReviewCommentEntity::idIsSet() const
{
    return idIsSet_;
}

void ReviewCommentEntity::unsetid()
{
    idIsSet_ = false;
}

std::string ReviewCommentEntity::getUserId() const
{
    return userId_;
}

void ReviewCommentEntity::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ReviewCommentEntity::userIdIsSet() const
{
    return userIdIsSet_;
}

void ReviewCommentEntity::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ReviewCommentEntity::getOtherUserId() const
{
    return otherUserId_;
}

void ReviewCommentEntity::setOtherUserId(const std::string& value)
{
    otherUserId_ = value;
    otherUserIdIsSet_ = true;
}

bool ReviewCommentEntity::otherUserIdIsSet() const
{
    return otherUserIdIsSet_;
}

void ReviewCommentEntity::unsetotherUserId()
{
    otherUserIdIsSet_ = false;
}

std::string ReviewCommentEntity::getResult() const
{
    return result_;
}

void ReviewCommentEntity::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ReviewCommentEntity::resultIsSet() const
{
    return resultIsSet_;
}

void ReviewCommentEntity::unsetresult()
{
    resultIsSet_ = false;
}

std::string ReviewCommentEntity::getComment() const
{
    return comment_;
}

void ReviewCommentEntity::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool ReviewCommentEntity::commentIsSet() const
{
    return commentIsSet_;
}

void ReviewCommentEntity::unsetcomment()
{
    commentIsSet_ = false;
}

}
}
}
}
}


