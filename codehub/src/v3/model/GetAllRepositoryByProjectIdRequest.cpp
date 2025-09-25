

#include "huaweicloud/codehub/v3/model/GetAllRepositoryByProjectIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




GetAllRepositoryByProjectIdRequest::GetAllRepositoryByProjectIdRequest()
{
    pageIndex_ = 0;
    pageIndexIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
}

GetAllRepositoryByProjectIdRequest::~GetAllRepositoryByProjectIdRequest() = default;

void GetAllRepositoryByProjectIdRequest::validate()
{
}

web::json::value GetAllRepositoryByProjectIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageIndexIsSet_) {
        val[utility::conversions::to_string_t("page_index")] = ModelBase::toJson(pageIndex_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }

    return val;
}
bool GetAllRepositoryByProjectIdRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
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
    return ok;
}


int32_t GetAllRepositoryByProjectIdRequest::getPageIndex() const
{
    return pageIndex_;
}

void GetAllRepositoryByProjectIdRequest::setPageIndex(int32_t value)
{
    pageIndex_ = value;
    pageIndexIsSet_ = true;
}

bool GetAllRepositoryByProjectIdRequest::pageIndexIsSet() const
{
    return pageIndexIsSet_;
}

void GetAllRepositoryByProjectIdRequest::unsetpageIndex()
{
    pageIndexIsSet_ = false;
}

int32_t GetAllRepositoryByProjectIdRequest::getPageSize() const
{
    return pageSize_;
}

void GetAllRepositoryByProjectIdRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool GetAllRepositoryByProjectIdRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void GetAllRepositoryByProjectIdRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string GetAllRepositoryByProjectIdRequest::getProjectUuid() const
{
    return projectUuid_;
}

void GetAllRepositoryByProjectIdRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool GetAllRepositoryByProjectIdRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void GetAllRepositoryByProjectIdRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string GetAllRepositoryByProjectIdRequest::getSearch() const
{
    return search_;
}

void GetAllRepositoryByProjectIdRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool GetAllRepositoryByProjectIdRequest::searchIsSet() const
{
    return searchIsSet_;
}

void GetAllRepositoryByProjectIdRequest::unsetsearch()
{
    searchIsSet_ = false;
}

}
}
}
}
}


