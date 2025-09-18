

#include "huaweicloud/projectman/v4/model/ListProjectsV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectsV4Request::ListProjectsV4Request()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    projectType_ = "";
    projectTypeIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    archive_ = "";
    archiveIsSet_ = false;
    queryType_ = "";
    queryTypeIsSet_ = false;
}

ListProjectsV4Request::~ListProjectsV4Request() = default;

void ListProjectsV4Request::validate()
{
}

web::json::value ListProjectsV4Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(projectTypeIsSet_) {
        val[utility::conversions::to_string_t("project_type")] = ModelBase::toJson(projectType_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(archiveIsSet_) {
        val[utility::conversions::to_string_t("archive")] = ModelBase::toJson(archive_);
    }
    if(queryTypeIsSet_) {
        val[utility::conversions::to_string_t("query_type")] = ModelBase::toJson(queryType_);
    }

    return val;
}
bool ListProjectsV4Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("archive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("archive"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryType(refVal);
        }
    }
    return ok;
}


int32_t ListProjectsV4Request::getOffset() const
{
    return offset_;
}

void ListProjectsV4Request::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProjectsV4Request::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProjectsV4Request::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProjectsV4Request::getLimit() const
{
    return limit_;
}

void ListProjectsV4Request::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProjectsV4Request::limitIsSet() const
{
    return limitIsSet_;
}

void ListProjectsV4Request::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListProjectsV4Request::getSearch() const
{
    return search_;
}

void ListProjectsV4Request::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListProjectsV4Request::searchIsSet() const
{
    return searchIsSet_;
}

void ListProjectsV4Request::unsetsearch()
{
    searchIsSet_ = false;
}

std::string ListProjectsV4Request::getProjectType() const
{
    return projectType_;
}

void ListProjectsV4Request::setProjectType(const std::string& value)
{
    projectType_ = value;
    projectTypeIsSet_ = true;
}

bool ListProjectsV4Request::projectTypeIsSet() const
{
    return projectTypeIsSet_;
}

void ListProjectsV4Request::unsetprojectType()
{
    projectTypeIsSet_ = false;
}

std::string ListProjectsV4Request::getSort() const
{
    return sort_;
}

void ListProjectsV4Request::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListProjectsV4Request::sortIsSet() const
{
    return sortIsSet_;
}

void ListProjectsV4Request::unsetsort()
{
    sortIsSet_ = false;
}

std::string ListProjectsV4Request::getArchive() const
{
    return archive_;
}

void ListProjectsV4Request::setArchive(const std::string& value)
{
    archive_ = value;
    archiveIsSet_ = true;
}

bool ListProjectsV4Request::archiveIsSet() const
{
    return archiveIsSet_;
}

void ListProjectsV4Request::unsetarchive()
{
    archiveIsSet_ = false;
}

std::string ListProjectsV4Request::getQueryType() const
{
    return queryType_;
}

void ListProjectsV4Request::setQueryType(const std::string& value)
{
    queryType_ = value;
    queryTypeIsSet_ = true;
}

bool ListProjectsV4Request::queryTypeIsSet() const
{
    return queryTypeIsSet_;
}

void ListProjectsV4Request::unsetqueryType()
{
    queryTypeIsSet_ = false;
}

}
}
}
}
}


