

#include "huaweicloud/cloudtest/v1/model/WorkItemInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




WorkItemInfo::WorkItemInfo()
{
    workItemId_ = "";
    workItemIdIsSet_ = false;
    hasChild_ = false;
    hasChildIsSet_ = false;
    isOpen_ = false;
    isOpenIsSet_ = false;
    childListIsSet_ = false;
}

WorkItemInfo::~WorkItemInfo() = default;

void WorkItemInfo::validate()
{
}

web::json::value WorkItemInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workItemIdIsSet_) {
        val[utility::conversions::to_string_t("work_item_id")] = ModelBase::toJson(workItemId_);
    }
    if(hasChildIsSet_) {
        val[utility::conversions::to_string_t("has_child")] = ModelBase::toJson(hasChild_);
    }
    if(isOpenIsSet_) {
        val[utility::conversions::to_string_t("is_open")] = ModelBase::toJson(isOpen_);
    }
    if(childListIsSet_) {
        val[utility::conversions::to_string_t("child_list")] = ModelBase::toJson(*childList_);
    }

    return val;
}
bool WorkItemInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("work_item_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_item_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkItemId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("has_child"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_child"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasChild(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_open"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_open"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOpen(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("child_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("child_list"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkItemInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildList(refVal);
        }
    }
    return ok;
}


std::string WorkItemInfo::getWorkItemId() const
{
    return workItemId_;
}

void WorkItemInfo::setWorkItemId(const std::string& value)
{
    workItemId_ = value;
    workItemIdIsSet_ = true;
}

bool WorkItemInfo::workItemIdIsSet() const
{
    return workItemIdIsSet_;
}

void WorkItemInfo::unsetworkItemId()
{
    workItemIdIsSet_ = false;
}

bool WorkItemInfo::isHasChild() const
{
    return hasChild_;
}

void WorkItemInfo::setHasChild(bool value)
{
    hasChild_ = value;
    hasChildIsSet_ = true;
}

bool WorkItemInfo::hasChildIsSet() const
{
    return hasChildIsSet_;
}

void WorkItemInfo::unsethasChild()
{
    hasChildIsSet_ = false;
}

bool WorkItemInfo::isIsOpen() const
{
    return isOpen_;
}

void WorkItemInfo::setIsOpen(bool value)
{
    isOpen_ = value;
    isOpenIsSet_ = true;
}

bool WorkItemInfo::isOpenIsSet() const
{
    return isOpenIsSet_;
}

void WorkItemInfo::unsetisOpen()
{
    isOpenIsSet_ = false;
}

std::vector<WorkItemInfo>& WorkItemInfo::getChildList()
{
    return *childList_;
}

void WorkItemInfo::setChildList(const std::vector<WorkItemInfo>& value)
{
    *childList_ = value;
    childListIsSet_ = true;
}

bool WorkItemInfo::childListIsSet() const
{
    return childListIsSet_;
}

void WorkItemInfo::unsetchildList()
{
    childListIsSet_ = false;
}

}
}
}
}
}


