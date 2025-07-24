

#include "huaweicloud/cloudtest/v1/model/ShowTestCasesChangeStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestCasesChangeStatisticsRequest::ShowTestCasesChangeStatisticsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    versionId_ = "";
    versionIdIsSet_ = false;
}

ShowTestCasesChangeStatisticsRequest::~ShowTestCasesChangeStatisticsRequest() = default;

void ShowTestCasesChangeStatisticsRequest::validate()
{
}

web::json::value ShowTestCasesChangeStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }

    return val;
}
bool ShowTestCasesChangeStatisticsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionId(refVal);
        }
    }
    return ok;
}


std::string ShowTestCasesChangeStatisticsRequest::getProjectId() const
{
    return projectId_;
}

void ShowTestCasesChangeStatisticsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTestCasesChangeStatisticsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTestCasesChangeStatisticsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowTestCasesChangeStatisticsRequest::getVersionId() const
{
    return versionId_;
}

void ShowTestCasesChangeStatisticsRequest::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool ShowTestCasesChangeStatisticsRequest::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void ShowTestCasesChangeStatisticsRequest::unsetversionId()
{
    versionIdIsSet_ = false;
}

}
}
}
}
}


