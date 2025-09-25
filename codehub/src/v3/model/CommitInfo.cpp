

#include "huaweicloud/codehub/v3/model/CommitInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




CommitInfo::CommitInfo()
{
    id_ = "";
    idIsSet_ = false;
    shortId_ = "";
    shortIdIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    authorName_ = "";
    authorNameIsSet_ = false;
    authorEmail_ = "";
    authorEmailIsSet_ = false;
    committerName_ = "";
    committerNameIsSet_ = false;
    committerEmail_ = "";
    committerEmailIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    parentIdsIsSet_ = false;
    committedDate_ = utility::datetime();
    committedDateIsSet_ = false;
    authoredDate_ = utility::datetime();
    authoredDateIsSet_ = false;
}

CommitInfo::~CommitInfo() = default;

void CommitInfo::validate()
{
}

web::json::value CommitInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(shortIdIsSet_) {
        val[utility::conversions::to_string_t("short_id")] = ModelBase::toJson(shortId_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(authorNameIsSet_) {
        val[utility::conversions::to_string_t("author_name")] = ModelBase::toJson(authorName_);
    }
    if(authorEmailIsSet_) {
        val[utility::conversions::to_string_t("author_email")] = ModelBase::toJson(authorEmail_);
    }
    if(committerNameIsSet_) {
        val[utility::conversions::to_string_t("committer_name")] = ModelBase::toJson(committerName_);
    }
    if(committerEmailIsSet_) {
        val[utility::conversions::to_string_t("committer_email")] = ModelBase::toJson(committerEmail_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(parentIdsIsSet_) {
        val[utility::conversions::to_string_t("parent_ids")] = ModelBase::toJson(parentIds_);
    }
    if(committedDateIsSet_) {
        val[utility::conversions::to_string_t("committed_date")] = ModelBase::toJson(committedDate_);
    }
    if(authoredDateIsSet_) {
        val[utility::conversions::to_string_t("authored_date")] = ModelBase::toJson(authoredDate_);
    }

    return val;
}
bool CommitInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("short_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("short_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("committer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("committer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitterName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("committer_email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("committer_email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitterEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("committed_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("committed_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommittedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authored_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authored_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthoredDate(refVal);
        }
    }
    return ok;
}


std::string CommitInfo::getId() const
{
    return id_;
}

void CommitInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CommitInfo::idIsSet() const
{
    return idIsSet_;
}

void CommitInfo::unsetid()
{
    idIsSet_ = false;
}

std::string CommitInfo::getShortId() const
{
    return shortId_;
}

void CommitInfo::setShortId(const std::string& value)
{
    shortId_ = value;
    shortIdIsSet_ = true;
}

bool CommitInfo::shortIdIsSet() const
{
    return shortIdIsSet_;
}

void CommitInfo::unsetshortId()
{
    shortIdIsSet_ = false;
}

std::string CommitInfo::getTitle() const
{
    return title_;
}

void CommitInfo::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CommitInfo::titleIsSet() const
{
    return titleIsSet_;
}

void CommitInfo::unsettitle()
{
    titleIsSet_ = false;
}

std::string CommitInfo::getAuthorName() const
{
    return authorName_;
}

void CommitInfo::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool CommitInfo::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void CommitInfo::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string CommitInfo::getAuthorEmail() const
{
    return authorEmail_;
}

void CommitInfo::setAuthorEmail(const std::string& value)
{
    authorEmail_ = value;
    authorEmailIsSet_ = true;
}

bool CommitInfo::authorEmailIsSet() const
{
    return authorEmailIsSet_;
}

void CommitInfo::unsetauthorEmail()
{
    authorEmailIsSet_ = false;
}

std::string CommitInfo::getCommitterName() const
{
    return committerName_;
}

void CommitInfo::setCommitterName(const std::string& value)
{
    committerName_ = value;
    committerNameIsSet_ = true;
}

bool CommitInfo::committerNameIsSet() const
{
    return committerNameIsSet_;
}

void CommitInfo::unsetcommitterName()
{
    committerNameIsSet_ = false;
}

std::string CommitInfo::getCommitterEmail() const
{
    return committerEmail_;
}

void CommitInfo::setCommitterEmail(const std::string& value)
{
    committerEmail_ = value;
    committerEmailIsSet_ = true;
}

bool CommitInfo::committerEmailIsSet() const
{
    return committerEmailIsSet_;
}

void CommitInfo::unsetcommitterEmail()
{
    committerEmailIsSet_ = false;
}

std::string CommitInfo::getCreatedAt() const
{
    return createdAt_;
}

void CommitInfo::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CommitInfo::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CommitInfo::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CommitInfo::getMessage() const
{
    return message_;
}

void CommitInfo::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CommitInfo::messageIsSet() const
{
    return messageIsSet_;
}

void CommitInfo::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<std::string>& CommitInfo::getParentIds()
{
    return parentIds_;
}

void CommitInfo::setParentIds(const std::vector<std::string>& value)
{
    parentIds_ = value;
    parentIdsIsSet_ = true;
}

bool CommitInfo::parentIdsIsSet() const
{
    return parentIdsIsSet_;
}

void CommitInfo::unsetparentIds()
{
    parentIdsIsSet_ = false;
}

utility::datetime CommitInfo::getCommittedDate() const
{
    return committedDate_;
}

void CommitInfo::setCommittedDate(const utility::datetime& value)
{
    committedDate_ = value;
    committedDateIsSet_ = true;
}

bool CommitInfo::committedDateIsSet() const
{
    return committedDateIsSet_;
}

void CommitInfo::unsetcommittedDate()
{
    committedDateIsSet_ = false;
}

utility::datetime CommitInfo::getAuthoredDate() const
{
    return authoredDate_;
}

void CommitInfo::setAuthoredDate(const utility::datetime& value)
{
    authoredDate_ = value;
    authoredDateIsSet_ = true;
}

bool CommitInfo::authoredDateIsSet() const
{
    return authoredDateIsSet_;
}

void CommitInfo::unsetauthoredDate()
{
    authoredDateIsSet_ = false;
}

}
}
}
}
}


