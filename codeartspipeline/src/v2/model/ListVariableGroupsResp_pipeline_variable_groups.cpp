

#include "huaweicloud/codeartspipeline/v2/model/ListVariableGroupsResp_pipeline_variable_groups.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListVariableGroupsResp_pipeline_variable_groups::ListVariableGroupsResp_pipeline_variable_groups()
{
    id_ = "";
    idIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    variablesIsSet_ = false;
    relatedPipelinesIsSet_ = false;
    creatorId_ = "";
    creatorIdIsSet_ = false;
    updaterId_ = "";
    updaterIdIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    updaterName_ = "";
    updaterNameIsSet_ = false;
    createTime_ = 0;
    createTimeIsSet_ = false;
    updateTime_ = 0;
    updateTimeIsSet_ = false;
}

ListVariableGroupsResp_pipeline_variable_groups::~ListVariableGroupsResp_pipeline_variable_groups() = default;

void ListVariableGroupsResp_pipeline_variable_groups::validate()
{
}

web::json::value ListVariableGroupsResp_pipeline_variable_groups::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(variablesIsSet_) {
        val[utility::conversions::to_string_t("variables")] = ModelBase::toJson(variables_);
    }
    if(relatedPipelinesIsSet_) {
        val[utility::conversions::to_string_t("related_pipelines")] = ModelBase::toJson(relatedPipelines_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(updaterIdIsSet_) {
        val[utility::conversions::to_string_t("updater_id")] = ModelBase::toJson(updaterId_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(updaterNameIsSet_) {
        val[utility::conversions::to_string_t("updater_name")] = ModelBase::toJson(updaterName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool ListVariableGroupsResp_pipeline_variable_groups::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
            std::vector<QueryVariableGroupDetailResp_variables> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVariables(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("related_pipelines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("related_pipelines"));
        if(!fieldValue.is_null())
        {
            std::vector<ListVariableGroupsResp_related_pipelines> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedPipelines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updater_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updater_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdaterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updater_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updater_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdaterName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string ListVariableGroupsResp_pipeline_variable_groups::getId() const
{
    return id_;
}

void ListVariableGroupsResp_pipeline_variable_groups::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListVariableGroupsResp_pipeline_variable_groups::idIsSet() const
{
    return idIsSet_;
}

void ListVariableGroupsResp_pipeline_variable_groups::unsetid()
{
    idIsSet_ = false;
}

std::string ListVariableGroupsResp_pipeline_variable_groups::getProjectId() const
{
    return projectId_;
}

void ListVariableGroupsResp_pipeline_variable_groups::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListVariableGroupsResp_pipeline_variable_groups::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListVariableGroupsResp_pipeline_variable_groups::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListVariableGroupsResp_pipeline_variable_groups::getDomainId() const
{
    return domainId_;
}

void ListVariableGroupsResp_pipeline_variable_groups::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListVariableGroupsResp_pipeline_variable_groups::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListVariableGroupsResp_pipeline_variable_groups::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ListVariableGroupsResp_pipeline_variable_groups::getName() const
{
    return name_;
}

void ListVariableGroupsResp_pipeline_variable_groups::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListVariableGroupsResp_pipeline_variable_groups::nameIsSet() const
{
    return nameIsSet_;
}

void ListVariableGroupsResp_pipeline_variable_groups::unsetname()
{
    nameIsSet_ = false;
}

std::string ListVariableGroupsResp_pipeline_variable_groups::getDescription() const
{
    return description_;
}

void ListVariableGroupsResp_pipeline_variable_groups::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListVariableGroupsResp_pipeline_variable_groups::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListVariableGroupsResp_pipeline_variable_groups::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<QueryVariableGroupDetailResp_variables>& ListVariableGroupsResp_pipeline_variable_groups::getVariables()
{
    return variables_;
}

void ListVariableGroupsResp_pipeline_variable_groups::setVariables(const std::vector<QueryVariableGroupDetailResp_variables>& value)
{
    variables_ = value;
    variablesIsSet_ = true;
}

bool ListVariableGroupsResp_pipeline_variable_groups::variablesIsSet() const
{
    return variablesIsSet_;
}

void ListVariableGroupsResp_pipeline_variable_groups::unsetvariables()
{
    variablesIsSet_ = false;
}

std::vector<ListVariableGroupsResp_related_pipelines>& ListVariableGroupsResp_pipeline_variable_groups::getRelatedPipelines()
{
    return relatedPipelines_;
}

void ListVariableGroupsResp_pipeline_variable_groups::setRelatedPipelines(const std::vector<ListVariableGroupsResp_related_pipelines>& value)
{
    relatedPipelines_ = value;
    relatedPipelinesIsSet_ = true;
}

bool ListVariableGroupsResp_pipeline_variable_groups::relatedPipelinesIsSet() const
{
    return relatedPipelinesIsSet_;
}

void ListVariableGroupsResp_pipeline_variable_groups::unsetrelatedPipelines()
{
    relatedPipelinesIsSet_ = false;
}

std::string ListVariableGroupsResp_pipeline_variable_groups::getCreatorId() const
{
    return creatorId_;
}

void ListVariableGroupsResp_pipeline_variable_groups::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool ListVariableGroupsResp_pipeline_variable_groups::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void ListVariableGroupsResp_pipeline_variable_groups::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string ListVariableGroupsResp_pipeline_variable_groups::getUpdaterId() const
{
    return updaterId_;
}

void ListVariableGroupsResp_pipeline_variable_groups::setUpdaterId(const std::string& value)
{
    updaterId_ = value;
    updaterIdIsSet_ = true;
}

bool ListVariableGroupsResp_pipeline_variable_groups::updaterIdIsSet() const
{
    return updaterIdIsSet_;
}

void ListVariableGroupsResp_pipeline_variable_groups::unsetupdaterId()
{
    updaterIdIsSet_ = false;
}

std::string ListVariableGroupsResp_pipeline_variable_groups::getCreatorName() const
{
    return creatorName_;
}

void ListVariableGroupsResp_pipeline_variable_groups::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool ListVariableGroupsResp_pipeline_variable_groups::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void ListVariableGroupsResp_pipeline_variable_groups::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string ListVariableGroupsResp_pipeline_variable_groups::getUpdaterName() const
{
    return updaterName_;
}

void ListVariableGroupsResp_pipeline_variable_groups::setUpdaterName(const std::string& value)
{
    updaterName_ = value;
    updaterNameIsSet_ = true;
}

bool ListVariableGroupsResp_pipeline_variable_groups::updaterNameIsSet() const
{
    return updaterNameIsSet_;
}

void ListVariableGroupsResp_pipeline_variable_groups::unsetupdaterName()
{
    updaterNameIsSet_ = false;
}

int32_t ListVariableGroupsResp_pipeline_variable_groups::getCreateTime() const
{
    return createTime_;
}

void ListVariableGroupsResp_pipeline_variable_groups::setCreateTime(int32_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ListVariableGroupsResp_pipeline_variable_groups::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ListVariableGroupsResp_pipeline_variable_groups::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int32_t ListVariableGroupsResp_pipeline_variable_groups::getUpdateTime() const
{
    return updateTime_;
}

void ListVariableGroupsResp_pipeline_variable_groups::setUpdateTime(int32_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ListVariableGroupsResp_pipeline_variable_groups::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ListVariableGroupsResp_pipeline_variable_groups::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


