

#include "huaweicloud/codeartsrepo/v3/model/CommitRepoV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




CommitRepoV2::CommitRepoV2()
{
    id_ = "";
    idIsSet_ = false;
    shortId_ = "";
    shortIdIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    parentIdsIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    authorName_ = "";
    authorNameIsSet_ = false;
    committerName_ = "";
    committerNameIsSet_ = false;
    committedDate_ = utility::datetime();
    committedDateIsSet_ = false;
}

CommitRepoV2::~CommitRepoV2() = default;

void CommitRepoV2::validate()
{
}

web::json::value CommitRepoV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(shortIdIsSet_) {
        val[utility::conversions::to_string_t("short_id")] = ModelBase::toJson(shortId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(parentIdsIsSet_) {
        val[utility::conversions::to_string_t("parent_ids")] = ModelBase::toJson(parentIds_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(authorNameIsSet_) {
        val[utility::conversions::to_string_t("author_name")] = ModelBase::toJson(authorName_);
    }
    if(committerNameIsSet_) {
        val[utility::conversions::to_string_t("committer_name")] = ModelBase::toJson(committerName_);
    }
    if(committedDateIsSet_) {
        val[utility::conversions::to_string_t("committed_date")] = ModelBase::toJson(committedDate_);
    }

    return val;
}
bool CommitRepoV2::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("author_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("committed_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("committed_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommittedDate(refVal);
        }
    }
    return ok;
}


std::string CommitRepoV2::getId() const
{
    return id_;
}

void CommitRepoV2::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CommitRepoV2::idIsSet() const
{
    return idIsSet_;
}

void CommitRepoV2::unsetid()
{
    idIsSet_ = false;
}

std::string CommitRepoV2::getShortId() const
{
    return shortId_;
}

void CommitRepoV2::setShortId(const std::string& value)
{
    shortId_ = value;
    shortIdIsSet_ = true;
}

bool CommitRepoV2::shortIdIsSet() const
{
    return shortIdIsSet_;
}

void CommitRepoV2::unsetshortId()
{
    shortIdIsSet_ = false;
}

std::string CommitRepoV2::getCreatedAt() const
{
    return createdAt_;
}

void CommitRepoV2::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CommitRepoV2::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CommitRepoV2::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CommitRepoV2::getTitle() const
{
    return title_;
}

void CommitRepoV2::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CommitRepoV2::titleIsSet() const
{
    return titleIsSet_;
}

void CommitRepoV2::unsettitle()
{
    titleIsSet_ = false;
}

std::vector<std::string>& CommitRepoV2::getParentIds()
{
    return parentIds_;
}

void CommitRepoV2::setParentIds(const std::vector<std::string>& value)
{
    parentIds_ = value;
    parentIdsIsSet_ = true;
}

bool CommitRepoV2::parentIdsIsSet() const
{
    return parentIdsIsSet_;
}

void CommitRepoV2::unsetparentIds()
{
    parentIdsIsSet_ = false;
}

std::string CommitRepoV2::getMessage() const
{
    return message_;
}

void CommitRepoV2::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CommitRepoV2::messageIsSet() const
{
    return messageIsSet_;
}

void CommitRepoV2::unsetmessage()
{
    messageIsSet_ = false;
}

std::string CommitRepoV2::getAuthorName() const
{
    return authorName_;
}

void CommitRepoV2::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool CommitRepoV2::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void CommitRepoV2::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string CommitRepoV2::getCommitterName() const
{
    return committerName_;
}

void CommitRepoV2::setCommitterName(const std::string& value)
{
    committerName_ = value;
    committerNameIsSet_ = true;
}

bool CommitRepoV2::committerNameIsSet() const
{
    return committerNameIsSet_;
}

void CommitRepoV2::unsetcommitterName()
{
    committerNameIsSet_ = false;
}

utility::datetime CommitRepoV2::getCommittedDate() const
{
    return committedDate_;
}

void CommitRepoV2::setCommittedDate(const utility::datetime& value)
{
    committedDate_ = value;
    committedDateIsSet_ = true;
}

bool CommitRepoV2::committedDateIsSet() const
{
    return committedDateIsSet_;
}

void CommitRepoV2::unsetcommittedDate()
{
    committedDateIsSet_ = false;
}

}
}
}
}
}


