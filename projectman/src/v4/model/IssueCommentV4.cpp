

#include "huaweicloud/projectman/v4/model/IssueCommentV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueCommentV4::IssueCommentV4()
{
    comment_ = "";
    commentIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    timestamp_ = "";
    timestampIsSet_ = false;
    userIsSet_ = false;
}

IssueCommentV4::~IssueCommentV4() = default;

void IssueCommentV4::validate()
{
}

web::json::value IssueCommentV4::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }

    return val;
}
bool IssueCommentV4::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            CommentUserV4 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    return ok;
}


std::string IssueCommentV4::getComment() const
{
    return comment_;
}

void IssueCommentV4::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool IssueCommentV4::commentIsSet() const
{
    return commentIsSet_;
}

void IssueCommentV4::unsetcomment()
{
    commentIsSet_ = false;
}

int32_t IssueCommentV4::getId() const
{
    return id_;
}

void IssueCommentV4::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueCommentV4::idIsSet() const
{
    return idIsSet_;
}

void IssueCommentV4::unsetid()
{
    idIsSet_ = false;
}

std::string IssueCommentV4::getCreatedTime() const
{
    return createdTime_;
}

void IssueCommentV4::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool IssueCommentV4::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void IssueCommentV4::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string IssueCommentV4::getTimestamp() const
{
    return timestamp_;
}

void IssueCommentV4::setTimestamp(const std::string& value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool IssueCommentV4::timestampIsSet() const
{
    return timestampIsSet_;
}

void IssueCommentV4::unsettimestamp()
{
    timestampIsSet_ = false;
}

CommentUserV4 IssueCommentV4::getUser() const
{
    return user_;
}

void IssueCommentV4::setUser(const CommentUserV4& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool IssueCommentV4::userIsSet() const
{
    return userIsSet_;
}

void IssueCommentV4::unsetuser()
{
    userIsSet_ = false;
}

}
}
}
}
}


