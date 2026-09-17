

#include "huaweicloud/codeartspipeline/v2/model/PipelineTagResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineTagResp::PipelineTagResp()
{
    tagId_ = "";
    tagIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    color_ = "";
    colorIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
}

PipelineTagResp::~PipelineTagResp() = default;

void PipelineTagResp::validate()
{
}

web::json::value PipelineTagResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagIdIsSet_) {
        val[utility::conversions::to_string_t("tag_id")] = ModelBase::toJson(tagId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(colorIsSet_) {
        val[utility::conversions::to_string_t("color")] = ModelBase::toJson(color_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }

    return val;
}
bool PipelineTagResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tag_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("color"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("color"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    return ok;
}


std::string PipelineTagResp::getTagId() const
{
    return tagId_;
}

void PipelineTagResp::setTagId(const std::string& value)
{
    tagId_ = value;
    tagIdIsSet_ = true;
}

bool PipelineTagResp::tagIdIsSet() const
{
    return tagIdIsSet_;
}

void PipelineTagResp::unsettagId()
{
    tagIdIsSet_ = false;
}

std::string PipelineTagResp::getName() const
{
    return name_;
}

void PipelineTagResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PipelineTagResp::nameIsSet() const
{
    return nameIsSet_;
}

void PipelineTagResp::unsetname()
{
    nameIsSet_ = false;
}

std::string PipelineTagResp::getColor() const
{
    return color_;
}

void PipelineTagResp::setColor(const std::string& value)
{
    color_ = value;
    colorIsSet_ = true;
}

bool PipelineTagResp::colorIsSet() const
{
    return colorIsSet_;
}

void PipelineTagResp::unsetcolor()
{
    colorIsSet_ = false;
}

std::string PipelineTagResp::getProjectId() const
{
    return projectId_;
}

void PipelineTagResp::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool PipelineTagResp::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void PipelineTagResp::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string PipelineTagResp::getProjectName() const
{
    return projectName_;
}

void PipelineTagResp::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool PipelineTagResp::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void PipelineTagResp::unsetprojectName()
{
    projectNameIsSet_ = false;
}

}
}
}
}
}


