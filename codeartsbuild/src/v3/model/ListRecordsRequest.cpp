

#include "huaweicloud/codeartsbuild/v3/model/ListRecordsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListRecordsRequest::ListRecordsRequest()
{
    buildProjectId_ = "";
    buildProjectIdIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    triggersIsSet_ = false;
    branchesIsSet_ = false;
    tagsIsSet_ = false;
    fromDate_ = "";
    fromDateIsSet_ = false;
    toDate_ = "";
    toDateIsSet_ = false;
}

ListRecordsRequest::~ListRecordsRequest() = default;

void ListRecordsRequest::validate()
{
}

web::json::value ListRecordsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(buildProjectIdIsSet_) {
        val[utility::conversions::to_string_t("build_project_id")] = ModelBase::toJson(buildProjectId_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(triggersIsSet_) {
        val[utility::conversions::to_string_t("triggers")] = ModelBase::toJson(triggers_);
    }
    if(branchesIsSet_) {
        val[utility::conversions::to_string_t("branches")] = ModelBase::toJson(branches_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(fromDateIsSet_) {
        val[utility::conversions::to_string_t("from_date")] = ModelBase::toJson(fromDate_);
    }
    if(toDateIsSet_) {
        val[utility::conversions::to_string_t("to_date")] = ModelBase::toJson(toDate_);
    }

    return val;
}
bool ListRecordsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("build_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("triggers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("triggers"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branches"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranches(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("from_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFromDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("to_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToDate(refVal);
        }
    }
    return ok;
}


std::string ListRecordsRequest::getBuildProjectId() const
{
    return buildProjectId_;
}

void ListRecordsRequest::setBuildProjectId(const std::string& value)
{
    buildProjectId_ = value;
    buildProjectIdIsSet_ = true;
}

bool ListRecordsRequest::buildProjectIdIsSet() const
{
    return buildProjectIdIsSet_;
}

void ListRecordsRequest::unsetbuildProjectId()
{
    buildProjectIdIsSet_ = false;
}

int32_t ListRecordsRequest::getPage() const
{
    return page_;
}

void ListRecordsRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListRecordsRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListRecordsRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListRecordsRequest::getLimit() const
{
    return limit_;
}

void ListRecordsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRecordsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRecordsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<std::string>& ListRecordsRequest::getTriggers()
{
    return triggers_;
}

void ListRecordsRequest::setTriggers(const std::vector<std::string>& value)
{
    triggers_ = value;
    triggersIsSet_ = true;
}

bool ListRecordsRequest::triggersIsSet() const
{
    return triggersIsSet_;
}

void ListRecordsRequest::unsettriggers()
{
    triggersIsSet_ = false;
}

std::vector<std::string>& ListRecordsRequest::getBranches()
{
    return branches_;
}

void ListRecordsRequest::setBranches(const std::vector<std::string>& value)
{
    branches_ = value;
    branchesIsSet_ = true;
}

bool ListRecordsRequest::branchesIsSet() const
{
    return branchesIsSet_;
}

void ListRecordsRequest::unsetbranches()
{
    branchesIsSet_ = false;
}

std::vector<std::string>& ListRecordsRequest::getTags()
{
    return tags_;
}

void ListRecordsRequest::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListRecordsRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListRecordsRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string ListRecordsRequest::getFromDate() const
{
    return fromDate_;
}

void ListRecordsRequest::setFromDate(const std::string& value)
{
    fromDate_ = value;
    fromDateIsSet_ = true;
}

bool ListRecordsRequest::fromDateIsSet() const
{
    return fromDateIsSet_;
}

void ListRecordsRequest::unsetfromDate()
{
    fromDateIsSet_ = false;
}

std::string ListRecordsRequest::getToDate() const
{
    return toDate_;
}

void ListRecordsRequest::setToDate(const std::string& value)
{
    toDate_ = value;
    toDateIsSet_ = true;
}

bool ListRecordsRequest::toDateIsSet() const
{
    return toDateIsSet_;
}

void ListRecordsRequest::unsettoDate()
{
    toDateIsSet_ = false;
}

}
}
}
}
}


