

#include "huaweicloud/cloudtest/v1/model/ListTestBranchesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestBranchesRequest::ListTestBranchesRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
    sortType_ = "";
    sortTypeIsSet_ = false;
}

ListTestBranchesRequest::~ListTestBranchesRequest() = default;

void ListTestBranchesRequest::validate()
{
}

web::json::value ListTestBranchesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }
    if(sortTypeIsSet_) {
        val[utility::conversions::to_string_t("sort_type")] = ModelBase::toJson(sortType_);
    }

    return val;
}
bool ListTestBranchesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
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
    return ok;
}


std::string ListTestBranchesRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ListTestBranchesRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ListTestBranchesRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ListTestBranchesRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string ListTestBranchesRequest::getSortField() const
{
    return sortField_;
}

void ListTestBranchesRequest::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool ListTestBranchesRequest::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void ListTestBranchesRequest::unsetsortField()
{
    sortFieldIsSet_ = false;
}

std::string ListTestBranchesRequest::getSortType() const
{
    return sortType_;
}

void ListTestBranchesRequest::setSortType(const std::string& value)
{
    sortType_ = value;
    sortTypeIsSet_ = true;
}

bool ListTestBranchesRequest::sortTypeIsSet() const
{
    return sortTypeIsSet_;
}

void ListTestBranchesRequest::unsetsortType()
{
    sortTypeIsSet_ = false;
}

}
}
}
}
}


