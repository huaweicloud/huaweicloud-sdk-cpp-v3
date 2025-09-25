

#include "huaweicloud/codehub/v3/model/Commit.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




Commit::Commit()
{
    authorEmail_ = "";
    authorEmailIsSet_ = false;
    authorName_ = "";
    authorNameIsSet_ = false;
    authoredDate_ = utility::datetime();
    authoredDateIsSet_ = false;
    committedDate_ = utility::datetime();
    committedDateIsSet_ = false;
    committerEmail_ = "";
    committerEmailIsSet_ = false;
    committerName_ = "";
    committerNameIsSet_ = false;
    formatIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    parentIdsIsSet_ = false;
}

Commit::~Commit() = default;

void Commit::validate()
{
}

web::json::value Commit::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorEmailIsSet_) {
        val[utility::conversions::to_string_t("author_email")] = ModelBase::toJson(authorEmail_);
    }
    if(authorNameIsSet_) {
        val[utility::conversions::to_string_t("author_name")] = ModelBase::toJson(authorName_);
    }
    if(authoredDateIsSet_) {
        val[utility::conversions::to_string_t("authored_date")] = ModelBase::toJson(authoredDate_);
    }
    if(committedDateIsSet_) {
        val[utility::conversions::to_string_t("committed_date")] = ModelBase::toJson(committedDate_);
    }
    if(committerEmailIsSet_) {
        val[utility::conversions::to_string_t("committer_email")] = ModelBase::toJson(committerEmail_);
    }
    if(committerNameIsSet_) {
        val[utility::conversions::to_string_t("committer_name")] = ModelBase::toJson(committerName_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(parentIdsIsSet_) {
        val[utility::conversions::to_string_t("parent_ids")] = ModelBase::toJson(parentIds_);
    }

    return val;
}
bool Commit::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("author_email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorEmail(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("authored_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authored_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthoredDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("committer_email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("committer_email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitterEmail(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    return ok;
}


std::string Commit::getAuthorEmail() const
{
    return authorEmail_;
}

void Commit::setAuthorEmail(const std::string& value)
{
    authorEmail_ = value;
    authorEmailIsSet_ = true;
}

bool Commit::authorEmailIsSet() const
{
    return authorEmailIsSet_;
}

void Commit::unsetauthorEmail()
{
    authorEmailIsSet_ = false;
}

std::string Commit::getAuthorName() const
{
    return authorName_;
}

void Commit::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool Commit::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void Commit::unsetauthorName()
{
    authorNameIsSet_ = false;
}

utility::datetime Commit::getAuthoredDate() const
{
    return authoredDate_;
}

void Commit::setAuthoredDate(const utility::datetime& value)
{
    authoredDate_ = value;
    authoredDateIsSet_ = true;
}

bool Commit::authoredDateIsSet() const
{
    return authoredDateIsSet_;
}

void Commit::unsetauthoredDate()
{
    authoredDateIsSet_ = false;
}

utility::datetime Commit::getCommittedDate() const
{
    return committedDate_;
}

void Commit::setCommittedDate(const utility::datetime& value)
{
    committedDate_ = value;
    committedDateIsSet_ = true;
}

bool Commit::committedDateIsSet() const
{
    return committedDateIsSet_;
}

void Commit::unsetcommittedDate()
{
    committedDateIsSet_ = false;
}

std::string Commit::getCommitterEmail() const
{
    return committerEmail_;
}

void Commit::setCommitterEmail(const std::string& value)
{
    committerEmail_ = value;
    committerEmailIsSet_ = true;
}

bool Commit::committerEmailIsSet() const
{
    return committerEmailIsSet_;
}

void Commit::unsetcommitterEmail()
{
    committerEmailIsSet_ = false;
}

std::string Commit::getCommitterName() const
{
    return committerName_;
}

void Commit::setCommitterName(const std::string& value)
{
    committerName_ = value;
    committerNameIsSet_ = true;
}

bool Commit::committerNameIsSet() const
{
    return committerNameIsSet_;
}

void Commit::unsetcommitterName()
{
    committerNameIsSet_ = false;
}

Object Commit::getFormat() const
{
    return format_;
}

void Commit::setFormat(const Object& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool Commit::formatIsSet() const
{
    return formatIsSet_;
}

void Commit::unsetformat()
{
    formatIsSet_ = false;
}

std::string Commit::getId() const
{
    return id_;
}

void Commit::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Commit::idIsSet() const
{
    return idIsSet_;
}

void Commit::unsetid()
{
    idIsSet_ = false;
}

std::string Commit::getMessage() const
{
    return message_;
}

void Commit::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool Commit::messageIsSet() const
{
    return messageIsSet_;
}

void Commit::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<std::string>& Commit::getParentIds()
{
    return parentIds_;
}

void Commit::setParentIds(const std::vector<std::string>& value)
{
    parentIds_ = value;
    parentIdsIsSet_ = true;
}

bool Commit::parentIdsIsSet() const
{
    return parentIdsIsSet_;
}

void Commit::unsetparentIds()
{
    parentIdsIsSet_ = false;
}

}
}
}
}
}


