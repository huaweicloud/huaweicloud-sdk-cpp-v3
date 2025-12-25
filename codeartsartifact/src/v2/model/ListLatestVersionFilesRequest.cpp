

#include "huaweicloud/codeartsartifact/v2/model/ListLatestVersionFilesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListLatestVersionFilesRequest::ListLatestVersionFilesRequest()
{
    name_ = "";
    nameIsSet_ = false;
    sortBy_ = "";
    sortByIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListLatestVersionFilesRequest::~ListLatestVersionFilesRequest() = default;

void ListLatestVersionFilesRequest::validate()
{
}

web::json::value ListLatestVersionFilesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sortByIsSet_) {
        val[utility::conversions::to_string_t("sort_by")] = ModelBase::toJson(sortBy_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListLatestVersionFilesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
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


std::string ListLatestVersionFilesRequest::getName() const
{
    return name_;
}

void ListLatestVersionFilesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListLatestVersionFilesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListLatestVersionFilesRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListLatestVersionFilesRequest::getSortBy() const
{
    return sortBy_;
}

void ListLatestVersionFilesRequest::setSortBy(const std::string& value)
{
    sortBy_ = value;
    sortByIsSet_ = true;
}

bool ListLatestVersionFilesRequest::sortByIsSet() const
{
    return sortByIsSet_;
}

void ListLatestVersionFilesRequest::unsetsortBy()
{
    sortByIsSet_ = false;
}

std::string ListLatestVersionFilesRequest::getSortDir() const
{
    return sortDir_;
}

void ListLatestVersionFilesRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListLatestVersionFilesRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListLatestVersionFilesRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

int32_t ListLatestVersionFilesRequest::getOffset() const
{
    return offset_;
}

void ListLatestVersionFilesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListLatestVersionFilesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListLatestVersionFilesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListLatestVersionFilesRequest::getLimit() const
{
    return limit_;
}

void ListLatestVersionFilesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLatestVersionFilesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListLatestVersionFilesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


