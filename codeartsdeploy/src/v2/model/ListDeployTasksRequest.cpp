

#include "huaweicloud/codeartsdeploy/v2/model/ListDeployTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListDeployTasksRequest::ListDeployTasksRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

ListDeployTasksRequest::~ListDeployTasksRequest() = default;

void ListDeployTasksRequest::validate()
{
}

web::json::value ListDeployTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool ListDeployTasksRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::string ListDeployTasksRequest::getProjectId() const
{
    return projectId_;
}

void ListDeployTasksRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListDeployTasksRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListDeployTasksRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListDeployTasksRequest::getPage() const
{
    return page_;
}

void ListDeployTasksRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListDeployTasksRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListDeployTasksRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListDeployTasksRequest::getSize() const
{
    return size_;
}

void ListDeployTasksRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListDeployTasksRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListDeployTasksRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


