

#include "huaweicloud/projectman/v4/model/ShowProjectSummaryV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowProjectSummaryV4Request::ShowProjectSummaryV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowProjectSummaryV4Request::~ShowProjectSummaryV4Request() = default;

void ShowProjectSummaryV4Request::validate()
{
}

web::json::value ShowProjectSummaryV4Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowProjectSummaryV4Request::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowProjectSummaryV4Request::getProjectId() const
{
    return projectId_;
}

void ShowProjectSummaryV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectSummaryV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectSummaryV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


