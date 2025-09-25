

#include "huaweicloud/codehub/v3/model/SpecificCommitInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




SpecificCommitInfo::SpecificCommitInfo()
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
    lastPipelineIsSet_ = false;
}

SpecificCommitInfo::~SpecificCommitInfo() = default;

void SpecificCommitInfo::validate()
{
}

web::json::value SpecificCommitInfo::toJson() const
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
    if(lastPipelineIsSet_) {
        val[utility::conversions::to_string_t("last_pipeline")] = ModelBase::toJson(lastPipeline_);
    }

    return val;
}
bool SpecificCommitInfo::fromJson(const web::json::value& val)
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
            SpecificCommitInfo_stats refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStats(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_pipeline"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_pipeline"));
        if(!fieldValue.is_null())
        {
            SpecificCommitInfo_last_pipeline refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastPipeline(refVal);
        }
    }
    return ok;
}


std::string SpecificCommitInfo::getId() const
{
    return id_;
}

void SpecificCommitInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SpecificCommitInfo::idIsSet() const
{
    return idIsSet_;
}

void SpecificCommitInfo::unsetid()
{
    idIsSet_ = false;
}

std::string SpecificCommitInfo::getShortId() const
{
    return shortId_;
}

void SpecificCommitInfo::setShortId(const std::string& value)
{
    shortId_ = value;
    shortIdIsSet_ = true;
}

bool SpecificCommitInfo::shortIdIsSet() const
{
    return shortIdIsSet_;
}

void SpecificCommitInfo::unsetshortId()
{
    shortIdIsSet_ = false;
}

std::string SpecificCommitInfo::getTitle() const
{
    return title_;
}

void SpecificCommitInfo::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool SpecificCommitInfo::titleIsSet() const
{
    return titleIsSet_;
}

void SpecificCommitInfo::unsettitle()
{
    titleIsSet_ = false;
}

std::string SpecificCommitInfo::getAuthorName() const
{
    return authorName_;
}

void SpecificCommitInfo::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool SpecificCommitInfo::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void SpecificCommitInfo::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string SpecificCommitInfo::getAuthorEmail() const
{
    return authorEmail_;
}

void SpecificCommitInfo::setAuthorEmail(const std::string& value)
{
    authorEmail_ = value;
    authorEmailIsSet_ = true;
}

bool SpecificCommitInfo::authorEmailIsSet() const
{
    return authorEmailIsSet_;
}

void SpecificCommitInfo::unsetauthorEmail()
{
    authorEmailIsSet_ = false;
}

std::string SpecificCommitInfo::getCommitterName() const
{
    return committerName_;
}

void SpecificCommitInfo::setCommitterName(const std::string& value)
{
    committerName_ = value;
    committerNameIsSet_ = true;
}

bool SpecificCommitInfo::committerNameIsSet() const
{
    return committerNameIsSet_;
}

void SpecificCommitInfo::unsetcommitterName()
{
    committerNameIsSet_ = false;
}

std::string SpecificCommitInfo::getCommitterEmail() const
{
    return committerEmail_;
}

void SpecificCommitInfo::setCommitterEmail(const std::string& value)
{
    committerEmail_ = value;
    committerEmailIsSet_ = true;
}

bool SpecificCommitInfo::committerEmailIsSet() const
{
    return committerEmailIsSet_;
}

void SpecificCommitInfo::unsetcommitterEmail()
{
    committerEmailIsSet_ = false;
}

std::string SpecificCommitInfo::getCreatedAt() const
{
    return createdAt_;
}

void SpecificCommitInfo::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool SpecificCommitInfo::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void SpecificCommitInfo::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string SpecificCommitInfo::getMessage() const
{
    return message_;
}

void SpecificCommitInfo::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool SpecificCommitInfo::messageIsSet() const
{
    return messageIsSet_;
}

void SpecificCommitInfo::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<std::string>& SpecificCommitInfo::getParentIds()
{
    return parentIds_;
}

void SpecificCommitInfo::setParentIds(const std::vector<std::string>& value)
{
    parentIds_ = value;
    parentIdsIsSet_ = true;
}

bool SpecificCommitInfo::parentIdsIsSet() const
{
    return parentIdsIsSet_;
}

void SpecificCommitInfo::unsetparentIds()
{
    parentIdsIsSet_ = false;
}

utility::datetime SpecificCommitInfo::getCommittedDate() const
{
    return committedDate_;
}

void SpecificCommitInfo::setCommittedDate(const utility::datetime& value)
{
    committedDate_ = value;
    committedDateIsSet_ = true;
}

bool SpecificCommitInfo::committedDateIsSet() const
{
    return committedDateIsSet_;
}

void SpecificCommitInfo::unsetcommittedDate()
{
    committedDateIsSet_ = false;
}

utility::datetime SpecificCommitInfo::getAuthoredDate() const
{
    return authoredDate_;
}

void SpecificCommitInfo::setAuthoredDate(const utility::datetime& value)
{
    authoredDate_ = value;
    authoredDateIsSet_ = true;
}

bool SpecificCommitInfo::authoredDateIsSet() const
{
    return authoredDateIsSet_;
}

void SpecificCommitInfo::unsetauthoredDate()
{
    authoredDateIsSet_ = false;
}

SpecificCommitInfo_stats SpecificCommitInfo::getStats() const
{
    return stats_;
}

void SpecificCommitInfo::setStats(const SpecificCommitInfo_stats& value)
{
    stats_ = value;
    statsIsSet_ = true;
}

bool SpecificCommitInfo::statsIsSet() const
{
    return statsIsSet_;
}

void SpecificCommitInfo::unsetstats()
{
    statsIsSet_ = false;
}

SpecificCommitInfo_last_pipeline SpecificCommitInfo::getLastPipeline() const
{
    return lastPipeline_;
}

void SpecificCommitInfo::setLastPipeline(const SpecificCommitInfo_last_pipeline& value)
{
    lastPipeline_ = value;
    lastPipelineIsSet_ = true;
}

bool SpecificCommitInfo::lastPipelineIsSet() const
{
    return lastPipelineIsSet_;
}

void SpecificCommitInfo::unsetlastPipeline()
{
    lastPipelineIsSet_ = false;
}

}
}
}
}
}


