

#include "huaweicloud/codeartsdeploy/v2/model/ListHostGroupBaseInfosRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListHostGroupBaseInfosRequest::ListHostGroupBaseInfosRequest()
{
    applicationId_ = "";
    applicationIdIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    os_ = "";
    osIsSet_ = false;
    pageIndex_ = 0;
    pageIndexIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ListHostGroupBaseInfosRequest::~ListHostGroupBaseInfosRequest() = default;

void ListHostGroupBaseInfosRequest::validate()
{
}

web::json::value ListHostGroupBaseInfosRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(pageIndexIsSet_) {
        val[utility::conversions::to_string_t("page_index")] = ModelBase::toJson(pageIndex_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ListHostGroupBaseInfosRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOs(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ListHostGroupBaseInfosRequest::getApplicationId() const
{
    return applicationId_;
}

void ListHostGroupBaseInfosRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool ListHostGroupBaseInfosRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void ListHostGroupBaseInfosRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string ListHostGroupBaseInfosRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ListHostGroupBaseInfosRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ListHostGroupBaseInfosRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ListHostGroupBaseInfosRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string ListHostGroupBaseInfosRequest::getOs() const
{
    return os_;
}

void ListHostGroupBaseInfosRequest::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool ListHostGroupBaseInfosRequest::osIsSet() const
{
    return osIsSet_;
}

void ListHostGroupBaseInfosRequest::unsetos()
{
    osIsSet_ = false;
}

int32_t ListHostGroupBaseInfosRequest::getPageIndex() const
{
    return pageIndex_;
}

void ListHostGroupBaseInfosRequest::setPageIndex(int32_t value)
{
    pageIndex_ = value;
    pageIndexIsSet_ = true;
}

bool ListHostGroupBaseInfosRequest::pageIndexIsSet() const
{
    return pageIndexIsSet_;
}

void ListHostGroupBaseInfosRequest::unsetpageIndex()
{
    pageIndexIsSet_ = false;
}

int32_t ListHostGroupBaseInfosRequest::getPageSize() const
{
    return pageSize_;
}

void ListHostGroupBaseInfosRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListHostGroupBaseInfosRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListHostGroupBaseInfosRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListHostGroupBaseInfosRequest::getName() const
{
    return name_;
}

void ListHostGroupBaseInfosRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListHostGroupBaseInfosRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListHostGroupBaseInfosRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


