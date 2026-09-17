

#include "huaweicloud/codeartspipeline/v2/model/DeletePipelineTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeletePipelineTagRequest::DeletePipelineTagRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    tagId_ = "";
    tagIdIsSet_ = false;
}

DeletePipelineTagRequest::~DeletePipelineTagRequest() = default;

void DeletePipelineTagRequest::validate()
{
}

web::json::value DeletePipelineTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(tagIdIsSet_) {
        val[utility::conversions::to_string_t("tagId")] = ModelBase::toJson(tagId_);
    }

    return val;
}
bool DeletePipelineTagRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tagId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tagId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagId(refVal);
        }
    }
    return ok;
}


std::string DeletePipelineTagRequest::getProjectId() const
{
    return projectId_;
}

void DeletePipelineTagRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeletePipelineTagRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeletePipelineTagRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeletePipelineTagRequest::getTagId() const
{
    return tagId_;
}

void DeletePipelineTagRequest::setTagId(const std::string& value)
{
    tagId_ = value;
    tagIdIsSet_ = true;
}

bool DeletePipelineTagRequest::tagIdIsSet() const
{
    return tagIdIsSet_;
}

void DeletePipelineTagRequest::unsettagId()
{
    tagIdIsSet_ = false;
}

}
}
}
}
}


