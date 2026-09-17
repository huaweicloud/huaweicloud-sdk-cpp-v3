

#include "huaweicloud/codeartspipeline/v2/model/RunPipelineDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RunPipelineDTO::RunPipelineDTO()
{
    sourcesIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    variablesIsSet_ = false;
    chooseJobsIsSet_ = false;
    chooseStagesIsSet_ = false;
    subHook_ = false;
    subHookIsSet_ = false;
    executionPlanId_ = "";
    executionPlanIdIsSet_ = false;
}

RunPipelineDTO::~RunPipelineDTO() = default;

void RunPipelineDTO::validate()
{
}

web::json::value RunPipelineDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourcesIsSet_) {
        val[utility::conversions::to_string_t("sources")] = ModelBase::toJson(sources_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(variablesIsSet_) {
        val[utility::conversions::to_string_t("variables")] = ModelBase::toJson(variables_);
    }
    if(chooseJobsIsSet_) {
        val[utility::conversions::to_string_t("choose_jobs")] = ModelBase::toJson(chooseJobs_);
    }
    if(chooseStagesIsSet_) {
        val[utility::conversions::to_string_t("choose_stages")] = ModelBase::toJson(chooseStages_);
    }
    if(subHookIsSet_) {
        val[utility::conversions::to_string_t("sub_hook")] = ModelBase::toJson(subHook_);
    }
    if(executionPlanIdIsSet_) {
        val[utility::conversions::to_string_t("execution_plan_id")] = ModelBase::toJson(executionPlanId_);
    }

    return val;
}
bool RunPipelineDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sources"));
        if(!fieldValue.is_null())
        {
            std::vector<RunPipelineDTO_sources> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("variables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("variables"));
        if(!fieldValue.is_null())
        {
            std::vector<RunPipelineDTO_variables> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVariables(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("choose_jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("choose_jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChooseJobs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("choose_stages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("choose_stages"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChooseStages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_hook"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_hook"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubHook(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_plan_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_plan_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionPlanId(refVal);
        }
    }
    return ok;
}


std::vector<RunPipelineDTO_sources>& RunPipelineDTO::getSources()
{
    return sources_;
}

void RunPipelineDTO::setSources(const std::vector<RunPipelineDTO_sources>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool RunPipelineDTO::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void RunPipelineDTO::unsetsources()
{
    sourcesIsSet_ = false;
}

std::string RunPipelineDTO::getDescription() const
{
    return description_;
}

void RunPipelineDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RunPipelineDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RunPipelineDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<RunPipelineDTO_variables>& RunPipelineDTO::getVariables()
{
    return variables_;
}

void RunPipelineDTO::setVariables(const std::vector<RunPipelineDTO_variables>& value)
{
    variables_ = value;
    variablesIsSet_ = true;
}

bool RunPipelineDTO::variablesIsSet() const
{
    return variablesIsSet_;
}

void RunPipelineDTO::unsetvariables()
{
    variablesIsSet_ = false;
}

std::vector<std::string>& RunPipelineDTO::getChooseJobs()
{
    return chooseJobs_;
}

void RunPipelineDTO::setChooseJobs(const std::vector<std::string>& value)
{
    chooseJobs_ = value;
    chooseJobsIsSet_ = true;
}

bool RunPipelineDTO::chooseJobsIsSet() const
{
    return chooseJobsIsSet_;
}

void RunPipelineDTO::unsetchooseJobs()
{
    chooseJobsIsSet_ = false;
}

std::vector<std::string>& RunPipelineDTO::getChooseStages()
{
    return chooseStages_;
}

void RunPipelineDTO::setChooseStages(const std::vector<std::string>& value)
{
    chooseStages_ = value;
    chooseStagesIsSet_ = true;
}

bool RunPipelineDTO::chooseStagesIsSet() const
{
    return chooseStagesIsSet_;
}

void RunPipelineDTO::unsetchooseStages()
{
    chooseStagesIsSet_ = false;
}

bool RunPipelineDTO::isSubHook() const
{
    return subHook_;
}

void RunPipelineDTO::setSubHook(bool value)
{
    subHook_ = value;
    subHookIsSet_ = true;
}

bool RunPipelineDTO::subHookIsSet() const
{
    return subHookIsSet_;
}

void RunPipelineDTO::unsetsubHook()
{
    subHookIsSet_ = false;
}

std::string RunPipelineDTO::getExecutionPlanId() const
{
    return executionPlanId_;
}

void RunPipelineDTO::setExecutionPlanId(const std::string& value)
{
    executionPlanId_ = value;
    executionPlanIdIsSet_ = true;
}

bool RunPipelineDTO::executionPlanIdIsSet() const
{
    return executionPlanIdIsSet_;
}

void RunPipelineDTO::unsetexecutionPlanId()
{
    executionPlanIdIsSet_ = false;
}

}
}
}
}
}


