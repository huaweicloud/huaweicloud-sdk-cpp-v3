

#include "huaweicloud/codehub/v3/model/ListProductTwoTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListProductTwoTemplatesRequest::ListProductTwoTemplatesRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

ListProductTwoTemplatesRequest::~ListProductTwoTemplatesRequest() = default;

void ListProductTwoTemplatesRequest::validate()
{
}

web::json::value ListProductTwoTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool ListProductTwoTemplatesRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListProductTwoTemplatesRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ListProductTwoTemplatesRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ListProductTwoTemplatesRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ListProductTwoTemplatesRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

int32_t ListProductTwoTemplatesRequest::getPageNo() const
{
    return pageNo_;
}

void ListProductTwoTemplatesRequest::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListProductTwoTemplatesRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListProductTwoTemplatesRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t ListProductTwoTemplatesRequest::getPageSize() const
{
    return pageSize_;
}

void ListProductTwoTemplatesRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListProductTwoTemplatesRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListProductTwoTemplatesRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


