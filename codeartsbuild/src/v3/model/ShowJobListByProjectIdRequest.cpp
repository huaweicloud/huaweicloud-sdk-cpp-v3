

#include "huaweicloud/codeartsbuild/v3/model/ShowJobListByProjectIdRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobListByProjectIdRequest::ShowJobListByProjectIdRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    pageIndex_ = 0;
    pageIndexIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

ShowJobListByProjectIdRequest::~ShowJobListByProjectIdRequest() = default;

void ShowJobListByProjectIdRequest::validate()
{
}

web::json::value ShowJobListByProjectIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(pageIndexIsSet_) {
        val[utility::conversions::to_string_t("page_index")] = ModelBase::toJson(pageIndex_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}

bool ShowJobListByProjectIdRequest::fromJson(const web::json::value& val)
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
    return ok;
}

std::string ShowJobListByProjectIdRequest::getProjectId() const
{
    return projectId_;
}

void ShowJobListByProjectIdRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowJobListByProjectIdRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowJobListByProjectIdRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ShowJobListByProjectIdRequest::getPageIndex() const
{
    return pageIndex_;
}

void ShowJobListByProjectIdRequest::setPageIndex(int32_t value)
{
    pageIndex_ = value;
    pageIndexIsSet_ = true;
}

bool ShowJobListByProjectIdRequest::pageIndexIsSet() const
{
    return pageIndexIsSet_;
}

void ShowJobListByProjectIdRequest::unsetpageIndex()
{
    pageIndexIsSet_ = false;
}

int32_t ShowJobListByProjectIdRequest::getPageSize() const
{
    return pageSize_;
}

void ShowJobListByProjectIdRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowJobListByProjectIdRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowJobListByProjectIdRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


