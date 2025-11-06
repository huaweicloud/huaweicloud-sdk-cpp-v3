

#include "huaweicloud/codeartsrepo/v3/model/CommitV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




CommitV2::CommitV2()
{
    committedDate_ = "";
    committedDateIsSet_ = false;
    committerName_ = "";
    committerNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    shortId_ = "";
    shortIdIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
}

CommitV2::~CommitV2() = default;

void CommitV2::validate()
{
}

web::json::value CommitV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(committedDateIsSet_) {
        val[utility::conversions::to_string_t("committed_date")] = ModelBase::toJson(committedDate_);
    }
    if(committerNameIsSet_) {
        val[utility::conversions::to_string_t("committer_name")] = ModelBase::toJson(committerName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(shortIdIsSet_) {
        val[utility::conversions::to_string_t("short_id")] = ModelBase::toJson(shortId_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }

    return val;
}
bool CommitV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("committed_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("committed_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommittedDate(refVal);
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
    return ok;
}


std::string CommitV2::getCommittedDate() const
{
    return committedDate_;
}

void CommitV2::setCommittedDate(const std::string& value)
{
    committedDate_ = value;
    committedDateIsSet_ = true;
}

bool CommitV2::committedDateIsSet() const
{
    return committedDateIsSet_;
}

void CommitV2::unsetcommittedDate()
{
    committedDateIsSet_ = false;
}

std::string CommitV2::getCommitterName() const
{
    return committerName_;
}

void CommitV2::setCommitterName(const std::string& value)
{
    committerName_ = value;
    committerNameIsSet_ = true;
}

bool CommitV2::committerNameIsSet() const
{
    return committerNameIsSet_;
}

void CommitV2::unsetcommitterName()
{
    committerNameIsSet_ = false;
}

std::string CommitV2::getId() const
{
    return id_;
}

void CommitV2::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CommitV2::idIsSet() const
{
    return idIsSet_;
}

void CommitV2::unsetid()
{
    idIsSet_ = false;
}

std::string CommitV2::getMessage() const
{
    return message_;
}

void CommitV2::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CommitV2::messageIsSet() const
{
    return messageIsSet_;
}

void CommitV2::unsetmessage()
{
    messageIsSet_ = false;
}

std::string CommitV2::getShortId() const
{
    return shortId_;
}

void CommitV2::setShortId(const std::string& value)
{
    shortId_ = value;
    shortIdIsSet_ = true;
}

bool CommitV2::shortIdIsSet() const
{
    return shortIdIsSet_;
}

void CommitV2::unsetshortId()
{
    shortIdIsSet_ = false;
}

std::string CommitV2::getTitle() const
{
    return title_;
}

void CommitV2::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CommitV2::titleIsSet() const
{
    return titleIsSet_;
}

void CommitV2::unsettitle()
{
    titleIsSet_ = false;
}

}
}
}
}
}


