

#include "huaweicloud/codeartsbuild/v3/model/ListRelatedProjectInfo_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListRelatedProjectInfo_result::ListRelatedProjectInfo_result()
{
    total_ = 0.0;
    totalIsSet_ = false;
    projectInfoListIsSet_ = false;
}

ListRelatedProjectInfo_result::~ListRelatedProjectInfo_result() = default;

void ListRelatedProjectInfo_result::validate()
{
}

web::json::value ListRelatedProjectInfo_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(projectInfoListIsSet_) {
        val[utility::conversions::to_string_t("project_info_list")] = ModelBase::toJson(projectInfoList_);
    }

    return val;
}
bool ListRelatedProjectInfo_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_info_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_info_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ListRelatedProjectInfo_result_project_info_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectInfoList(refVal);
        }
    }
    return ok;
}


double ListRelatedProjectInfo_result::getTotal() const
{
    return total_;
}

void ListRelatedProjectInfo_result::setTotal(double value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListRelatedProjectInfo_result::totalIsSet() const
{
    return totalIsSet_;
}

void ListRelatedProjectInfo_result::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ListRelatedProjectInfo_result_project_info_list>& ListRelatedProjectInfo_result::getProjectInfoList()
{
    return projectInfoList_;
}

void ListRelatedProjectInfo_result::setProjectInfoList(const std::vector<ListRelatedProjectInfo_result_project_info_list>& value)
{
    projectInfoList_ = value;
    projectInfoListIsSet_ = true;
}

bool ListRelatedProjectInfo_result::projectInfoListIsSet() const
{
    return projectInfoListIsSet_;
}

void ListRelatedProjectInfo_result::unsetprojectInfoList()
{
    projectInfoListIsSet_ = false;
}

}
}
}
}
}


