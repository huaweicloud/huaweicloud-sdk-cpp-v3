

#include "huaweicloud/mpc/v1/model/ListTemplateGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListTemplateGroupRequest::ListTemplateGroupRequest()
{
    groupIdIsSet_ = false;
    groupNameIsSet_ = false;
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

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
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
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
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

std::vector<std::string>& ListTemplateGroupRequest::getGroupId()
{
    return groupId_;
}

void ListTemplateGroupRequest::setGroupId(const std::vector<std::string>& value)
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

std::vector<std::string>& ListTemplateGroupRequest::getGroupName()
{
    return groupName_;
}

void ListTemplateGroupRequest::setGroupName(const std::vector<std::string>& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool ListTemplateGroupRequest::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void ListTemplateGroupRequest::unsetgroupName()
{
    groupNameIsSet_ = false;
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


