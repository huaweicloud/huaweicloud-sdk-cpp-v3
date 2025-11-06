

#include "huaweicloud/codeartsrepo/v4/model/ShowDiffCommitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowDiffCommitRequest::ShowDiffCommitRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
    ignoreWhitespaceChange_ = false;
    ignoreWhitespaceChangeIsSet_ = false;
    notStatistic_ = false;
    notStatisticIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowDiffCommitRequest::~ShowDiffCommitRequest() = default;

void ShowDiffCommitRequest::validate()
{
}

web::json::value ShowDiffCommitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(shaIsSet_) {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(sha_);
    }
    if(ignoreWhitespaceChangeIsSet_) {
        val[utility::conversions::to_string_t("ignore_whitespace_change")] = ModelBase::toJson(ignoreWhitespaceChange_);
    }
    if(notStatisticIsSet_) {
        val[utility::conversions::to_string_t("not_statistic")] = ModelBase::toJson(notStatistic_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowDiffCommitRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ignore_whitespace_change"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ignore_whitespace_change"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIgnoreWhitespaceChange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_statistic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_statistic"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotStatistic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


int32_t ShowDiffCommitRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowDiffCommitRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowDiffCommitRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowDiffCommitRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowDiffCommitRequest::getSha() const
{
    return sha_;
}

void ShowDiffCommitRequest::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool ShowDiffCommitRequest::shaIsSet() const
{
    return shaIsSet_;
}

void ShowDiffCommitRequest::unsetsha()
{
    shaIsSet_ = false;
}

bool ShowDiffCommitRequest::isIgnoreWhitespaceChange() const
{
    return ignoreWhitespaceChange_;
}

void ShowDiffCommitRequest::setIgnoreWhitespaceChange(bool value)
{
    ignoreWhitespaceChange_ = value;
    ignoreWhitespaceChangeIsSet_ = true;
}

bool ShowDiffCommitRequest::ignoreWhitespaceChangeIsSet() const
{
    return ignoreWhitespaceChangeIsSet_;
}

void ShowDiffCommitRequest::unsetignoreWhitespaceChange()
{
    ignoreWhitespaceChangeIsSet_ = false;
}

bool ShowDiffCommitRequest::isNotStatistic() const
{
    return notStatistic_;
}

void ShowDiffCommitRequest::setNotStatistic(bool value)
{
    notStatistic_ = value;
    notStatisticIsSet_ = true;
}

bool ShowDiffCommitRequest::notStatisticIsSet() const
{
    return notStatisticIsSet_;
}

void ShowDiffCommitRequest::unsetnotStatistic()
{
    notStatisticIsSet_ = false;
}

int32_t ShowDiffCommitRequest::getOffset() const
{
    return offset_;
}

void ShowDiffCommitRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowDiffCommitRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowDiffCommitRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowDiffCommitRequest::getLimit() const
{
    return limit_;
}

void ShowDiffCommitRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowDiffCommitRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowDiffCommitRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


