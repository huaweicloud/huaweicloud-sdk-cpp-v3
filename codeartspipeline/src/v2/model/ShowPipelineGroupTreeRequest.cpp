

#include "huaweicloud/codeartspipeline/v2/model/ShowPipelineGroupTreeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPipelineGroupTreeRequest::ShowPipelineGroupTreeRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowPipelineGroupTreeRequest::~ShowPipelineGroupTreeRequest() = default;

void ShowPipelineGroupTreeRequest::validate()
{
}

web::json::value ShowPipelineGroupTreeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowPipelineGroupTreeRequest::fromJson(const web::json::value& val)
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


std::string ShowPipelineGroupTreeRequest::getProjectId() const
{
    return projectId_;
}

void ShowPipelineGroupTreeRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowPipelineGroupTreeRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowPipelineGroupTreeRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


