

#include "huaweicloud/codeartsartifact/v2/model/ListFileBuildArchivesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListFileBuildArchivesRequest::ListFileBuildArchivesRequest()
{
    parentId_ = "";
    parentIdIsSet_ = false;
    buildId_ = "";
    buildIdIsSet_ = false;
    buildNo_ = "";
    buildNoIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    repoBranch_ = "";
    repoBranchIsSet_ = false;
}

ListFileBuildArchivesRequest::~ListFileBuildArchivesRequest() = default;

void ListFileBuildArchivesRequest::validate()
{
}

web::json::value ListFileBuildArchivesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(buildIdIsSet_) {
        val[utility::conversions::to_string_t("build_id")] = ModelBase::toJson(buildId_);
    }
    if(buildNoIsSet_) {
        val[utility::conversions::to_string_t("build_no")] = ModelBase::toJson(buildNo_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(repoBranchIsSet_) {
        val[utility::conversions::to_string_t("repo_branch")] = ModelBase::toJson(repoBranch_);
    }

    return val;
}
bool ListFileBuildArchivesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_no"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("repo_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoBranch(refVal);
        }
    }
    return ok;
}


std::string ListFileBuildArchivesRequest::getParentId() const
{
    return parentId_;
}

void ListFileBuildArchivesRequest::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool ListFileBuildArchivesRequest::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void ListFileBuildArchivesRequest::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string ListFileBuildArchivesRequest::getBuildId() const
{
    return buildId_;
}

void ListFileBuildArchivesRequest::setBuildId(const std::string& value)
{
    buildId_ = value;
    buildIdIsSet_ = true;
}

bool ListFileBuildArchivesRequest::buildIdIsSet() const
{
    return buildIdIsSet_;
}

void ListFileBuildArchivesRequest::unsetbuildId()
{
    buildIdIsSet_ = false;
}

std::string ListFileBuildArchivesRequest::getBuildNo() const
{
    return buildNo_;
}

void ListFileBuildArchivesRequest::setBuildNo(const std::string& value)
{
    buildNo_ = value;
    buildNoIsSet_ = true;
}

bool ListFileBuildArchivesRequest::buildNoIsSet() const
{
    return buildNoIsSet_;
}

void ListFileBuildArchivesRequest::unsetbuildNo()
{
    buildNoIsSet_ = false;
}

int32_t ListFileBuildArchivesRequest::getPageNo() const
{
    return pageNo_;
}

void ListFileBuildArchivesRequest::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListFileBuildArchivesRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListFileBuildArchivesRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t ListFileBuildArchivesRequest::getPageSize() const
{
    return pageSize_;
}

void ListFileBuildArchivesRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListFileBuildArchivesRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListFileBuildArchivesRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListFileBuildArchivesRequest::getRepoBranch() const
{
    return repoBranch_;
}

void ListFileBuildArchivesRequest::setRepoBranch(const std::string& value)
{
    repoBranch_ = value;
    repoBranchIsSet_ = true;
}

bool ListFileBuildArchivesRequest::repoBranchIsSet() const
{
    return repoBranchIsSet_;
}

void ListFileBuildArchivesRequest::unsetrepoBranch()
{
    repoBranchIsSet_ = false;
}

}
}
}
}
}


