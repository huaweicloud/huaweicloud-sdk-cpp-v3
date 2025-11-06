

#include "huaweicloud/codeartsrepo/v4/model/ListCommitsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListCommitsResponse::ListCommitsResponse()
{
    commitsIsSet_ = false;
    dateTitleIsSet_ = false;
}

ListCommitsResponse::~ListCommitsResponse() = default;

void ListCommitsResponse::validate()
{
}

web::json::value ListCommitsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commitsIsSet_) {
        val[utility::conversions::to_string_t("commits")] = ModelBase::toJson(commits_);
    }
    if(dateTitleIsSet_) {
        val[utility::conversions::to_string_t("date_title")] = ModelBase::toJson(dateTitle_);
    }

    return val;
}
bool ListCommitsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("commits"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commits"));
        if(!fieldValue.is_null())
        {
            std::vector<CommitDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommits(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_title"));
        if(!fieldValue.is_null())
        {
            std::vector<DateTitleDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateTitle(refVal);
        }
    }
    return ok;
}


std::vector<CommitDto>& ListCommitsResponse::getCommits()
{
    return commits_;
}

void ListCommitsResponse::setCommits(const std::vector<CommitDto>& value)
{
    commits_ = value;
    commitsIsSet_ = true;
}

bool ListCommitsResponse::commitsIsSet() const
{
    return commitsIsSet_;
}

void ListCommitsResponse::unsetcommits()
{
    commitsIsSet_ = false;
}

std::vector<DateTitleDto>& ListCommitsResponse::getDateTitle()
{
    return dateTitle_;
}

void ListCommitsResponse::setDateTitle(const std::vector<DateTitleDto>& value)
{
    dateTitle_ = value;
    dateTitleIsSet_ = true;
}

bool ListCommitsResponse::dateTitleIsSet() const
{
    return dateTitleIsSet_;
}

void ListCommitsResponse::unsetdateTitle()
{
    dateTitleIsSet_ = false;
}

}
}
}
}
}


