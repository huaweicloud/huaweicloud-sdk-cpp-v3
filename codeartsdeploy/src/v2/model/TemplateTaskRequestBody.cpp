

#include "huaweicloud/codeartsdeploy/v2/model/TemplateTaskRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




TemplateTaskRequestBody::TemplateTaskRequestBody()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    slaveClusterId_ = "";
    slaveClusterIdIsSet_ = false;
    configsIsSet_ = false;
}

TemplateTaskRequestBody::~TemplateTaskRequestBody() = default;

void TemplateTaskRequestBody::validate()
{
}

web::json::value TemplateTaskRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(slaveClusterIdIsSet_) {
        val[utility::conversions::to_string_t("slave_cluster_id")] = ModelBase::toJson(slaveClusterId_);
    }
    if(configsIsSet_) {
        val[utility::conversions::to_string_t("configs")] = ModelBase::toJson(configs_);
    }

    return val;
}
bool TemplateTaskRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configs"));
        if(!fieldValue.is_null())
        {
            std::vector<ConfigInfoDO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigs(refVal);
        }
    }
    return ok;
}


std::string TemplateTaskRequestBody::getProjectId() const
{
    return projectId_;
}

void TemplateTaskRequestBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TemplateTaskRequestBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TemplateTaskRequestBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string TemplateTaskRequestBody::getProjectName() const
{
    return projectName_;
}

void TemplateTaskRequestBody::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool TemplateTaskRequestBody::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void TemplateTaskRequestBody::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string TemplateTaskRequestBody::getTemplateId() const
{
    return templateId_;
}

void TemplateTaskRequestBody::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool TemplateTaskRequestBody::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void TemplateTaskRequestBody::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string TemplateTaskRequestBody::getTaskName() const
{
    return taskName_;
}

void TemplateTaskRequestBody::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool TemplateTaskRequestBody::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void TemplateTaskRequestBody::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string TemplateTaskRequestBody::getSlaveClusterId() const
{
    return slaveClusterId_;
}

void TemplateTaskRequestBody::setSlaveClusterId(const std::string& value)
{
    slaveClusterId_ = value;
    slaveClusterIdIsSet_ = true;
}

bool TemplateTaskRequestBody::slaveClusterIdIsSet() const
{
    return slaveClusterIdIsSet_;
}

void TemplateTaskRequestBody::unsetslaveClusterId()
{
    slaveClusterIdIsSet_ = false;
}

std::vector<ConfigInfoDO>& TemplateTaskRequestBody::getConfigs()
{
    return configs_;
}

void TemplateTaskRequestBody::setConfigs(const std::vector<ConfigInfoDO>& value)
{
    configs_ = value;
    configsIsSet_ = true;
}

bool TemplateTaskRequestBody::configsIsSet() const
{
    return configsIsSet_;
}

void TemplateTaskRequestBody::unsetconfigs()
{
    configsIsSet_ = false;
}

}
}
}
}
}


