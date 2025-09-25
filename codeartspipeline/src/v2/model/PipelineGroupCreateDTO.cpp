

#include "huaweicloud/codeartspipeline/v2/model/PipelineGroupCreateDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineGroupCreateDTO::PipelineGroupCreateDTO()
{
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
}

PipelineGroupCreateDTO::~PipelineGroupCreateDTO() = default;

void PipelineGroupCreateDTO::validate()
{
}

web::json::value PipelineGroupCreateDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }

    return val;
}
bool PipelineGroupCreateDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    return ok;
}


std::string PipelineGroupCreateDTO::getName() const
{
    return name_;
}

void PipelineGroupCreateDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PipelineGroupCreateDTO::nameIsSet() const
{
    return nameIsSet_;
}

void PipelineGroupCreateDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string PipelineGroupCreateDTO::getProjectId() const
{
    return projectId_;
}

void PipelineGroupCreateDTO::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool PipelineGroupCreateDTO::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void PipelineGroupCreateDTO::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string PipelineGroupCreateDTO::getParentId() const
{
    return parentId_;
}

void PipelineGroupCreateDTO::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool PipelineGroupCreateDTO::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void PipelineGroupCreateDTO::unsetparentId()
{
    parentIdIsSet_ = false;
}

}
}
}
}
}


