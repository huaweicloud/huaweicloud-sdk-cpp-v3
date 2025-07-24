

#include "huaweicloud/cloudtest/v1/model/RemoveIssuesInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




RemoveIssuesInfo::RemoveIssuesInfo()
{
    workitemListIsSet_ = false;
    isDeleteCase_ = false;
    isDeleteCaseIsSet_ = false;
}

RemoveIssuesInfo::~RemoveIssuesInfo() = default;

void RemoveIssuesInfo::validate()
{
}

web::json::value RemoveIssuesInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workitemListIsSet_) {
        val[utility::conversions::to_string_t("workitem_list")] = ModelBase::toJson(workitemList_);
    }
    if(isDeleteCaseIsSet_) {
        val[utility::conversions::to_string_t("is_delete_case")] = ModelBase::toJson(isDeleteCase_);
    }

    return val;
}
bool RemoveIssuesInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workitem_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workitem_list"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkItemInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkitemList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_delete_case"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_delete_case"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDeleteCase(refVal);
        }
    }
    return ok;
}


std::vector<WorkItemInfo>& RemoveIssuesInfo::getWorkitemList()
{
    return workitemList_;
}

void RemoveIssuesInfo::setWorkitemList(const std::vector<WorkItemInfo>& value)
{
    workitemList_ = value;
    workitemListIsSet_ = true;
}

bool RemoveIssuesInfo::workitemListIsSet() const
{
    return workitemListIsSet_;
}

void RemoveIssuesInfo::unsetworkitemList()
{
    workitemListIsSet_ = false;
}

bool RemoveIssuesInfo::isIsDeleteCase() const
{
    return isDeleteCase_;
}

void RemoveIssuesInfo::setIsDeleteCase(bool value)
{
    isDeleteCase_ = value;
    isDeleteCaseIsSet_ = true;
}

bool RemoveIssuesInfo::isDeleteCaseIsSet() const
{
    return isDeleteCaseIsSet_;
}

void RemoveIssuesInfo::unsetisDeleteCase()
{
    isDeleteCaseIsSet_ = false;
}

}
}
}
}
}


