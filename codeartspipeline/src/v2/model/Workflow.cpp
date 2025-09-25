

#include "huaweicloud/codeartspipeline/v2/model/Workflow.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




Workflow::Workflow()
{
    parameterIsSet_ = false;
    sourceIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
}

Workflow::~Workflow() = default;

void Workflow::validate()
{
}

web::json::value Workflow::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parameterIsSet_) {
        val[utility::conversions::to_string_t("parameter")] = ModelBase::toJson(parameter_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }

    return val;
}
bool Workflow::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parameter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::vector<Source> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
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


std::vector<PipelineParam>& Workflow::getParameter()
{
    return parameter_;
}

void Workflow::setParameter(const std::vector<PipelineParam>& value)
{
    parameter_ = value;
    parameterIsSet_ = true;
}

bool Workflow::parameterIsSet() const
{
    return parameterIsSet_;
}

void Workflow::unsetparameter()
{
    parameterIsSet_ = false;
}

std::vector<Source>& Workflow::getSource()
{
    return source_;
}

void Workflow::setSource(const std::vector<Source>& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool Workflow::sourceIsSet() const
{
    return sourceIsSet_;
}

void Workflow::unsetsource()
{
    sourceIsSet_ = false;
}

std::string Workflow::getName() const
{
    return name_;
}

void Workflow::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Workflow::nameIsSet() const
{
    return nameIsSet_;
}

void Workflow::unsetname()
{
    nameIsSet_ = false;
}

std::string Workflow::getProjectId() const
{
    return projectId_;
}

void Workflow::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool Workflow::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void Workflow::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string Workflow::getProjectName() const
{
    return projectName_;
}

void Workflow::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool Workflow::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void Workflow::unsetprojectName()
{
    projectNameIsSet_ = false;
}

}
}
}
}
}


