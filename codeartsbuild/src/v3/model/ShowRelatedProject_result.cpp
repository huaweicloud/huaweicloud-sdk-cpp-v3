

#include "huaweicloud/codeartsbuild/v3/model/ShowRelatedProject_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowRelatedProject_result::ShowRelatedProject_result()
{
    total_ = 0.0;
    totalIsSet_ = false;
    projectInfoListIsSet_ = false;
}

ShowRelatedProject_result::~ShowRelatedProject_result() = default;

void ShowRelatedProject_result::validate()
{
}

web::json::value ShowRelatedProject_result::toJson() const
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
bool ShowRelatedProject_result::fromJson(const web::json::value& val)
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
            std::vector<ShowRelatedProject_result_project_info_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectInfoList(refVal);
        }
    }
    return ok;
}


double ShowRelatedProject_result::getTotal() const
{
    return total_;
}

void ShowRelatedProject_result::setTotal(double value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowRelatedProject_result::totalIsSet() const
{
    return totalIsSet_;
}

void ShowRelatedProject_result::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ShowRelatedProject_result_project_info_list>& ShowRelatedProject_result::getProjectInfoList()
{
    return projectInfoList_;
}

void ShowRelatedProject_result::setProjectInfoList(const std::vector<ShowRelatedProject_result_project_info_list>& value)
{
    projectInfoList_ = value;
    projectInfoListIsSet_ = true;
}

bool ShowRelatedProject_result::projectInfoListIsSet() const
{
    return projectInfoListIsSet_;
}

void ShowRelatedProject_result::unsetprojectInfoList()
{
    projectInfoListIsSet_ = false;
}

}
}
}
}
}


