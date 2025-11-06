

#include "huaweicloud/codeartsrepo/v3/model/GetProductTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




GetProductTemplatesRequest::GetProductTemplatesRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

GetProductTemplatesRequest::~GetProductTemplatesRequest() = default;

void GetProductTemplatesRequest::validate()
{
}

web::json::value GetProductTemplatesRequest::toJson() const
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
bool GetProductTemplatesRequest::fromJson(const web::json::value& val)
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


std::string GetProductTemplatesRequest::getProjectUuid() const
{
    return projectUuid_;
}

void GetProductTemplatesRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool GetProductTemplatesRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void GetProductTemplatesRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

int32_t GetProductTemplatesRequest::getPageNo() const
{
    return pageNo_;
}

void GetProductTemplatesRequest::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool GetProductTemplatesRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void GetProductTemplatesRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t GetProductTemplatesRequest::getPageSize() const
{
    return pageSize_;
}

void GetProductTemplatesRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool GetProductTemplatesRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void GetProductTemplatesRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


