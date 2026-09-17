

#include "huaweicloud/cloudtest/v1/model/IssuesInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




IssuesInfo::IssuesInfo()
{
    workitemListIsSet_ = false;
}

IssuesInfo::~IssuesInfo() = default;

void IssuesInfo::validate()
{
}

web::json::value IssuesInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workitemListIsSet_) {
        val[utility::conversions::to_string_t("workitem_list")] = ModelBase::toJson(workitemList_);
    }

    return val;
}
bool IssuesInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::vector<WorkItemInfo>& IssuesInfo::getWorkitemList()
{
    return workitemList_;
}

void IssuesInfo::setWorkitemList(const std::vector<WorkItemInfo>& value)
{
    workitemList_ = value;
    workitemListIsSet_ = true;
}

bool IssuesInfo::workitemListIsSet() const
{
    return workitemListIsSet_;
}

void IssuesInfo::unsetworkitemList()
{
    workitemListIsSet_ = false;
}

}
}
}
}
}


