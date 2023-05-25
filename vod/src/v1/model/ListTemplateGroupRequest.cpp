

#include "huaweicloud/vod/v1/model/ListTemplateGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListTemplateGroupRequest::ListTemplateGroupRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

ListTemplateGroupRequest::~ListTemplateGroupRequest() = default;

void ListTemplateGroupRequest::validate()
{
}

web::json::value ListTemplateGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}

bool ListTemplateGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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


std::string ListTemplateGroupRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListTemplateGroupRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListTemplateGroupRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListTemplateGroupRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListTemplateGroupRequest::getGroupId() const
{
    return groupId_;
}

void ListTemplateGroupRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListTemplateGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListTemplateGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ListTemplateGroupRequest::getStatus() const
{
    return status_;
}

void ListTemplateGroupRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTemplateGroupRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListTemplateGroupRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListTemplateGroupRequest::getPage() const
{
    return page_;
}

void ListTemplateGroupRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListTemplateGroupRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListTemplateGroupRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListTemplateGroupRequest::getSize() const
{
    return size_;
}

void ListTemplateGroupRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListTemplateGroupRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListTemplateGroupRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


