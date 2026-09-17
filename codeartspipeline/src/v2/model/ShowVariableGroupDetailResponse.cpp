

#include "huaweicloud/codeartspipeline/v2/model/ShowVariableGroupDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowVariableGroupDetailResponse::ShowVariableGroupDetailResponse()
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

ShowVariableGroupDetailResponse::~ShowVariableGroupDetailResponse() = default;

void ShowVariableGroupDetailResponse::validate()
{
}

web::json::value ShowVariableGroupDetailResponse::toJson() const
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
bool ShowVariableGroupDetailResponse::fromJson(const web::json::value& val)
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
            std::vector<QueryVariableGroupDetailResp_related_pipelines> refVal;
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


std::string ShowVariableGroupDetailResponse::getId() const
{
    return id_;
}

void ShowVariableGroupDetailResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowVariableGroupDetailResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowVariableGroupDetailResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowVariableGroupDetailResponse::getProjectId() const
{
    return projectId_;
}

void ShowVariableGroupDetailResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowVariableGroupDetailResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowVariableGroupDetailResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowVariableGroupDetailResponse::getDomainId() const
{
    return domainId_;
}

void ShowVariableGroupDetailResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowVariableGroupDetailResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowVariableGroupDetailResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowVariableGroupDetailResponse::getName() const
{
    return name_;
}

void ShowVariableGroupDetailResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowVariableGroupDetailResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowVariableGroupDetailResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowVariableGroupDetailResponse::getDescription() const
{
    return description_;
}

void ShowVariableGroupDetailResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowVariableGroupDetailResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowVariableGroupDetailResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<QueryVariableGroupDetailResp_variables>& ShowVariableGroupDetailResponse::getVariables()
{
    return variables_;
}

void ShowVariableGroupDetailResponse::setVariables(const std::vector<QueryVariableGroupDetailResp_variables>& value)
{
    variables_ = value;
    variablesIsSet_ = true;
}

bool ShowVariableGroupDetailResponse::variablesIsSet() const
{
    return variablesIsSet_;
}

void ShowVariableGroupDetailResponse::unsetvariables()
{
    variablesIsSet_ = false;
}

std::vector<QueryVariableGroupDetailResp_related_pipelines>& ShowVariableGroupDetailResponse::getRelatedPipelines()
{
    return relatedPipelines_;
}

void ShowVariableGroupDetailResponse::setRelatedPipelines(const std::vector<QueryVariableGroupDetailResp_related_pipelines>& value)
{
    relatedPipelines_ = value;
    relatedPipelinesIsSet_ = true;
}

bool ShowVariableGroupDetailResponse::relatedPipelinesIsSet() const
{
    return relatedPipelinesIsSet_;
}

void ShowVariableGroupDetailResponse::unsetrelatedPipelines()
{
    relatedPipelinesIsSet_ = false;
}

std::string ShowVariableGroupDetailResponse::getCreatorId() const
{
    return creatorId_;
}

void ShowVariableGroupDetailResponse::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool ShowVariableGroupDetailResponse::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void ShowVariableGroupDetailResponse::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string ShowVariableGroupDetailResponse::getUpdaterId() const
{
    return updaterId_;
}

void ShowVariableGroupDetailResponse::setUpdaterId(const std::string& value)
{
    updaterId_ = value;
    updaterIdIsSet_ = true;
}

bool ShowVariableGroupDetailResponse::updaterIdIsSet() const
{
    return updaterIdIsSet_;
}

void ShowVariableGroupDetailResponse::unsetupdaterId()
{
    updaterIdIsSet_ = false;
}

std::string ShowVariableGroupDetailResponse::getCreatorName() const
{
    return creatorName_;
}

void ShowVariableGroupDetailResponse::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool ShowVariableGroupDetailResponse::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void ShowVariableGroupDetailResponse::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string ShowVariableGroupDetailResponse::getUpdaterName() const
{
    return updaterName_;
}

void ShowVariableGroupDetailResponse::setUpdaterName(const std::string& value)
{
    updaterName_ = value;
    updaterNameIsSet_ = true;
}

bool ShowVariableGroupDetailResponse::updaterNameIsSet() const
{
    return updaterNameIsSet_;
}

void ShowVariableGroupDetailResponse::unsetupdaterName()
{
    updaterNameIsSet_ = false;
}

int32_t ShowVariableGroupDetailResponse::getCreateTime() const
{
    return createTime_;
}

void ShowVariableGroupDetailResponse::setCreateTime(int32_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowVariableGroupDetailResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowVariableGroupDetailResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int32_t ShowVariableGroupDetailResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowVariableGroupDetailResponse::setUpdateTime(int32_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowVariableGroupDetailResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowVariableGroupDetailResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


