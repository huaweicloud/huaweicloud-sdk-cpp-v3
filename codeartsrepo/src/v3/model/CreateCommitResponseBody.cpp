

#include "huaweicloud/codeartsrepo/v3/model/CreateCommitResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




CreateCommitResponseBody::CreateCommitResponseBody()
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
    statsIsSet_ = false;
}

CreateCommitResponseBody::~CreateCommitResponseBody() = default;

void CreateCommitResponseBody::validate()
{
}

web::json::value CreateCommitResponseBody::toJson() const
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
    if(statsIsSet_) {
        val[utility::conversions::to_string_t("stats")] = ModelBase::toJson(stats_);
    }

    return val;
}
bool CreateCommitResponseBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("stats"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stats"));
        if(!fieldValue.is_null())
        {
            CreateCommitResponseBody_stats refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStats(refVal);
        }
    }
    return ok;
}


std::string CreateCommitResponseBody::getId() const
{
    return id_;
}

void CreateCommitResponseBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateCommitResponseBody::idIsSet() const
{
    return idIsSet_;
}

void CreateCommitResponseBody::unsetid()
{
    idIsSet_ = false;
}

std::string CreateCommitResponseBody::getShortId() const
{
    return shortId_;
}

void CreateCommitResponseBody::setShortId(const std::string& value)
{
    shortId_ = value;
    shortIdIsSet_ = true;
}

bool CreateCommitResponseBody::shortIdIsSet() const
{
    return shortIdIsSet_;
}

void CreateCommitResponseBody::unsetshortId()
{
    shortIdIsSet_ = false;
}

std::string CreateCommitResponseBody::getTitle() const
{
    return title_;
}

void CreateCommitResponseBody::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CreateCommitResponseBody::titleIsSet() const
{
    return titleIsSet_;
}

void CreateCommitResponseBody::unsettitle()
{
    titleIsSet_ = false;
}

std::string CreateCommitResponseBody::getAuthorName() const
{
    return authorName_;
}

void CreateCommitResponseBody::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool CreateCommitResponseBody::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void CreateCommitResponseBody::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string CreateCommitResponseBody::getAuthorEmail() const
{
    return authorEmail_;
}

void CreateCommitResponseBody::setAuthorEmail(const std::string& value)
{
    authorEmail_ = value;
    authorEmailIsSet_ = true;
}

bool CreateCommitResponseBody::authorEmailIsSet() const
{
    return authorEmailIsSet_;
}

void CreateCommitResponseBody::unsetauthorEmail()
{
    authorEmailIsSet_ = false;
}

std::string CreateCommitResponseBody::getCommitterName() const
{
    return committerName_;
}

void CreateCommitResponseBody::setCommitterName(const std::string& value)
{
    committerName_ = value;
    committerNameIsSet_ = true;
}

bool CreateCommitResponseBody::committerNameIsSet() const
{
    return committerNameIsSet_;
}

void CreateCommitResponseBody::unsetcommitterName()
{
    committerNameIsSet_ = false;
}

std::string CreateCommitResponseBody::getCommitterEmail() const
{
    return committerEmail_;
}

void CreateCommitResponseBody::setCommitterEmail(const std::string& value)
{
    committerEmail_ = value;
    committerEmailIsSet_ = true;
}

bool CreateCommitResponseBody::committerEmailIsSet() const
{
    return committerEmailIsSet_;
}

void CreateCommitResponseBody::unsetcommitterEmail()
{
    committerEmailIsSet_ = false;
}

std::string CreateCommitResponseBody::getCreatedAt() const
{
    return createdAt_;
}

void CreateCommitResponseBody::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreateCommitResponseBody::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreateCommitResponseBody::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CreateCommitResponseBody::getMessage() const
{
    return message_;
}

void CreateCommitResponseBody::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CreateCommitResponseBody::messageIsSet() const
{
    return messageIsSet_;
}

void CreateCommitResponseBody::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<std::string>& CreateCommitResponseBody::getParentIds()
{
    return parentIds_;
}

void CreateCommitResponseBody::setParentIds(const std::vector<std::string>& value)
{
    parentIds_ = value;
    parentIdsIsSet_ = true;
}

bool CreateCommitResponseBody::parentIdsIsSet() const
{
    return parentIdsIsSet_;
}

void CreateCommitResponseBody::unsetparentIds()
{
    parentIdsIsSet_ = false;
}

utility::datetime CreateCommitResponseBody::getCommittedDate() const
{
    return committedDate_;
}

void CreateCommitResponseBody::setCommittedDate(const utility::datetime& value)
{
    committedDate_ = value;
    committedDateIsSet_ = true;
}

bool CreateCommitResponseBody::committedDateIsSet() const
{
    return committedDateIsSet_;
}

void CreateCommitResponseBody::unsetcommittedDate()
{
    committedDateIsSet_ = false;
}

utility::datetime CreateCommitResponseBody::getAuthoredDate() const
{
    return authoredDate_;
}

void CreateCommitResponseBody::setAuthoredDate(const utility::datetime& value)
{
    authoredDate_ = value;
    authoredDateIsSet_ = true;
}

bool CreateCommitResponseBody::authoredDateIsSet() const
{
    return authoredDateIsSet_;
}

void CreateCommitResponseBody::unsetauthoredDate()
{
    authoredDateIsSet_ = false;
}

CreateCommitResponseBody_stats CreateCommitResponseBody::getStats() const
{
    return stats_;
}

void CreateCommitResponseBody::setStats(const CreateCommitResponseBody_stats& value)
{
    stats_ = value;
    statsIsSet_ = true;
}

bool CreateCommitResponseBody::statsIsSet() const
{
    return statsIsSet_;
}

void CreateCommitResponseBody::unsetstats()
{
    statsIsSet_ = false;
}

}
}
}
}
}


