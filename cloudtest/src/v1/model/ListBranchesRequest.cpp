

#include "huaweicloud/cloudtest/v1/model/ListBranchesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListBranchesRequest::ListBranchesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
    sortType_ = "";
    sortTypeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListBranchesRequest::~ListBranchesRequest() = default;

void ListBranchesRequest::validate()
{
}

web::json::value ListBranchesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }
    if(sortTypeIsSet_) {
        val[utility::conversions::to_string_t("sort_type")] = ModelBase::toJson(sortType_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListBranchesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortType(refVal);
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


std::string ListBranchesRequest::getProjectId() const
{
    return projectId_;
}

void ListBranchesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListBranchesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListBranchesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListBranchesRequest::getSortField() const
{
    return sortField_;
}

void ListBranchesRequest::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool ListBranchesRequest::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void ListBranchesRequest::unsetsortField()
{
    sortFieldIsSet_ = false;
}

std::string ListBranchesRequest::getSortType() const
{
    return sortType_;
}

void ListBranchesRequest::setSortType(const std::string& value)
{
    sortType_ = value;
    sortTypeIsSet_ = true;
}

bool ListBranchesRequest::sortTypeIsSet() const
{
    return sortTypeIsSet_;
}

void ListBranchesRequest::unsetsortType()
{
    sortTypeIsSet_ = false;
}

int32_t ListBranchesRequest::getOffset() const
{
    return offset_;
}

void ListBranchesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBranchesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBranchesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListBranchesRequest::getLimit() const
{
    return limit_;
}

void ListBranchesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBranchesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBranchesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


