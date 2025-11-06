

#include "huaweicloud/codeartsrepo/v3/model/ListCommitsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ListCommitsRequest::ListCommitsRequest()
{
    repoId_ = 0;
    repoIdIsSet_ = false;
    refName_ = "";
    refNameIsSet_ = false;
    since_ = "";
    sinceIsSet_ = false;
    until_ = "";
    untilIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    all_ = false;
    allIsSet_ = false;
    withStats_ = false;
    withStatsIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    perPage_ = 0;
    perPageIsSet_ = false;
}

ListCommitsRequest::~ListCommitsRequest() = default;

void ListCommitsRequest::validate()
{
}

web::json::value ListCommitsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }
    if(refNameIsSet_) {
        val[utility::conversions::to_string_t("ref_name")] = ModelBase::toJson(refName_);
    }
    if(sinceIsSet_) {
        val[utility::conversions::to_string_t("since")] = ModelBase::toJson(since_);
    }
    if(untilIsSet_) {
        val[utility::conversions::to_string_t("until")] = ModelBase::toJson(until_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(allIsSet_) {
        val[utility::conversions::to_string_t("all")] = ModelBase::toJson(all_);
    }
    if(withStatsIsSet_) {
        val[utility::conversions::to_string_t("with_stats")] = ModelBase::toJson(withStats_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(perPageIsSet_) {
        val[utility::conversions::to_string_t("per_page")] = ModelBase::toJson(perPage_);
    }

    return val;
}
bool ListCommitsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("since"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("since"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSince(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("until"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("until"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUntil(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("all"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAll(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("with_stats"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("with_stats"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWithStats(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("per_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("per_page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPerPage(refVal);
        }
    }
    return ok;
}


int32_t ListCommitsRequest::getRepoId() const
{
    return repoId_;
}

void ListCommitsRequest::setRepoId(int32_t value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool ListCommitsRequest::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void ListCommitsRequest::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string ListCommitsRequest::getRefName() const
{
    return refName_;
}

void ListCommitsRequest::setRefName(const std::string& value)
{
    refName_ = value;
    refNameIsSet_ = true;
}

bool ListCommitsRequest::refNameIsSet() const
{
    return refNameIsSet_;
}

void ListCommitsRequest::unsetrefName()
{
    refNameIsSet_ = false;
}

std::string ListCommitsRequest::getSince() const
{
    return since_;
}

void ListCommitsRequest::setSince(const std::string& value)
{
    since_ = value;
    sinceIsSet_ = true;
}

bool ListCommitsRequest::sinceIsSet() const
{
    return sinceIsSet_;
}

void ListCommitsRequest::unsetsince()
{
    sinceIsSet_ = false;
}

std::string ListCommitsRequest::getUntil() const
{
    return until_;
}

void ListCommitsRequest::setUntil(const std::string& value)
{
    until_ = value;
    untilIsSet_ = true;
}

bool ListCommitsRequest::untilIsSet() const
{
    return untilIsSet_;
}

void ListCommitsRequest::unsetuntil()
{
    untilIsSet_ = false;
}

std::string ListCommitsRequest::getPath() const
{
    return path_;
}

void ListCommitsRequest::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool ListCommitsRequest::pathIsSet() const
{
    return pathIsSet_;
}

void ListCommitsRequest::unsetpath()
{
    pathIsSet_ = false;
}

bool ListCommitsRequest::isAll() const
{
    return all_;
}

void ListCommitsRequest::setAll(bool value)
{
    all_ = value;
    allIsSet_ = true;
}

bool ListCommitsRequest::allIsSet() const
{
    return allIsSet_;
}

void ListCommitsRequest::unsetall()
{
    allIsSet_ = false;
}

bool ListCommitsRequest::isWithStats() const
{
    return withStats_;
}

void ListCommitsRequest::setWithStats(bool value)
{
    withStats_ = value;
    withStatsIsSet_ = true;
}

bool ListCommitsRequest::withStatsIsSet() const
{
    return withStatsIsSet_;
}

void ListCommitsRequest::unsetwithStats()
{
    withStatsIsSet_ = false;
}

int32_t ListCommitsRequest::getPage() const
{
    return page_;
}

void ListCommitsRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListCommitsRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListCommitsRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListCommitsRequest::getPerPage() const
{
    return perPage_;
}

void ListCommitsRequest::setPerPage(int32_t value)
{
    perPage_ = value;
    perPageIsSet_ = true;
}

bool ListCommitsRequest::perPageIsSet() const
{
    return perPageIsSet_;
}

void ListCommitsRequest::unsetperPage()
{
    perPageIsSet_ = false;
}

}
}
}
}
}


