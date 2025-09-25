

#include "huaweicloud/codeartspipeline/v2/model/TemplateState.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




TemplateState::TemplateState()
{
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    moduleOrTemplateId_ = "";
    moduleOrTemplateIdIsSet_ = false;
    moduleOrTemplateName_ = "";
    moduleOrTemplateNameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    dslMethod_ = "";
    dslMethodIsSet_ = false;
    parametersIsSet_ = false;
    isManualExecution_ = false;
    isManualExecutionIsSet_ = false;
    jobParameterValidate_ = false;
    jobParameterValidateIsSet_ = false;
    isShowCodehubUrl_ = false;
    isShowCodehubUrlIsSet_ = false;
    isExecute_ = false;
    isExecuteIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    executionMode_ = "";
    executionModeIsSet_ = false;
}

TemplateState::~TemplateState() = default;

void TemplateState::validate()
{
}

web::json::value TemplateState::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(moduleOrTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("module_or_template_id")] = ModelBase::toJson(moduleOrTemplateId_);
    }
    if(moduleOrTemplateNameIsSet_) {
        val[utility::conversions::to_string_t("module_or_template_name")] = ModelBase::toJson(moduleOrTemplateName_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(dslMethodIsSet_) {
        val[utility::conversions::to_string_t("dsl_method")] = ModelBase::toJson(dslMethod_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(isManualExecutionIsSet_) {
        val[utility::conversions::to_string_t("is_manual_execution")] = ModelBase::toJson(isManualExecution_);
    }
    if(jobParameterValidateIsSet_) {
        val[utility::conversions::to_string_t("job_parameter_validate")] = ModelBase::toJson(jobParameterValidate_);
    }
    if(isShowCodehubUrlIsSet_) {
        val[utility::conversions::to_string_t("is_show_codehub_url")] = ModelBase::toJson(isShowCodehubUrl_);
    }
    if(isExecuteIsSet_) {
        val[utility::conversions::to_string_t("is_execute")] = ModelBase::toJson(isExecute_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(executionModeIsSet_) {
        val[utility::conversions::to_string_t("execution_mode")] = ModelBase::toJson(executionMode_);
    }

    return val;
}
bool TemplateState::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("module_or_template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_or_template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleOrTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_or_template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_or_template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleOrTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dsl_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dsl_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDslMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_manual_execution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_manual_execution"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsManualExecution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_parameter_validate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_parameter_validate"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobParameterValidate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_show_codehub_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_show_codehub_url"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsShowCodehubUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_execute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_execute"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsExecute(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("execution_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionMode(refVal);
        }
    }
    return ok;
}


std::string TemplateState::getType() const
{
    return type_;
}

void TemplateState::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TemplateState::typeIsSet() const
{
    return typeIsSet_;
}

void TemplateState::unsettype()
{
    typeIsSet_ = false;
}

std::string TemplateState::getName() const
{
    return name_;
}

void TemplateState::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TemplateState::nameIsSet() const
{
    return nameIsSet_;
}

void TemplateState::unsetname()
{
    nameIsSet_ = false;
}

std::string TemplateState::getModuleOrTemplateId() const
{
    return moduleOrTemplateId_;
}

void TemplateState::setModuleOrTemplateId(const std::string& value)
{
    moduleOrTemplateId_ = value;
    moduleOrTemplateIdIsSet_ = true;
}

bool TemplateState::moduleOrTemplateIdIsSet() const
{
    return moduleOrTemplateIdIsSet_;
}

void TemplateState::unsetmoduleOrTemplateId()
{
    moduleOrTemplateIdIsSet_ = false;
}

std::string TemplateState::getModuleOrTemplateName() const
{
    return moduleOrTemplateName_;
}

void TemplateState::setModuleOrTemplateName(const std::string& value)
{
    moduleOrTemplateName_ = value;
    moduleOrTemplateNameIsSet_ = true;
}

bool TemplateState::moduleOrTemplateNameIsSet() const
{
    return moduleOrTemplateNameIsSet_;
}

void TemplateState::unsetmoduleOrTemplateName()
{
    moduleOrTemplateNameIsSet_ = false;
}

std::string TemplateState::getDisplayName() const
{
    return displayName_;
}

void TemplateState::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool TemplateState::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void TemplateState::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string TemplateState::getDslMethod() const
{
    return dslMethod_;
}

void TemplateState::setDslMethod(const std::string& value)
{
    dslMethod_ = value;
    dslMethodIsSet_ = true;
}

bool TemplateState::dslMethodIsSet() const
{
    return dslMethodIsSet_;
}

void TemplateState::unsetdslMethod()
{
    dslMethodIsSet_ = false;
}

std::map<std::string, Object>& TemplateState::getParameters()
{
    return parameters_;
}

void TemplateState::setParameters(const std::map<std::string, Object>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool TemplateState::parametersIsSet() const
{
    return parametersIsSet_;
}

void TemplateState::unsetparameters()
{
    parametersIsSet_ = false;
}

bool TemplateState::isIsManualExecution() const
{
    return isManualExecution_;
}

void TemplateState::setIsManualExecution(bool value)
{
    isManualExecution_ = value;
    isManualExecutionIsSet_ = true;
}

bool TemplateState::isManualExecutionIsSet() const
{
    return isManualExecutionIsSet_;
}

void TemplateState::unsetisManualExecution()
{
    isManualExecutionIsSet_ = false;
}

bool TemplateState::isJobParameterValidate() const
{
    return jobParameterValidate_;
}

void TemplateState::setJobParameterValidate(bool value)
{
    jobParameterValidate_ = value;
    jobParameterValidateIsSet_ = true;
}

bool TemplateState::jobParameterValidateIsSet() const
{
    return jobParameterValidateIsSet_;
}

void TemplateState::unsetjobParameterValidate()
{
    jobParameterValidateIsSet_ = false;
}

bool TemplateState::isIsShowCodehubUrl() const
{
    return isShowCodehubUrl_;
}

void TemplateState::setIsShowCodehubUrl(bool value)
{
    isShowCodehubUrl_ = value;
    isShowCodehubUrlIsSet_ = true;
}

bool TemplateState::isShowCodehubUrlIsSet() const
{
    return isShowCodehubUrlIsSet_;
}

void TemplateState::unsetisShowCodehubUrl()
{
    isShowCodehubUrlIsSet_ = false;
}

bool TemplateState::isIsExecute() const
{
    return isExecute_;
}

void TemplateState::setIsExecute(bool value)
{
    isExecute_ = value;
    isExecuteIsSet_ = true;
}

bool TemplateState::isExecuteIsSet() const
{
    return isExecuteIsSet_;
}

void TemplateState::unsetisExecute()
{
    isExecuteIsSet_ = false;
}

std::string TemplateState::getJobId() const
{
    return jobId_;
}

void TemplateState::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool TemplateState::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void TemplateState::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string TemplateState::getJobName() const
{
    return jobName_;
}

void TemplateState::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool TemplateState::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void TemplateState::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string TemplateState::getProjectId() const
{
    return projectId_;
}

void TemplateState::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TemplateState::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TemplateState::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string TemplateState::getExecutionMode() const
{
    return executionMode_;
}

void TemplateState::setExecutionMode(const std::string& value)
{
    executionMode_ = value;
    executionModeIsSet_ = true;
}

bool TemplateState::executionModeIsSet() const
{
    return executionModeIsSet_;
}

void TemplateState::unsetexecutionMode()
{
    executionModeIsSet_ = false;
}

}
}
}
}
}


