

#include "huaweicloud/codeartspipeline/v2/model/ListPipelineTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelineTagRequest::ListPipelineTagRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    projId_ = "";
    projIdIsSet_ = false;
}

ListPipelineTagRequest::~ListPipelineTagRequest() = default;

void ListPipelineTagRequest::validate()
{
}

web::json::value ListPipelineTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projIdIsSet_) {
        val[utility::conversions::to_string_t("proj_id")] = ModelBase::toJson(projId_);
    }

    return val;
}
bool ListPipelineTagRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("proj_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proj_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjId(refVal);
        }
    }
    return ok;
}


std::string ListPipelineTagRequest::getProjectId() const
{
    return projectId_;
}

void ListPipelineTagRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListPipelineTagRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListPipelineTagRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListPipelineTagRequest::getProjId() const
{
    return projId_;
}

void ListPipelineTagRequest::setProjId(const std::string& value)
{
    projId_ = value;
    projIdIsSet_ = true;
}

bool ListPipelineTagRequest::projIdIsSet() const
{
    return projIdIsSet_;
}

void ListPipelineTagRequest::unsetprojId()
{
    projIdIsSet_ = false;
}

}
}
}
}
}


